#include <iostream>

using namespace std;

int main() {

    int a = 1;
    int b = 2;
    int temp;

    cout << "A = " << a << endl;
    cout << "A = " << &a << endl;
    cout << "B = " << b << endl;
    cout << "B = " << &b << endl;

    cout << "PEMBATAS" << endl;

    temp = a;
    a = b;
    b = temp;

    cout << "A = " << a << endl;
    cout << "A = " << &a << endl;
    cout << "B = " << b << endl;
    cout << "B = " << &b << endl;
}