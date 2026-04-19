/*          MEMORY LAYOUT OF C++

IMAGE : https://www.geeksforgeeks.org/cpp/memory-layout-of-cpp-program/
   
    
    In C++, the memory layout of a program is typically divided into several segments, each serving a specific purpose. The main segments include:

        1. STACK (only few megabytes, depend on your system, 32-bit or 64-bit) : Đây là nơi lưu trữ các biến cục bộ (local variables trong main function và các hàm khác), ngoài ra là nơi lưu trữ các phát tĩnh (Static variables).

        2. HEAP (lớn hơn stack, có thể lên đến hàng gigabyte, tùy thuộc vào hệ thống và cấu hình của bạn(RAM)) : Đây là nơi lưu trữ các đối tượng được cấp phát động (dynamic memory allocation) như các biến được tạo bằng từ khóa new hoặc malloc. Bộ nhớ heap có thể mở rộng hoặc thu nhỏ trong quá trình chạy của chương trình, nhưng việc quản lý bộ nhớ heap thường phức tạp hơn so với stack.

        3. UNINITIALIZED DATA (BSS) : Đây là nơi lưu trữ các biến toàn cục và biến tĩnh chưa được khởi tạo. Các biến trong phân đoạn này sẽ được tự động khởi tạo về giá trị mặc định (thường là 0 đối với số nguyên và nullptr đối với con trỏ).

        4. INITIALIZED DATA : Đây là nơi lưu trữ các biến toàn cục và biến tĩnh đã được khởi tạo với một giá trị cụ thể. Các biến trong phân đoạn này sẽ giữ giá trị mà bạn đã gán cho chúng khi chương trình bắt đầu chạy.

        5. TEXT : Đây là nơi lưu trữ mã máy (machine code) của chương trình, bao gồm các hàm và lệnh mà chương trình sẽ thực thi. Phân đoạn này thường được đánh dấu là read-only để ngăn chặn việc sửa đổi mã máy trong quá trình chạy.











*/