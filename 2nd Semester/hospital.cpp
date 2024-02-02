#include<iostream>
#include<string>
using namespace std;

class hospital{
	public:
		string name;
		string doa;
		string disease;
		string dod;
		
	void putdata(){
		cout<<"Enter the name of the patient:" <<endl;
		cin>>name;
		cout<<"Enter the date of admission of the patient: "<<endl;
		cin>>doa;
		cout<<"Enter the disease of the patient: " <<endl;
		cin>>disease;
		cout<<"Enter the date of discharge: " <<endl;
		cin>>dod;
	}
	
	void display(){
		cout<<"The name the patient is :" <<name<<endl;
		cout<<"The date of Admission of the patient is :" <<doa<<endl;
		cout<<"The disease is :" <<disease<<endl;
		cout<<"The date of discharge is :" <<dod<<endl;
	}
};

class Age : public hospital{
	public :
		int age;
		
	void putdata(){
		hospital::putdata();
		cout<<"Enter the age of the patient: "<<endl;
		cin>>age;
	}
	
	void display(){
		hospital::display();
		cout<<"Age of the patient is: " <<age<<endl;
	}
};

int main(){
	Age a1;
	a1.putdata();
	a1.display();
	return 0;
}



