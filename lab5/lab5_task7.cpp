#include <iostream>
using namespace std;
void generateid() {
    static int id=1000;
    id++;
    cout<<"id="<<id<<endl;
}
int main() {
    generateid();
    generateid();
    generateid();
    generateid();
    generateid();
}