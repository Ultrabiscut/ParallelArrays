#include <iostream>
#include <fstream> //step 1
#include <string>
using namespace std;

/*
1. Given NamesAges.txt
2. Read names and ages into arrays
3. Display the name of the oldest person
*/


int main()
{
	//declare variables
	ifstream inFile;
	int iAges[14]; //array for ages
	string sNames[14]; //array for names
	int iBiggest = INT_MIN;
	int BigLoc; //hold index of biggest value
	string sOldest;

	//step 3
	inFile.open("NamesAges.txt");

	//loop 14 times, each time read a name and age
	//store the name and age in the appr array
	for (int x = 0; x <= 13; x++)
	{
		inFile >> sNames[x]; //read a name into array
		inFile >> iAges[x]; //read an age into array
	}

	//step 5
	inFile.close();

	//find the biggest age
	//display oldest person
	for (int x = 0; x <= 13; x++)
	{
		if (iAges[x] > iBiggest)
		{
			iBiggest = iAges[x]; //store it as the biggest
			BigLoc = x; //store the index it was found at

		}
	}
	
	//shows who the oldest person is
	//store into string variable sOldest
	sOldest = sNames[BigLoc];

	//another way to display oldest person
	//cout << "The oldest person in class is: " << sNames[BigLoc] << endl;


	cout << iBiggest << " is the biggest age." << endl;
	cout << BigLoc << " is the index holding biggest age." << endl;
	cout << sOldest << " is the oldest." << endl;

	return 0;
}
