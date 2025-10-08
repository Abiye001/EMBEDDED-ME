/*
Short Hand If...Else (Ternary Operator)
There is also a short-hand if else, which is known as the ternary operator because it consists of three operands.

It can be used to replace multiple lines of code with a single line, and is often used to replace simple if else statements:

variable = (condition) ? expressionTrue : expressionFalse;
*/

#include <iostream>
using namespace std;
 int main() {
    int time = 20;
    string result = (18>=time) ? "Good day. " : "Good evening. ";
    cout << result << endl;
    return 0;
    




 }