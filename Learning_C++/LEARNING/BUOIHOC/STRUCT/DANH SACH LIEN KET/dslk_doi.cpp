/*
                    DANH SÁCH LIÊN KẾT ĐÔI
    - Ưu điểm của DSLK đôi đó là có thể di chuyển DSLK theo cả 2 chiều, tuy nhiên nó cũng cần thêm bộ nhớ để lưu con trỏ tới node liến trước cũng như các thao tác trên DSLK đôi sẽ nhiều hơn so với DSLK đơn.
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

struct node{
    int data; // string, char, boolean, SinhVien, Product
    node *next; //con trỏ kiểu node tên là next : lưu địa chỉ của node phía sau
    node *prev; 

    node(int x){
        data = x; next = prev = NULL;
    }
};
//pass by value 
void duyet(node *head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int sz(node *head){
    int dem = 0;
    while(head != NULL){
        ++dem; head = head->next;
    }
    return dem;
}
//Dùng tham chiếu đến con trỏ
void themdau(node *&head, int x){
    node *newnode = new node(x); //cấp phát động 1 node mới có data là x
    newnode->next = head;
    if(head != NULL)
        head->prev = newnode;
    head = newnode;
}

void themcuoi(node *&head, int x){
    node *newnode = new node(x);
    node *tmp = head;
    if(tmp == NULL){
        newnode->next = head; head = newnode;
        return;
    }
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newnode;
    newnode->prev = tmp;
}
// n node : 1 => n + 1
void themgiua(node *&head, int x, int k){
    if(k < 1 || k > sz(head) + 1) return;
    node *newnode = new node(x);
    node *tmp = head;
    if(k == 1){
        newnode->next = head; 
        if(head != NULL) head->prev = newnode;
        head = newnode; return;
    }
    for(int i = 1; i <= k - 1; i++){
        tmp = tmp->next;
    }
    // tmp : k
    newnode->next = tmp; 
    tmp->prev->next = newnode;
    newnode->prev = tmp->prev;
    tmp->prev = newnode;
}

void xoadau(node *&head){
    if(head == NULL) return;
    node *tmp = head; // lưu lại địa chỉ cũ của head
    head = head->next;
    if(head != NULL) head->prev = NULL;
    delete tmp;
}

void xoacuoi(node *&head){
    if(head == NULL) return;
    node *tmp = head;
    if(tmp->next == NULL){
        head = NULL; delete tmp;
        return;
    }
    while(tmp->next->next != NULL){
        tmp = tmp->next;
    }
    node *xoa = tmp->next;
    tmp->next = NULL;
    delete xoa; 
}

void xoagiua(node *&head, int k){
    if(k < 1 || k > sz(head)) return;
    node *tmp = head;
    if(k == 1){
        head = head->next; 
        if(head != NULL) head->prev = NULL;
        delete tmp;
        return;
    }
    for(int i = 1; i <= k - 1; i++){
        tmp = tmp->next;
    }
    //tmp : k
    tmp->prev->next = tmp->next; // k + 1
    if(tmp->next != NULL){
        tmp->next->prev = tmp->prev;
    }
    delete tmp;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    node *head = NULL;
    for(int i = 1; i <= 100; i++){
        themcuoi(head, i);
    }
    xoagiua(head, 20);
    duyet(head);
}
