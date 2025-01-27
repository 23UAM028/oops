#include<iostream>
#include<string>
using namespace std;

class Car
{
private:
    string brand;
    string model;
    int year;
    string color;
    float speed;
    string number;
public:
    Car(string b = "BMW", string m = "M", int y = 2017, string c = "black", float s = 80.0,string n="MH09CA4197")
    {
        brand = b;
        model = m;
        year = y;
        color = c;
        speed = s;
        number=n;
        cout << "Constructor" << endl;
    }
    ~Car()
    {
        cout << "Destructor " << endl;
    }

    void getDetail()
    {
        cout << "Car details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Color: " << color << endl;
        cout << "Speed: " << speed << " km/h" << endl;
         cout << "number: " << number << endl;
    }
};

int main()
{
    Car c1;  
    c1.getDetail();  

    return 0; 
}

