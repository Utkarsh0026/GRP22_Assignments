#include<iostream>
#include<math.h>
using namespace std;
// function for conversion
int binaryToDecimal(int num){
	int decimal=0,count=0;
	int temp = num,raiser = 0;
	// to count number of digits in binary number
	while(temp){
		count++;
		temp /= 10;
	}
	// to convert binary -> decimal
	// raiser = power corresponding to place of bit
	while(num && raiser<=count){
		decimal += num%10*pow(2,raiser++);
		num /= 10;
	}
	return decimal;
}
// driver code
int main() {
	int testCases;
	cin>>testCases;
	while(testCases){
		int binary;
		cin>>binary;
		cout<<binaryToDecimal(binary)<<endl;
		testCases--;
	}
	return 0;
}