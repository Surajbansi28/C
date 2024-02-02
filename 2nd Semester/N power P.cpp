#include <iostream>
using namespace std;

double power(double n, int p=2);
double power(int n, int p=2);
double power(float n, int p=2);

int i;	
double value = 1;
	
double power(double n,int p){
	for(i=1;i<=p; i++){
	value*= n;
	cout<<value<<endl;
	}
	return value;
}

double power(int n, int p){
	for(i=1;i<=p;i++)
	value*= n;
	cout<< value << endl;
	return value;
}

double power(float n, int p){
	for(i=1;i<=p;i++)
	value*= n;
	cout<< value << endl;
	return value;	
}

int main(){
	cout<<"The Square of a double type is :" <<power(2.34,2)<<endl;
	cout<<"The Square of a Integer is:"<<power(10,2)<<endl;
	cout<<"The Square of a float is:" <<power(3.6,2)<<endl;
	return 0;
}

