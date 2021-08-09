#include <stdio.h>

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
	printf("Inflation rate is: %f", rate);
	return rate;
}



double costOfItem(double cost);

double costOfItem(double cost)
{

}