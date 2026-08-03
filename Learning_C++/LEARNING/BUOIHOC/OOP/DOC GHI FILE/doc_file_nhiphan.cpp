/*
                                Đọc File Nhị Phân
II. File Nhị Phân
    - Đọc ghi theo kiểu nhị phân sẽ được đọc ghi dưới dạng byte thô, tốn ít bộ bộ nhớ và nhanh hơn so với đọc ghi file text. Dùng mode ios::binary khi đọc ghi file nhị phân, 3 lớp được sử dụng tương tự như file txt : ifstream, ofstream, fstream.

    - Cú Pháp : 
                            out.write((char*)&var, sizeof(var));
                            in.read((char*)&var, sizeof(var));

        - Trong đó, in và out là 2 đối tượng thuộc 3 lớp đọc ghi ở trên.
        - Đối với đọc file nhị phân bạn cần ép địa chỉ của biến muốn đọc ghi sang con trỏ char. Tham số thứ 2 của 2 hàm là kích thước theo byte của biến muốn đọc ghi.
    
    - Khi đọc ghi file nhị phân bạn không thể đọc ghi các kiểu object có dữ liệu động như vector, string, map...
    - Các biến có kiểu dữ liệu động thường được lưu bộ nhớ trong vùng nhớ heap nên khi ghi vào file nó chỉ lưu con trỏ chứ không lưu nội dung dẫn đến việc ghi file thất bại.



            HÀM/MODE                        CHỨC NĂNG
            file.seekg(pos,mode);             Di chuyển con trỏ file khi đọc
            file.seekp(pos, mode);            Di chuyển con trỏ file khi ghi
            file.tellg()                      Tìm vị trí con trỏ để đọc
            file.tellp()                      Tìm vị trí con trỏ để ghi
            ios::beg                          Di chuyển từ đầu file
            ios::cur                          Di chuyển từ vị trí hiện tại của con trỏ file
            ios::end                          Di chuyển từ cuối file

*/