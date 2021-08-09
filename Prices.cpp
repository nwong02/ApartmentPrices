#include <iostream>

/*
* Project		: Apartment Prices
* Title			: Prices.cpp
* Author		: Nelson Wong
* Description	: Program to calculate the total cost of owning an apartment with inputs for apartment base price, number of stories taken as integers, doubles for the tax rates and 
*/


using namespace std;

int main()
{
	int numberOfFloors, basePrice = 0;
	double amenitiesCharge, taxRate = 0.0;
	double totalCost = 0.0;

	cout << "How many floors are there? \n";
	cin >> numberOfFloors;

	cout << "What's the base price of the apartment? \n";
	cin >> basePrice;

	cout << "What's the amenities charge? \n";
	cin >> amenitiesCharge;

	cout << "What's the tax rate? \n";
	cin >> taxRate;

	for (int i = 0; i <= numberOfFloors; i++)
	{
		totalCost = basePrice + (i * (double)numberOfFloors * taxRate);
		cout << "Total cost is: \n" << totalCost << endl;
	}

	return 0;
}