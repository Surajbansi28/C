#include <iostream>
#include <string>
using namespace std;

class vehicle{
	public:
		string type;
		string fueltype;
		int speed;
	
	void input(){
		cout<<"Enter the vehicle type"<<endl;
		cin>>type;
		cout<<"Enter the fuel type"<<endl;
		cin>>fueltype;
		cout<<"Enter the speed of the car"<<endl;
		cin>>speed;
	}
	
	void display(){
		cout<<"The vehicle type is: "<< type <<endl;
		cout<<"The fuel type is: "<< fueltype <<endl;
		cout<<"The speed of the car is: "<< speed <<endl;
	}
};

class bike : vehicle{
	public:
		string num;
		string model;
		string owner;
		
	void input(){
		vehicle::input();
		cout<<"Enter the bike number:" <<endl;
		cin>>num;
		cout<<"Enter the model of the bike:" <<endl;
		cin>>model;
		cout<<"Enter the owner's name':" <<endl;
		cin>>owner;
	}	
	
	void display(){
		vehicle::display();
		cout<<"The bike's number is :" << num << endl;
		cout<<"The model of the bike is :" << model << endl;
		cout<<"The owner's name is: "<<owner<<endl;
	}
};

int main(){
	bike b1;
	b1.input();
	b1.display();
	return 0;
}

