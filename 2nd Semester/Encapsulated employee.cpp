#include<iostream>
#include<string>
using namespace std;
  
class employee{
	//Encapsulation
	private:          
		int ssn;
		string name;
		int age;
		
	public:	
	//setter	
	void setdata(int s, int a, string n){    
		ssn = s;
		age = a;
		name = n;
	}
	
	//getter	
	void getdata(){													
		cout<< "The SSN of the employee is : " << ssn << endl;
		cout<< "The age of the employee is : " << age << endl;
		cout<< "The name of the employee is : " << name << endl;
	}
};

int main(){
	employee e1;
	e1.setdata(627926,52,"Salman Khan");
	e1.getdata();
	return 0;
}



