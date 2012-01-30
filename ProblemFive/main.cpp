#include <iostream>
#include "ProblemFive.h"

int main(){
	ProblemFive *pf = new ProblemFive();
	int top = 0;
	std::cout << "Find the lowest common multiple of the numbers from 1 to: ";
	std::cin >> top;

	std::cout << "The lowest common multiple is: " pf.lowestCommonMultiple(top) << std::endl;
	delete pf;
}
