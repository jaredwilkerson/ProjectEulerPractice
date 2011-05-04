/*
 * If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.
 *
 */


#include <iostream>

int isMultiple(int i)
{
	int val = 0;

	if( (i%3 == 0) || (i%5 == 0)){
		val = i;
	}

	std::cout << i << " " << val << std::endl;
	return val;
}


int main()
{
	int below = 0;
	int sum = 0;

	std::cout << "Enter number to sum multiples of 3 or 5 below: ";
	std::cin >> below;

	for(int x=1; x<below;++x){
		sum += isMultiple(x);
	}
	
	std::cout << sum << std::endl;

}
