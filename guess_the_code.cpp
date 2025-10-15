#include <iostream>
using namespace std;

int main() {
    const int CORRECT_CODE = 1234;
    int userCode;
    
    cout << "Enter the door code: ";
    cin >> userCode; 

    if (userCode == CORRECT_CODE) {
        cout << "Access granted\n";
    } else {
        cout << "Access denied\n";
    }
}