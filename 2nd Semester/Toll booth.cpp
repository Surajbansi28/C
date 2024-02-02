#include <iostream>
using namespace std;

class tollbooth{
	public :
		double total_amount;
		int number_of_cars;
	
	tollbooth(){
		total_amount = 0;
		number_of_cars = 0;
	}
		
	void payingcar(){
		cout<<"Enter the number of cars that passed the toll :"<<endl;
		cin>> number_of_cars;
		number_of_cars++;
		 total_amount = number_of_cars * 0.50;
	}
	
	void displaydata(){
		cout<<"The total number of cars that has passed the toll are:" <<number_of_cars<<endl;
		cout<<"The total amount collected by the toll is: " <<total_amount << "$" <<endl;
	}
};


int main(){
	tollbooth tb;
	tb.payingcar();
	tb.displaydata();
	return 0;
}


