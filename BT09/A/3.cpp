#include<bits/stdc++.h>
using namespace std;

int main()
{
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c; // Lỗi: Con trỏ c chỉ trỏ từ phần tử thứ 3 của mảng a trở đi nên việc giải phóng một vùng nhớ không hợp lệ, dẫn đến hành vi không xác định
    cerr << "a after deleting c:" << "-" << a << "-" << endl; // Lỗi: Con trỏ c bị giải phóng ảnh hướng đển dữ liệu mảng a, in ra mảng a không đưa ra kết quả như mong đợi
    // deleta a[];
    // Lỗi:Chưa giải phóng mảng a để tránh rò rỉ bộ nhớ
    return 0;
}
