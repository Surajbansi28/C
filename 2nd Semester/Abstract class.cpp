#include<iostream>
#include<string>
using namespace std;

class Animal{
	public:
		string name;
		
		void getdata(){
			cout<< "Enter the name of the animal :" <<endl;
			cin>>name;
		}
		
		virtual void display() = 0;
};

class breed : Animal{
	public:
		string type;
		
		void display(){
			cout<<"Enter the breed of the Animal: " <<endl;
			cin>>type;
		}
};

int main(){
	breed b1;
	Animal* ptr;
	ptr = &b1;
	ptr->getdata();
	ptr->display();
	return 0; 
}