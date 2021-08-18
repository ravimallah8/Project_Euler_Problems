#include <iostream>
using namespace std;

int main()
{
	int n = 100;;
	int f = n * (n + 1) / 2;
	int s = f * (2*n + 1) / 3; 
	cout << f * f - s;
	return 0;
}