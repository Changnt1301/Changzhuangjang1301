#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6] = {1, 8, 3, 5, 10, 6};

    arr[-1] = 22;
    arr[6] = 37;
    arr[7] = 80;
    cout << arr[-1] << endl;
    cout << arr[6] << endl;
    cout << arr[7] << endl;
    cout << arr[0] << endl;
    cout << arr[1] << endl;
}
