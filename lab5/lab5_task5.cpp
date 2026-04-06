#include<iostream>
using namespace std;

int main() {
    int x = 5, y = 3;
    auto productsum = [x, y]() {
        cout << "Sum = " << x + y << endl;
        cout << "Product = " << x * y << endl;
    };

    productsum();
}