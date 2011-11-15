/***********
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143 ?
 *
 * *********/

#include <vector>
#include <iostream>

std::vector<int> getPrimes(int target){
	std::vector<int> primes;
	
	if(1 < target){
		int curr = 2;//start at the first prime

		//half of the target is the largest possible prime number
		while(curr <= (.5 * target)){
			bool prime = true;//assume it is prime

			//divide by the previous primes
			for(int x=0;x<primes.size();++x){
				//if evenly divisiable then not a prime	
				if( 0 == (curr%primes[x])){
					prime=false;
				}
			} 
			//if prime, add to the list of primes
			if(prime){
				primes.push_back(curr);
			}
			++curr;//go to the next number
		}
	}
	else{
		primes.push_back(0);
		return primes;

	}

	return primes;
}

int getLargestFactor(std::vector<int> factors, int target){
	int curr = 0;
	int largest = 0;

	while((.5 * target) > factors[curr]){
		if((target % factors[curr]) == 0){
			largest = factors[curr];
			std::cout << "Current largest: " << factors[curr] << std::endl;
		}
		++curr;
	}

	return largest;
}


int main(){

	std::vector<int> primes = getPrimes(13195);
	int largest = getLargestFactor(primes, 13195);
	std::cout << "The largest prime is: " << primes[primes.size()-1] << std::endl;
	std::cout << "The largest factor is: " << largest << std::endl;
}
