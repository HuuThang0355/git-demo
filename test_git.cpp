#include <iostream>
#include <vector>
using namespace std;

// Branch -1

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

int main() {
    
    cout << "Hello World\n";
    return 0;
}