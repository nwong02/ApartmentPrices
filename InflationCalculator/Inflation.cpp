#include <stdio.h>
#include <iostream>

using namespace std;

/*
* Project		: Flow Control
* Title			: Inflation.cpp
* Author		: Nelson
* Description	: Program to gauge the inflation cost of an item in a user-provided number of years and inflation rate. Price of an item is then calculated as an inflation rate for certain number of years, and determines new cost of item
*/

double inflation(double rate);

double inflation(double rate)
{
	rate = rate / 100;
	printf("Inflation rate is: %f\n", rate);
	return rate;
}


int main(void)
{
	int years = 5;
	double costOfItem = 51.99;
	double rate = inflation(5.6);

	for (int i = 1; i <= years; i++)
	{
		costOfItem = costOfItem + costOfItem * rate;
		printf("Inflation adjusted price for year %d is: %f\n", i, costOfItem);
	}
	
	return 0;
}