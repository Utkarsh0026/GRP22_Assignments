#include <bits/stdc++.h>
using namespace std;
// for counting the number of digits of input
// so that we could see the max power
int length(long int num){
	int count;
	while(num)
	{
		count++;
		num /= 10;
	}
	return count;
}
// for converting binary -> decimal
int calDecimal(long int binary,int count){
	int decimal=0,i=0;
	while(i<=count){
	    int	rem = binary % 10;
		decimal += rem * pow(2,i);
		i++;
		binary /= 10;
	}
	return decimal;
}
// driver code
int main() {
	long int binary ;
	cin>>binary;
	int count = length(binary);
	cout<<calDecimal(binary,count);
	return 0;
}