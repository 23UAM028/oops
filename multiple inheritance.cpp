#include<iostream>
using namespace std;

class A {
public:
    int no_car_a = 2;
  
};

class B  {
public:
    int no_car_b = 4;
};

class C : public A, public B {
	
    public:
	    int no_car_c=5;
	    void display() {
	    	cout<<"number of car :"<<endl;
	        cout << "A :"<<no_car_a<<endl;
	        cout << "B :"<<no_car_b<<endl;
	        cout << "C :"<<no_car_c<<endl;
	    } 
};

int main() {
    C b;
    b.display();
}


