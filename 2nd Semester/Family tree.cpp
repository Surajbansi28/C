#include <iostream>
using namespace std;

class father{
	public:
		int age;
	
	public:
		father(int u){
			age = u;
		}
		
	void iam(){
		cout<<"I am the father and I am " << age << "years old" << endl;
	}
};

class son : public father{
	public:
		son(int u) : father(u){
			age = u;
		}
		
	void iam(){
		cout<<"I am the son and I am " << age << "years old" << endl;
	}
};

class daughter : public father{
	public:
		daughter(int u) : father(u){
			age = u;
		}
	void iam(){
		cout<<"I am the daughter and I am " << age << "years old" << endl;
	}
};

int main(){
	father f1;
	son s1;
	daughter d1;
	f1(56);
	s1(21);
	d1(24);
	f1.iam();
	s1.iam();
	d1.iam();
	father* ptr;
	ptr = &f1;
	ptr -> iam();
	ptr = &s1;
	ptr -> iam();
	ptr = &d1;
	ptr -> iam();
	return 0;
}