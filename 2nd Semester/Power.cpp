#include <iostream> 
using namespace std;

double power(double n,int p=2){
	double result=1;
	for(int i=0;i<p;i++){
		result*=n;
	}
	return result;
}

int main (){
	double n;
	int p;
	double result=0;
	cout<<"Enter n: ";
	cin>>n;
	cout<<"Enter p: ";
	cin>>p;
	if(p<0){
		result=power(n);
		cout<<n<<"^2 = "<<result<<"\n\n";
	}else{
		result=power(n,p);
		cout<<n<<"^"<<p<<" = "<<result<<"\n\n";
	}

	return 0;
}