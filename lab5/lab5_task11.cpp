#include <iostream>
using namespace std;
int area(int side) {
    return side*side*side;
}
int area(int length, int width) {
    return length*width;
}
int area(double radius ) {
    return 3.14159 * radius * radius;
}
int main() {
    cout<<"area="<<area (10)<<endl;
    cout<<"area="<<area (10,11)<<endl;
    cout<<"area="<<area (13.1)<<endl;

}