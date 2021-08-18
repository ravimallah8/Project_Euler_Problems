#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

bool isPrime(ll n){
	if (n <= 1)
		return 0;
	for (ll i = 2; i < sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}

int main()
{
	ll n = 600851475143;
	for (ll i = sqrt(n); i > 1; i--){
		if (n % i == 0){
			if (isPrime(i)){
				cout << i;
				break;
			}
		}
	}
	return 0;
}