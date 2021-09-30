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
#include <fstream> // Allows for File Read and Write

using namespace std;

float mean(int a, int b, int c, int d);
float standardDeviation(int a, int b, int c, int d);

int main() // The main function is use to call the other functions, input and output the numbers
{
	//Input Variables
	int numOne;
	int numTwo;
	int numThree;
	int numFour;
	ifstream inFile;
	ofstream outFile;

	//Local Variables
	float standDev;
	float me;

	//File Input
	inFile.open("inMeanStd.dat");
	outFile.open("outMeanStd.dat");

	inFile >> numOne >> numTwo >> numThree >> numFour;
	
	me = mean(numOne, numTwo, numThree, numFour);
	standDev = standardDeviation(numOne, numTwo, numThree, numFour);
	
	outFile << "The Mean of your file inputed numbers is " << me << endl << "The Standard Deviation of your file inputted numbers is " << standDev << endl;
	cout << "The Mean of your file inputed numbers is " << me << endl << "The Standard Deviation of your file inputted numbers is " << standDev << endl;

	//User Input
	cout << "What is your First number: ";
	cin >> numOne;
	cout << "What is your Second number: ";
	cin >> numTwo;
	cout << "What is your Thrid number: ";
	cin >> numThree;
	cout << "What is your Forth number: ";
	cin >> numFour;

	me = mean(numOne, numTwo, numThree, numFour);
	standDev = standardDeviation(numOne, numTwo, numThree, numFour);

	outFile << "The Mean of your user inputed numbers is " << me << endl << "The Standard Deviation of your user inputed numbers is " << standDev << endl;
	cout << "The Mean of your user inputed numbers is " << me << endl << "The Standard Deviation of your user inputed numbers is " << standDev << endl;

	inFile.close();
	outFile.close();
}

float mean(int a, int b, int c, int d) // This function is used to calculate and output the mean of the numbers inputed
{ 
	float mean = (float) (a + b + c + d) / 4;
	return mean;
}

float standardDeviation(int a, int b, int c, int d) // This function is to find and output Standard Deviation of the numbers 
{
	float mean = (float) (a + b + c + d) / 4;
	float meanOne = (a - mean);
	float meanTwo = (b - mean);
	float meanThree = (c - mean);
	float meanFour = (d - mean);
	float sum = (meanOne * meanOne) + (meanTwo * meanTwo) + (meanThree * meanThree) + (meanFour * meanFour);
	float divided = sum / 4;
	float standardDeviation = sqrt(divided);
	return standardDeviation;
}