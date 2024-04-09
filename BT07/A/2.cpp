#include <bits/stdc++.h>
using namespace std;

void printSize(int arr[])
{
    cout << sizeof(*arr) << endl;
}

int main()
{
    int a[] = {9,5,8,2,1,3};
    int b[7] = {1,2,3};
    cout << sizeof(a) << endl;
    printSize(a);
    cout << sizeof(b) << endl;
    printSize(b);
    return 0;
}
