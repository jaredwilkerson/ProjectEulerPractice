#include "ProblemFour.h"
/**
 * A palindromic number reads the same both ways.
 * The largest palindrome made from the product of
 * two 2-digit numbers is 9009 = 91 99.
 */
ProblemFour::ProblemFour(){ }

int ProblemFour::largestPal(int length){
	int power = pow(10,length);
	int palindrome = 0;
	for(int x = 0; x < power; ++x){
		for(int y = 0; y < power; ++y){
			int canidate = x * y;
			if(checkPal(canidate)){
				palindrome = canidate;
			}
		}
	}
	return palindrome;
}

bool ProblemFour::checkPal(int canidate){
	bool isPal = false;
	int tmpCanidate = canidate;
	std::vector<int> vectorCanidate;
	do {//put the number into a vector
		int digit = tmpCanidate % 10;
		tmpCanidate /= 10;
		vectorCanidate.push_back(digit);
	}while(0 != (tmpCanidate / 10));//do until it's completely in the vector

	
	return isPal;
}

std::vector<int> ProblemFour::vectorizeCanidate(int canidate){
	std::vector<int> vectorizedCan;
	return vectorizedCan;
}
