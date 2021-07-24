#include<iostream>
using namespace std;
// code to check number if prime or not
bool checkPrime(int num){
	for(int i=2; i<num; i++)
		if(num%i == 0)
			return 0;
	return 1;
}
// Driver Code
int main() {
	int num;
	cin>>num;
	cout<<(checkPrime(num)?"Prime":"Not Prime");
	return 0;
}