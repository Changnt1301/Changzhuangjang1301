#include <bits/stdc++.h>
using namespace std;

void printAdress1(int x)
{
    cout << (&x) << endl;
}
void printAdress2(int& x)
{
    cout << (&x) << endl;
}
int main()
{
    int n;
    cin>>n;
    cout << "Adress of n = " << (&n) << endl;
    cout << "Adress of func 1 = ";
    printAdress1(n);
    cout << "Adress of func 2 = ";
    printAdress2(n);
    return 0;
}
