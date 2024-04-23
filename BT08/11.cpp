#include <iostream>
#include <cstring>
using namespace std;

struct String {
    int n;
    char* str;
    String(const char* s) {
        n = strlen(s);
        str = new char[n + 1];
        strcpy(str, s);
    }
    ~String() {
        delete[] str;
    }
    void print() const {
        cout << str;
    }
    void append(const char* s) {
        int newLen = n + strlen(s);
        char* temp = new char[newLen + 1];
        strcpy(temp, str);
        strcat(temp, s);
        delete[] str;
        str = temp;
        n = newLen;
};

int main() {
    String greeting("Hi");
    greeting.print();
    cout << endl;
    greeting.append(" there");
    greeting.print();
    cout << endl;
    return 0;
}
