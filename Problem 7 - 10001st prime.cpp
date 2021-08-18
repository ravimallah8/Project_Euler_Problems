#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

#define MAX_SIZE 1000005
void SieveOfErathosthenes(vector<int>& primes){
	bool isPrime[MAX_SIZE];
	memset(isPrime, true, sizeof(isPrime));
	for (int p = 2; p * p < MAX_SIZE; p++){
		// isPrime[p] is not changed, then it is prime
		if (isPrime[p] == true){
			// update all mutliple of p <= n;
			for (int i = p * p; i < MAX_SIZE; i += p){
				isPrime[i] = false;
			}
		}
	}

	// Store all prime numbers;
	for (int p = 2; p < MAX_SIZE; p++)
		if (isPrime[p])
			primes.push_back(p);
}
int main()
{
	int n = 10001;
	vector <int> primes;
	SieveOfErathosthenes(primes);
	cout << primes[n-1];
	return 0;
}