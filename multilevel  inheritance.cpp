#include<iostream>
using namespace std;

class A {
    public:
        int a = 2;
        int b = 3;
};

class B : public A {
    int c = 4;
    public:
        void display() {
            cout << "a :" << a << endl;
            cout << "b :" << b << endl;
            cout << "c :" << c << endl;
        }
};

class C : public B {
    int d = 5;
    public:
        void display() {
            B::display();
            cout << "d :" << d << endl;
        }
};

int main() {
    C c;
    c.display();
}

