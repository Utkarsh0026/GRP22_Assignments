#include<iostream>
using namespace std;

int numberOfDigits(long int num){
	int count = 0;
	while(num){
		count++;
		num /= 10;
	}
	return count;
}
bool ifArmstrong(long int num,int count){
	long int sum = 0,pro = 1;
	long int temp = num;
	while(temp){
		int rem = temp % 10;
		pro = 1;
		for(int i = 1; i<=count; i++)
			pro = pro * rem;
		sum += pro;
		temp /= 10;
		// cout<<sum<<" ";
	}
	if(sum == num) return 1;
	else return 0;
}
int main() {
	long int num,sum=0;
	cin>>num;
	int result = ifArmstrong(num,numberOfDigits(num)); 
	cout<<((result == 1)?"true":"false");
	return 0;
}

