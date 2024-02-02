#include<iostream>
#include<string>
using namespace std;

class Add{
	public:
		string a;
	
	void newdata(){
		cin>>a;
	}
	
	void display(){
		cout<<"The concatenation of two strings is:" << a <<endl;
	}
	
	Add operator +(Add v){
		Add sum;
		sum.a = a + v.a;
		return sum;
	}
};

int main(){
	Add a1,a2,a3;
	cout<< "The first string to be concatenated is :" <<endl;
	a1.newdata();
	cout<< "The Second string to be concatenated is :" <<endl;
	a2.newdata();
	a3 = a1 +a2;
	a3.display();
	return 0;
}

