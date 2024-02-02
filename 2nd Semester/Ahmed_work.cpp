#include <iostream>
using namespace std;
double estimateInflationRate(double new_price, double old_price){
	cout << "Enter the price of the product last year:";
	cin >> old_price;
	cout << "Enter the latest price of the product:";
	cin >> new_price;
	double Inflation;
	Inflation = (new_price-old_price)/old_price*100;
	cout << "The Inflation this year is:" << Inflation; 
	return Inflation;
}

