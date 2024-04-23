#include <bits/stdc++.h>
using namespace std;

char* reverse(const char* a) {
    int n = strlen(a);
    char* result = new char[n+1];
    strcpy(result, a);
    char *start = result;
    char *end = result + n - 1;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return result;
}

char* delete_char(const char* a, char c) {
    int n = strlen(a);
    char* result = new char[n+1];
    char *p = result;
    while (*a != '\0') {
        if (*a != c) {
            *p = *a;
            p++;
        }
        a++;
    }
    *p = '\0';
    return result;
}

char* pad_right(const char* a, int n) {
    int len = strlen(a);
    char* result = new char[len+1];
    strcpy(result, a);
    while (len < n) {
        result[len] = '_';
        len++;
    }
    result[len] = '\0';

    return result;
}

char* pad_left(const char* a, int n) {
    int len = strlen(a);
    char* result = new char[len+1];
    strcpy(result, a);
    if (len < n) {
        int spaces = n - len;
        for (int i = len - 1; i >= 0; i--) {
            result[i + spaces] = a[i];
        }
        for (int i = 0; i < spaces; i++) {
            result[i] = '_';
        }
        result[n] = '\0';
    }
    return result;
}

char* truncate(const char* a, int n) {
    int len = strlen(a);
    char* result = new char[len+1];
    strcpy(result, a);

    if (len > n) {
        result[n] = '\0';
    }
    return result;
}

char* trim_left(const char* a) {
    int spaces = 0;
    int len = strlen(a);
    char* result = new char[len+1];
    strcpy(result, a);
    for (char *q = result; *q != '\0'; q++) {
        if(*q == '_') spaces++;
        else break;
    }
    int s = len-spaces;
    for(int i = 0; i < s; i++){
        result[i] = a[i+spaces];
    }
    result[s] = '\0';
    return result;
}

char* trim_right(const char* a) {
    int len = strlen(a);
    char* result = new char[len+1];
    strcpy(result, a);
    char *end = result + len - 1;
    while (end >= result && *end == '_') {
        end--;
    }
    *(end + 1) = '\0';
    return result;
}

int main() {
    const char* str1 = "Hello World";
    const char* str2 = "Guten Morgen";
    const char* str3 = "Zhuang";
    const char* str4 = "Jang";
    const char* str5 = "abcdefxyz123456789";
    const char* str6 = "    Hmmmmm";
    const char* str7 = "Bye       ";

    cout << "Before reverse: " << str1 << endl;
    char* s1 = reverse(str1);
    cout << "After reverse: " << s1 << endl;
    delete[] s1;

    cout << "Before delete_char: " << str2 << endl;
    char* s2 = delete_char(str2, 'e');
    cout << "After delete_char 'e': " << s2 << endl;
    delete[] s2;

    cout << "Before pad_right: " << str3 << endl;
    char* s3 = pad_right(str3, 15);
    cout << "After pad_right: " << s3 << endl;
    delete[] s3;

    cout << "Before pad_left: " << str4 << endl;
    char* s4 = pad_left(str4, 15);
    cout << "After pad_left: " << s4 << endl;
    delete[] s4;

    cout << "Before truncate: " << str5 << endl;
    char* s5 = truncate(str5, 11);
    cout << "After truncate: " << s5 << endl;
    delete[] s5;

    cout << "Before trim_left: " << str6 << endl;
    char* s6 = trim_left(str6);
    cout << "After trim_left: " << s6 << endl;
    delete[] s6;

    cout << "Before trim_right: " << str7 << endl;
    char* s7 = trim_right(str7);
    cout << "After trim_right: " << s7 << endl;
    delete[] s7;

    return 0;
}
