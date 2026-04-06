#include<iostream>
#include<iomanip>
using namespace std;
void swap(int &a, int &b);
int main() {
    int a=10, b=30;
    swap(a, b);
}
void swap(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a="<<a<<endl<<"b="<<b;
}