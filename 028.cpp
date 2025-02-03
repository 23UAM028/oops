#include<iostream>
#include<string.h>

using namespace std;
class Student {
    private:
        string  name;
        string prn;
        int sem;
        string ph_no; 
    public:
        float mrk;
        float cgpa;
        
      Student(const Student& s1){
	  
	      cout<<"copy constructer :"<<endl;
		  name=s1.name;
		  prn=s1.prn;
	}
		  
        Student(int mrk) { 
            mrk = mrk;
            cout << " 1st CONSTRUCTOR\n";
        }
        Student(int mrk,int cgpa) { 
            mrk = mrk;
            cgpa=cgpa;
            cout << " 2nd CONSTRUCTOR\n";
        }
        ~Student(){
		cout<<"Destructer";
		}
		void setInfo(){
			cout << "Name: ";
			cin >> name;
			cout << "prn :";
			cin >> prn;
			cout << "semester :";
			cin >> sem;
			cout << "Enter student phone no :";
			cin >> ph_no;	
		}
		void getInfo(){
			cout<<"name :"<<name<<endl;
			cout<<"prn :"<<prn<<endl;
			cout<<"sem :"<<sem<<endl;
			cout<<"ph_no :"<<ph_no<<endl;
			cout<<"mrk :"<<mrk<<endl;
			cout<<"CGPA :"<<cgpa<<endl;
		}
		
};

    int main(){
    	Student s1(50);
    	s1.setInfo();
    	s1.mrk=50; 
    	s1.cgpa=8.5;
    	s1.getInfo();
    	s1.setInfo();
    	Student s2(25,8.5);
    	s2.setInfo();
    	Student s3=s1;
    	
	}
		
