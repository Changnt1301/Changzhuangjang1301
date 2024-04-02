#include <bits/stdc++.h>
using namespace std;

void cube(int i) {
		   i = i * i * i;
		}
int main()
{
    int count = 0;
    for (int i = 0; i < 1000; i++) {
        cube(i);
        count++;
    }
    cout << count << endl;
    return 0;
}
