#include<iostream>
#include<string>
using namespace std;

class publication{
	public:
		string title;
		float price;
	
	void getdata(){
		cout<<"Enter the title of the book:" <<endl;
		cin>>title;
		cout<<"Enter the price of the book:" <<endl;
		cin>>price;
	}
	
	void putdata(){
		cout<<"The title of the book:" << title << endl;
		cout<< "The price of the book:" << price <<endl;
	}
};

class tape : publication{
	public:
		float playingtime;
		
	void getdata(){
		publication :: getdata();
		cout<< "Enter the playing time in minutes" << endl;
		cin>>playingtime;
	}	
	
	void putdata(){
		publication::putdata();
		cout<< "The playing time is:" << playingtime << "minutes" << endl;
	}
};

class book : public publication{
	public:
		int pagecount;
	
	void getdata(){
		publication :: getdata();
		cout<<"Enter the page count:" <<endl;
		cin>>pagecount;
	}
	
	void putdata(){
		publication :: putdata();
		cout<< "The page count is:" << pagecount<<endl;
	}
	
};

int main(){
	tape t1;
	book b1;
	b1.getdata();
	b1.putdata();
	t1.getdata();
	t1.putdata();
	return 0;
}

