#include<iostream>
using namespace std;
int main() {
	int testCases;
	cin>>testCases;
	while(testCases){
		int n;
		cin>>n;
		int evenSum = 0 , oddSum = 0;
		while(n){
			int rem = n % 10;
			if(rem % 2 == 0)
				evenSum += rem;
			else
				oddSum += rem;
			n /= 10;
		}
		if(evenSum % 4 == 0 || oddSum % 3 == 0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
		testCases--;
	}
	return 0;
}