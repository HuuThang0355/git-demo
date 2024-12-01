#ifndef FILE_H
#define FILE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    int age;
    string name;
};

Student init() {
    Student st;
    st.age = 10;
    st.name = "Vo Huu Thang";
}

string def() {
    string ans = "thang dpe trai";

    return ans;
}


#endif