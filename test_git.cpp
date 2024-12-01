#include "file.h"
#include <iostream>
#include <vector>
using namespace std;

// Branch -1
// Bracnh - 2 - 3
void first_program() {

    cout << "First Programming\n";
}

int findMax(vector<int>& a) {
    int max = a[0];
    for(int i = 1; i < a.size(); i++) {
        if(a[i] > max) max = a[i];
    }

    return max;
}


int sort(vector<int>& a) {
    for(int i = 0; i < a.size() - 1; i++) {
        for(int j = i + 1; j < a.size(); j++) {
            if(a[i] > a[j])
                swap(a[i], a[j]);
        }
    }
}

int main() {
    Student st = init();

    cout << st.age << endl;
    cout << st.name << endl;
    return 0;
}