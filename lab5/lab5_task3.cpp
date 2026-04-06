#include<iostream>
using namespace std;
int multiply(const int &a, const int &b);
int main() {
    int x = 5, y = 4;
    int result = multiply(x, y);
    cout << "Product = " << result;
}
int multiply(const int &a, const int &b) {
    return a * b;
}