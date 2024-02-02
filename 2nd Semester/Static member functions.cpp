#include <iostream>
using namespace std;

class student{
	private:
		char stdname[30];
		char stdid[30];
	
		static int count;
	
	public:
		student(){  //increments count when object is created
			count++;
		}
		
	static int getcount(){
		return count;
	}
	
	void inputdata(){
		cout<<"Enter the student name:" <<endl;
		cin>>stdname;
		cout<<"Enter the student id:"<<endl;
		cin>>stdid;
	}
	
	void displaydata(){
		cout<<"Student name is: " << stdname <<endl;
		cout<<"Student id is: " << stdid <<endl;
	}	
};

int student::count = 0;

int main(){
	student s1,s2,s3;
	s1.inputdata();
	s2.inputdata();
	s3.inputdata();
	cout<<"Details of the first student are : " <<endl;
	s1.displaydata();
	cout<<"Details of the Second student are : " <<endl;
	s2.displaydata();
	cout<<"Details of the Third student are : " <<endl;
	s3.displaydata();
	cout<<"Total no.of students in the class: : " << student::getcount();
	
	return 0;
}

