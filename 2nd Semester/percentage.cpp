#include<iostream>
using namespace std;
int main(){
    int rollno;
    int num1, num2, num3, num4, num5;
    float sum;
    float percentage;
    
    cout<< "Enter first subject marks (Out of 100): "<<endl;
    cin>>num1;
    cout<< "Enter second subject marks (Out of 100): "<<endl;
    cin>>num2;
    cout<< "Enter third subject marks (Out of 100): "<<endl;
    cin>>num3;
    cout<< "Enter forth subject marks (Out of 100): "<<endl;
    cin>>num4;
    cout<< "Enter fifth subject marks (Out of 100): "<<endl;
    cin>>num5;
    sum = num1+num2+num3+num4+num5;
    percentage=(sum/500)*100;

    cout<<"Enter your roll number: ";
    cin>>rollno;

    cout<<"Total Marks Obtained (Out of 500): " << sum << endl;
    cout<<"The Roll Number of the student is: " << rollno << endl; 
    cout<<"The calculated percentage is: " << percentage;
  
}