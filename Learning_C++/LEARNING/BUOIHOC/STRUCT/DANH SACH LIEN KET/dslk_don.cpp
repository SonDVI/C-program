/*

                        Danh Sách Liên kết


    - Tựa như vector, là một mảng động, có thể thay đổi kích thước 1 cách linh hoạt
    - Hạn chế : chạy chậm hơn vector và mảng 1D, không thể truy cập trực tiếp qua chỉ số. Đổi lại có nhiều thao tác như thêm vào đầu, vào cuối.

    - Tính chất :
        +) DSLK có thể mở rộng và thu hẹp linh hoạt.
        +) Phẩn từ cuối cùng trong DSLK trỏ vào NULL.
        +) Không lãng phí bộ nhớ nhưng cần thêm bộ nhớ để lưu phần con trỏ.
        +) Các phần tử trong DSLK được gọi là Node, được cấp phát động.
        +) Đây là cấu trúc dữ liệu cấp phát động, nên khi còn bộ nhớ thì sẽ còn thêm được phần tử vào DSLK.

        +)Các node nằm rải rác trong bộ nhớ.
        +)Node trước sẽ chứa địa chỉ của Node sau.



*/
#include <bits/stdc++.h>
using namespace std;
struct SinhVien{
    string id, name;
    double gpa;
    SinhVien(string ma, string ten, double diem) {
        id = ma; name = ten; gpa = diem;
    }
};

struct node{
    int data; //int, char, string, SinhVien, Product.
    node *next; //con trỏ kiểu node tên là next(có thể thay đổi tên), dùng để lưu địa chỉ của node phía sau.

    node(int x) {
        data = x; next = NULL;
    }
};


//pass by value, khong co tham chieu. Để thay đổi con trỏ cấp 1  cần dùng con trỏ cấp 2 hoặc dùng tham chiếu.
void duyet(node *head) {
    while(head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}



int sz(node *head) {
    int dem = 0;
    while(head != NULL) {
        ++dem; head = head->next; // cap phat dong 1 node moi co data la x
    }
    return dem;
}
//CACH THAY DOI HEAD. 1 LA DUNG THAM CHIEU, 2 LA DUNG CON TRO CAP 2
void themdau(node *&head, int x) {
    node *newnode = new node(x);
    newnode->next = head; // trỏ của newnode trỏ vào địa chỉ thằng head
    head = newnode; //update;
}
//CACH 2
void themdau2(node **head, int x) {
    node *newnode = new node(x);
    newnode->next = *head; // trỏ của newnode trỏ vào địa chỉ thằng head
    *head = newnode; //update;
}

//CACH 3
node* themdau3(node *head, int x) {
    node *newnode = new node(x);
    newnode->next = head; // trỏ của newnode trỏ vào địa chỉ thằng head
    head = newnode; //update;
    return head;
}




//THÊM CUỐI
//sẽ bị lỗi nếu node *head = NULL
/*void themcuoi(node *&head, int x) {
    node *newnode = new node(x);
    node *tmp = head;
    while(tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}*/
void themcuoi(node *&head, int x) {
    node *newnode = new node(x);
    node *tmp = head;
    if(tmp == NULL) {
        newnode->next = head;
        head = newnode;
        return;
    }   
    while(tmp->next != NULL) {

        tmp = tmp->next;
    }
    tmp->next = newnode;
}


//THÊM GIỮA
//n node : 1 -> n + 1;
void themgiua(node *&head, int x, int k) {
    node *newnode = new node(x);
    node *tmp = head;
    if(k < 1 || k > sz(head) + 1) return;
    if(k == 1) { //trường hợp thêm vào vị trí đầu.
        newnode->next = head;
        head = newnode;
        return;
    }
    for(int i = 1; i <= k - 2; i++) {
        tmp = tmp->next;
    }
    //tmp = k - 1;
    newnode->next = tmp->next;
    tmp->next = newnode;
}



//XÓA ĐẦU
void xoadau(node *&head) {
    if(head == NULL) return;
    node *temp = head;
    head = head->next;
    delete temp;
}

//XÓA CUỐI
void xoacuoi(node *&head) {
    if(head == NULL ) return;
    node *tmp = head;
    while(tmp->next->next != NULL) {
        tmp = tmp->next;
    }
    node *xoa = tmp->next;
    tmp->next = NULL;
    delete xoa;
}
//XÓA GIỮA

void xoagiua(node *&head, int k) {
    if(k < 1 || k > sz(head)) return;
    node *tmp = head;
    if(k == 1) {
        head = head->next;
        delete tmp;
        return;
    }
    for(int i = 1; i <= k - 2; i++) {
        tmp = tmp->next;
    }
    node *xoa = tmp->next;
    tmp->next = xoa->next;

}

int main() {
    int a[100]; // CẤP PHÁT TĨNH : STACK

    int *b = new int[100]; //  CẤP PHÁT ĐỘNG, CÚ PHÁP SẼ DÙNG TOÁN TỬ NEW. b sẽ được coi như mảng 1D vì trỏ sẽ tham chiếu vào ô nhớ(-->có thể sử dụng chỉ số), trỏ này sẽ trỏ vào ô nhớ đầu tiên trong 400 bytes (1 int  = 4 bytes).

    //SinhVien *s = new SinhVien[100]; //luu duoc 100 sinh vien.

    //delete []s; // xoa bo nho cua cap phat dong, neu la array thi them [] (>=2 phan tu).

    SinhVien *s = new SinhVien("SV001", "NAM", 3.2);
    
    cout << s->id << " " << s->name << " " << s->gpa << endl;


    node *head = new node(10);
    node *y = new node(20);
    node *z = new node(30);
    cout << head << " " << y << " " << z << endl; //dia chi cua x, y ,z; --> muốn thành một DSLK thì phải lưu địa chỉ của y vào x, z vào y, còn sau z không còn trỏ nào thì lưu NULL
    head->next = y;
    y->next = z;
    cout << head << endl; //dia chi cua x
    cout << head->data << endl; // 10
    cout << head->next->data << endl; // 20
    cout << head->next->next->data << endl; // 30
    duyet(head);
    duyet(y);
    cout << sz(head) << endl;


    for(int i = 1;  i <= 100; i++) {
        themdau(head, i);
    }
    duyet(head);

    /*for(int i = 1;  i <= 100; i++) {
        themdau2(&head, i);
    }
    duyet(head);*/

    /*for(int i = 1;  i <= 100; i++) {
        head = themdau3(head, i);
    }
    duyet(head);*/


    themcuoi(head, 1000);
    duyet(head);

    themgiua(head, 999, 20);

    duyet(head);

    xoadau(head);
    duyet(head);

    xoacuoi(head);
    duyet(head);

    xoagiua(head, 3);
    duyet(head);

}