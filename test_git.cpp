#include <iostream>
#include <vector>
using namespace std;

void first_program() {

    cout << "First Programming\n";
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
    
    cout << "Hello World\n";
    return 0;
}