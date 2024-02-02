#include<iostream>
#include<string>
using namespace std;

class education{
	public:
		string degree;
		string schoolname;
		string specialization;
		
	void storedata(){
		cout<<"Enter the degree of the Employee : " << endl;
		cin>>degree;
		cout<<"Enter the school name of the Employee : " << endl;
		cin>>schoolname;
		cout<<"Enter the Specialization of the Employee : " << endl;
		cin>>specialization;		
	}
	
	void display(){
		cout<<"The degree of the employee is: " << degree <<endl;
		cout<<"The school name of the employee is: " << schoolname <<endl;
		cout<<"The specialization of the employee is: " << specialization <<endl;
	}
};

class employee{
	public:
		string name;
		string age;
		float salary;
		string id;
		education e1;
		
	void storedata(){
		cout<<"Enter the name of the Employee : " << endl;
		cin>>name;
		cout<<"Enter the age of the Employee : " << endl;
		cin>>age;
		cout<<"Enter the Salary of the Employee : " << endl;
		cin>>salary;
		cout<<"Enter the ID of the Employee : " << endl;
		cin>>id;
		e1.storedata();
	}
	
	void display(){
		cout<<"The name of the employee is: " << name <<endl;
		cout<<"The age of the employee is: " << age <<endl;
		cout<<"The salary of the employee is: " << salary <<endl;
		cout<<"The ID of the employee is: " << id <<endl;
		e1.display();
	}
};

int main(){
	employee em;
	em.storedata();
	em.display();
	return 0;
}
