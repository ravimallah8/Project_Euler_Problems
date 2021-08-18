#include <iostream>
using namespace std;

int main()
{
	int n = 4000000;
	int f = 1, s = 2;
	long int sum = 2;
	int fib = f + s;
	while (fib <= n){
		if (fib % 2 == 0)
			sum += fib;
		fib = f + s;
		f = s;
		s = fib;
	}
	cout << sum;
	return 0;
}