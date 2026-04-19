/*
        CÔNG THỨC ĐỒNG DƯ
    - ĐỒNG DƯ LÀ GÌ ?
        >> LÀ HAI SỐ CHIA CHO CÙNG 1 SỐ CHO CÙNG 1 SỐ DƯ.


    - CÔNG THỨC ĐỒNG DƯ:
        >> (A + B) % C = ((A % C) + (B % C)) % C.

        >> (A - B) % C = ((A % C) - (B % C) + C) % C.

        >> (A * B) % C = ((A % C) * (B % C)) % C.

        >> (A / B) % C = ((A % C) * (B^-1 % C)) % C.

        - Nghich đảo của B (B^-1) là số mà khi nhân với B sẽ cho ra 1. Nghich đảo của B có thể được tính bằng cách sử dụng thuật toán Euclid mở rộng hoặc sử dụng định lý Fermat nếu C là số nguyên dương và là số nguyên tố.
*/