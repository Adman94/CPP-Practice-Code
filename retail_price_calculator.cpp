// 01.cpp v2
#include<iostream>

using namespace std;
// calculateRetail(5, 100);

//** I didn't prototype the function because I wrote it bvefore the main function

// the function calculateRetail that takes: 
// and returns a long double value for the retail price
 // two double variable, working cost and markup percentage
double calculateRetail(double w_cost, double m_percent) {

	long double retail_price;

	// and returns a long double value for the retail price which is (100 + x) % of working cost
	retail_price = w_cost * ((100 + m_percent) / 100); 
	return retail_price;
}

int main() {
	
	long double retail_price;
	double a, b;
	int count = 0;

	//While Loop for Input Validation for up to 100 inputs
	while (count < 100) {

	cout << "Enter the item's wholesale cost in $: ";
	cin >> a;
	cout << "Enter the item's markup percentage in %: ";
	cin >> b;
	// Input Validation
		if (a >= 0 && b >= 0) {
		// called the calculateRetail function
		retail_price = calculateRetail(a, b);
		count = 101;
		}
		else {
		cout << "Wrong input. Please try again! " << endl;
		count++;
		}
	}
	// prints out the value of the retail price;
	cout << "The item's retail price is " << retail_price << " dollars." << endl;


}