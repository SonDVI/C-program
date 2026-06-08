/*

            DE QUY ( RECURSION )
    1.CAU TRUC DU LIEU NGAN XEP
    - Ngan xep (stack) là một cấu trúc dữ liệu có quan hệ mật thiết với cơ chế hoạt ddoongoj của đệ quy. Để hiểu được cách hàm đệ quy hoạt động, ta cần nắm được cách hoạt động của cấu trức dữ liệu ngăn xếp.

    - Ngăn xếp là một cấu trúc dữ liệu hỗ trợ 2 thao tác push và pop. Trong đó push giúp thêm 1 phân tử vào đỉnh ngăn xếp, pop giúp xóa 1 phần tử khỏi đỉnh ngăn xếp. Cả 2 thao tác này đều được thực hiện ở đỉnh ngăn xếp.

    - Ngăn xếp hoạt động theo nguyên tắc viết tắt là LIFO (LAST IN FIRST OUT) nghĩa là vào cuối thì ra đầu. Các phần tử vào cuối cùng sẽ được ra đầu tiên.

    - Trong chương trình tồng tại một bộ nhớ là bộ nhớ ngăn xếp, cách hoạt động của bộ nhớ này tương tự như cách hoạt động của cầu trúc dữ liệu ngăn xếp.

    2. Stack frame:
    - Stack frame là một kỹ thuật quản lí bộ nhớ xuất hiện trong một số ngôn ngữ lập trình, nó có nhiệm vụ tạo ra và loại bỏ các biến tạm thời.
    - Có thể hiểu Stack frame là một tập hợp tất cả các thông tin liên quan đến một chương trình con( được tạo ra khi xuất hiện lời gọi hàm).
    - Stack frame chỉ tồn tại trong quá trình chương trình thực thi, stack frame giúp các ngôn ngữ lập trình được chức năng đệ quy cho chương trình con.
*/

#include <bits/stdc++.h>
using namespace std;

void A() {
    cout << "A ";
}
void B() {
    cout << "B ";
    A();
    cout << "C ";
    A();
    cout << "D ";
}

int main() {
    B();
}