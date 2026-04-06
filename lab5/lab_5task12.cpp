#include<iostream>
using namespace std;
void printType(int x) {
    cout << x << " is of type int" << endl;
}
void printType(double x) {
    cout << x << " is of type double" << endl;
}
void printType(char x) {
    cout << x << " is of type char" << endl;
}
void printType(string x) {
    cout << x << " is of type string" << endl;
}
int main() {
    printType(10);
    printType(3.14);
    printType('A');
    printType("Hello");
}