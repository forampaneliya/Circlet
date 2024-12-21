#include <iostream>
using namespace std;

int main() {
    int rows = 4; 
    int start = 11; 

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            cout << (start + (i * (i + 1) / 2) + j) << " "; 
        }
        cout << endl; 
    }

    return 0;
}