#include <bits/stdc++.h>
using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   cout << (&x) << endl;
}
void g(int yval)
{
   int y;
   cout << (&y) << endl;
}

int main()
{
   f(12);
   g(11);
   return 0;
}

