#include<iostream>
using namespace std;

int* localPoint()
{
    int localValriable = 10;
    int* ptr = &localValriable;
    return ptr;
}

int main()
{
    int* ptrToLocal = localPoint();
    delete ptrToLocal;
    cout << *ptrToLocal << endl;
    // Vì vùng nhớ đã được giải phóng nên việc truy cập vào có thể dẫn đến lỗi chương trình
    return 0;
}
