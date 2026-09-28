//The + operator can be used between strings to add them together to make a new string. This is called concatenation

#include <iostream>
using namespace std;

int main() {
    string firstName = "Samuel";
    string lastName = "Abiye";
    string fullName = firstName.append(" ").append(lastName);

    cout << "Full Name: " << fullName << endl;

    return 0;
}