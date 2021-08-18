#include <iostream>
using namespace std;

int main()
{		
	int n = 2520;
    while(1){
    	int i = 2;
    	for ( ;i <= 20; i++){
    		if (n % i != 0)
    			break;
    	}
    	if (i == 21){
    		cout << n;
    		break;
    	}
    	n = n + 2520;
    }
	return 0;
}