#include<iostream>
using namespace std;
int accumulate(int value){
    static int total = 0;
    total += value;
    return total;
}
int main() {
    cout << "Total = " << accumulate(10) << endl;
    cout << "Total = " << accumulate(25) << endl;
    cout << "Total = " << accumulate(5) << endl;
}