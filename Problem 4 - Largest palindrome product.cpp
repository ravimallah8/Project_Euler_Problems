#include <iostream>
using namespace std;
bool isPalindrome(string s){
	int len = s.size();
	for (int i = 0; i < len / 2; i++){
		if (s[i] != s[len - 1 - i])
			return 0;
	}
	return 1;
}
int main()
{
	for (int i = 999; i > 99; i--){
		bool flag = 0;
		for (int j = 999; j > 99; j--){
			int mul = j * i;
			if (isPalindrome(to_string(mul))){
				cout << mul;
				flag = 1;
				break;
			}
		}		
		if (flag)
			break;		
	}
	return 0;
}