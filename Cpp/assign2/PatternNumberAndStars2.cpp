#include<iostream>
using namespace std;
int main() {
	int rows;
	cin>>rows;
	for(int i=1; i<=rows; i++)
	{
		for(int j=1; j<=i; j++)
			cout<<j;
		for(int k=i+1; k<=rows; k++)
			cout<<"*";
		cout<<endl;
	}
	return 0;
}