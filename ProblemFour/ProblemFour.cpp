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
			if( checkPal(canidate) && (palindrome < canidate) ){
				palindrome = canidate;
			}
		}
	}
	return palindrome;
}

bool ProblemFour::checkPal(int canidate){
	bool isPal = true;
	std::vector<int> vectorCanidate = vectorizeCanidate(canidate);
	std::vector<int>::iterator front;
        std::vector<int>::iterator back;
	front = vectorCanidate.begin();
	back  = vectorCanidate.end()-1;
	while(front <= back){
		if(*front != *back){
			isPal = false;
		}
		++front;
		--back;
	}
	
	return isPal;
}

std::vector<int> ProblemFour::vectorizeCanidate(int canidate){
	std::vector<int> vectorCanidate = std::vector<int>();
	int digit = 0;
	bool vectorized = false;
	do {//put the number into a vector
		digit = canidate%10;
		canidate /= 10;
		vectorCanidate.push_back(digit);

	}while(0 != canidate);//do until it's completely in the vector

	return vectorCanidate;
}
