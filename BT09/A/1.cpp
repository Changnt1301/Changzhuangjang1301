#include<iostream>
#include<cstring>
using namespace std;

char* concat(const char* str1, const char* str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    size_t Length = len1 + len2;
    char* result = new char[Length + 1];
    strcpy(result, str1);
    strcat(result, str2);
    return result;
}

int main() {
    const char* s1 = "Hello";
    const char* s2 = "World";
    char* concatenated = concat(s1, s2);
    cout << concatenated << endl;
    delete[] concatenated;
    return 0;
}

