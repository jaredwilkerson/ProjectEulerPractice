/***********
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 *
 * *********/

#include <vector>
#include <iostream>
#include <algorithm>

struct c_unique {
	long current;
	c_unique() {current=2;}//start populating at the first prime, 2. otherwise it won't work
	long operator()() {return ++current;}
} UniqueNumber;

std::vector<long> getPrimes(long target){
	long tmpTarget = target;
	int interval = 100000;
	std::vector<long> primes;

	if(1 < target){
		for(long x=0;x<tmpTarget; x=x+interval)//while the starting point is less than half the size of the temporary target
		{
			std::vector<long> nums(interval,0);//create a vector of longs that has a size of 10,000
			generate (nums.begin(), nums.end(), UniqueNumber);//itinialize the vector with the current set of numbers

			//loop through previous primes and set their multiples in the current data set to false
			std::vector<long>::iterator primeItr, numItr;
			for(primeItr=primes.begin(); primeItr!=primes.end();++primeItr){
				for(numItr=nums.begin();numItr!=nums.end();){
					if(0 == (*numItr % *primeItr)){
						numItr = nums.erase(numItr);
					}
					else {
						++numItr;
					}
				}
			}

			//start looping through current set for primes. first true found is prime and go from there
			for(numItr=nums.begin();numItr!=nums.end();++numItr){
				//std::cout << "I have " << primes.size() << " primes." << std::endl;
				primes.push_back(*numItr);
				while(0 == (tmpTarget%*numItr)){
					tmpTarget /= *numItr;//use prime factorization to shrink the target
				}
				//std::cout << *numItr << " is prime." << std::endl;
				std::vector<long>::iterator multipleItr;
				for(multipleItr=numItr+1;multipleItr!=nums.end();){
					//	std::cout << "Seeing if " << *multipleItr << " is a multiple of " << *numItr << std::endl;
					if(0 == (*multipleItr % *numItr)){
						//delete nums[x]
						multipleItr = nums.erase(multipleItr);	
					}
					else{
						++multipleItr;
					}
				}
			}
		}
	}
	else{//The target number is too low
		primes.push_back(0);
		return primes;
	}

	return primes;
}

long getLargestFactor(std::vector<long> factors, long target){
	long largest = 0;

	std::vector<long>::iterator itr;
	for(itr = factors.begin(); itr != factors.end(); ++itr){
		if((target % *itr) == 0){
			largest = *itr;
		}
	}
	return largest;
}


int main(){
	long target = 0;
	std::cout << "Input the target value: ";
	std::cin >> target;
	std::vector<long> primes = getPrimes(target);
	long largest = getLargestFactor(primes, target);
	//	std::cout << "The largest prime is: " << primes.back() << std::endl;
	std::cout << "The largest factor is: " << largest << std::endl;
}
