#ifndef _PROBLEMFOUR_H_
#define _PROBLEMFOUR_H_

#include <vector>
#include <math.h>

class ProblemFour {
	public:
		ProblemFour();

		int largestPal(int length);

		bool checkPal(int canidate);

		std::vector<int> vectorizeCanidate(int canidate);
};

#endif
