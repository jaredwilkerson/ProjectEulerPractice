#include <iostream>
#include "ProblemFour.h"

int main() {
	ProblemFour* pf = new ProblemFour();
	int palSize = 0;
	std::cout << "Enter the length of the numeric palindrome: ";
	std::cin >> palSize;

	std::cout << "The largest numeeric palindrom from the multiple of two " << palSize << " digit long numers is " << pf->largestPal(palSize) << std::endl;

}
