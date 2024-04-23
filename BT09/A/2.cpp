 #include<iostream>
 using namespace std;

 int main()
 {
     int* p = new int;
     int* p2 = p;
     *p = 10;
     delete p;
     *p2 = 100; // Lỗi: Con trỏ p2 trỏ vào một vùng nhớ đã được giải phóng, dẫn đến hành vi không xác định.
     cout << *p2; // Lỗi: Con trỏ p2 trỏ vào một vùng nhớ đã được giải phóng, dẫn đến hành vi không xác định.
     delete p2; // Lỗi: Vùng nhớ đã được giải phóng trước đó bởi delete p, giải phóng lại sẽ gây ra lỗi.
     return 0;
 }
