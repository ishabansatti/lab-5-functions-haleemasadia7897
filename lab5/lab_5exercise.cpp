#include <iostream>
#include <cmath>
using namespace std;
int calculate(int, int, char);
double calculate(double, double, char);
double power(double base, int exp);
void total_calc();
int calculate(int a, int b, char op) {
    total_calc();
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if(b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        default:
            cout << "Invalid operator!" << endl;
            return 0;
    }
}
double calculate(double a, double b, char op) {
    total_calc();
    switch(op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if(b == 0) {
                cout << "Error: Division by zero!" << endl;
                return 0;
            }
            return a / b;
        default:
            cout << "Invalid operator!" << endl;
            return 0;
    }
}
double power(double base, int exp) {
    if(exp == 0)
        return 1;
    else if(exp > 0)
        return base * power(base, exp - 1);
    else
        return 1 / power(base, -exp);
}
void total_calc() {
    static int count = 0;
    count++;
    cout << "Calculation count: " << count << endl;
}

int main() {
    auto absDiff = [](double x, double y) {
        cout << "Absolute Difference: " << fabs(x - y) << endl;
    };
    cout << "Int Calculation: " << calculate(10, 5, '+') << endl;
    cout << "Int Calculation: " << calculate(10, 0, '/') << endl;
    cout << "Double Calculation: " << calculate(5.5, 2.2, '*') << endl;
    cout << "Power (2^3): " << power(2, 3) << endl;
    absDiff(10.5, 4.2);
    return 0;
}