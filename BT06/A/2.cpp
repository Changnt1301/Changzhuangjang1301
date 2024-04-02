#include <bits/stdc++.h>
using namespace std;

unsigned long factorial(int x)
{
    cout << "x = " << x << " at " << (&x) << endl;
    if(x == 0 || x == 1) return 1;
    return x * factorial(x-1);
}

int main()
{
    int n;
    cin>>n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
