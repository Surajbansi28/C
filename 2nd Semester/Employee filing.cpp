#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class employee{
	public:
		string name;
		string age;
		float salary;
		string id;
		
	void storedata(){
		cout<<"Enter the name of the Employee : " << endl;
		cin>>name;
		cout<<"Enter the age of the Employee : " << endl;
		cin>>age;
		cout<<"Enter the Salary of the Employee : " << endl;
		cin>>salary;
		cout<<"Enter the ID of the Employee : " << endl;
		cin>>id;
	}
	
	void display(){
		cout<<"The name of the employee is: " << name <<endl;
		cout<<"The age of the employee is: " << age <<endl;
		cout<<"The salary of the employee is: " << salary <<endl;
		cout<<"The ID of the employee is: " << id <<endl;
	}
};

int main(){
	employee e1;
	string x;
	string y;
	fstream my_file;
	my_file.open("employeedata.txt", ios::app);
	if (!my_file) {
		cout << "File not created!";
	}
	else {
		e1.storedata();
		cout<<"File created successfully";
		my_file.close();
	}
	 
	my_file.open("employeedata.txt",ios::in);
	while (getline(my_file, x)){
		cout<<x;
		e1.display();	
	}
	my_file.close();
	return 0;
}


