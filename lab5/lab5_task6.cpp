#include <iostream>
using namespace std;
int main() {
    int a = 10;
    auto increment = [&]() {
        a ++;
        cout << "value= " << a << endl;
    };
    increment();
    increment();
    increment();
    return 0;
}
