#include <bits/stdc++.h>
using namespace std;

char a[5] = "abcd";

int main()
{
    char b[5] = "abcd";

    cout<<a<<endl;
    for(int i=0; i<5; i++)
    {
        cout<<a[i]<<" ";
        if(a[i] == '\0') cout<<"0"<<endl;
    }
