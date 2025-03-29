#include<iostream>
#include<string>
using namespace std;

class person{
	private:
		string Name;
		int age;

		
		
		public:
			person(string name,int age){
					Name=name;
					age=19;
			}
		
		    virtual void display(){
		     	cout<<"Name:"<<Name<<endl;
		     	cout<<"age:"<<age<<endl;
			 }
		
   };
   
class student :	public person{
	private:
		int RollNo;
		string branch;
		int mark;
		float cgpa;
		
	public:
		student(int RollNo,string branch,int mark,float cgpa)
		:person (Name,age){
	     RollNo=roll no;
		 branch=branch;
		 mark=mark;
		 cgpa=cgpa;
			
		}
		
	    float cgpa(int maerks){
	    	cgpa=marks/9.5;
	    	return cgpa;
		}	
			
			void display()override{
				person::diaplay():
				cout<<"ROll No:"<<Roll no<<endl;
				cout<<"branch:"<<branch<<endl;
				cout<<"mark:"<<mark<<endl;
				cout<<"CGPA:"<<cgpa<<endl;
			}
};

class  Faculty :	public person{
	private:
		int  facultyID;
		string department;
		int salary;
		
	public:
		Faculty(int  facultyID,string department,int salary){
			facultyID=facultyID;
		    department=departmen;
		    salary=salary;
		}
		void dispaly() override{
			person::diaplay():
			cout<<"facultyID:"<<facultyID<<endl;
			cout<<"department:"<<department<<endl;
			cout<<"salary:"<<salary<<endl;
			
			
		}
};   
   
//class TeachingAssistant : public student , public Faculty{
	 
};

int main(){
	person p1("Dikshant Dhanawade",19);
	p1.display();
	student s1("Dikshant Danawade",19,"CSE AIML",80,8);
	s1.diaplay();
	
	
	
	return 0;
}
