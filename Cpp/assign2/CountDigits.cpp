#include<iostream>
using namespace std;
int main() {
	int num,dig;
	cin>>num>>dig;
	int count = 0;
	while(num){
		if (dig == num % 10)
			count++;
		num /= 10;
	}
	cout<<count;
	return 0;
}