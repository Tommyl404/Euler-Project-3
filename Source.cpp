#include<iostream>
#include<vector>

using namespace std;

//Euler project 3.
//What is the largest prime factor of the number 600851475143 ?
//The prime factors of 13195 are 5, 7, 13 and 29.


void main()
{
	long long numTest = 600851475143;
	int i, j;

	vector<int> answers; // store the prime factors

	for ( i = 2; i <= numTest; i++) // two is the smallest prime we know (one is not a prime for sure)
	{
		for ( j = 2; j <= i; j++)//we run on the range of the numbers from 2 up to i, if it's modolu gives 0 it has a num that div it.
		{
			if (i % j == 0)
				break;//we can stop the run for this loop and save time because this is not a prime

		}

		if (i == j) //means that this is a prime
		{
			if (numTest % i == 0)
			{
				numTest = numTest / i; // because we know i already is a prime num that is a factor of numTest we can cut him of and the range of the loop
				answers.push_back(i); //store the answers of the factor, the largest will be at the end of the vector
			}
		}
	}

	cout << answers.back(); // prints the answer
}
