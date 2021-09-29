/*
	Dalton Hammel
	C++ Fall 2021
	Due: 9/27/2021
	Lab 3 User and File I/O

	Write an interactive C++ program that computes and outputs the mean and 
	population standard deviation of a set of four integers that are inputted by 
	a file called “inMeanStd.dat” and the user (should handle both). Although the 
	individual values are integers, the results are floating-point values. Be 
	sure to use proper formatting and appropriate comments in your code. Provide 
	appropriate prompts to the user. The output should be to the screen for the user 
	inputted values and to a file called “outMeanStd.dat”. The programs output should 
	be labeled clearly and formatted neatly. You must calculate the mean and standard 
	deviation in separate functions.
*/

#include <iostream> // Allows the ability to input and output 
#include <cmath>  // The math functuion for square root

using namespace std;

double numOne = 8;
double numTwo = 5;
double numThree = 3;
double numFour = 25;
double mean();
double standardDeviation();


int main()
{
	mean();
	standardDeviation();
}

double mean()
{
	double mean; 
	mean = (numOne + numTwo + numThree + numFour) / 4;
	cout << "The mean of your numbers is " << mean;
	return 0;
}

double standardDeviation()
{
	double mean = (numOne + numTwo + numThree + numFour) / 4;
	double meanOne = (numOne - mean);
	double meanTwo = (numTwo - mean);
	double meanThree = (numThree - mean);
	double meanFour = (numFour - mean);
	double sum = (meanOne * meanOne) + (meanTwo * meanTwo) + (meanThree * meanThree) + (meanFour * meanFour);
	double divided = sum / 4;
	double standardDeviation = sqrt(divided);
	cout << standardDeviation;
	return 0;
}


// STILL NEED
// inputing
// floating point stuff
// more comments
// better prompts
// outputting