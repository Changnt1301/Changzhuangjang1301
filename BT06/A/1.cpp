#include <bits/stdc++.h>
using namespace std;

int a[5] = {1, 4, 8, 2, 5};
char b[3] = {'a', 'b', 'c'};

int main()
{
    for(int i = 1; i < 4; i++) {
        cout << (&a[i]) << " ";
    }
    cout << endl;

    for(int i = 0; i < 3; i++) {
        cout << ((void *)&b[i]) << " ";
    }
    cout << endl;
    return 0;
}
