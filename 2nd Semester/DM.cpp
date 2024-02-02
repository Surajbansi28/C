#include <iostream>
using namespace std;

class DM
{
    public:
	     float cm;
	     float km;
	     float m;
	
    public:
	     void distance_cm(){
	     cout << "Enter distance in centimeters ";
	     cin >> cm;
     }
    
    public:
	     void cm_km(){
	     km = cm/100000;
         }
        void cm_m(){
        m = cm/100;
     }
    public:
	    void display(){
	    cout << cm << " centimeters in kilometers is: " << km << " km " << endl;
	    cout << cm << " centimeters in meters is:  " << m << " m " << endl;
	 }
};

int main(){
    DM D1;
    D1.distance_cm();
    D1.cm_km();
    D1.cm_m();
    D1.display();
 return 0;
}