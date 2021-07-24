#include<iostream>
using namespace std;
int main() {
	int rows ;
	cin >> rows;
	cout<<1<<endl;
	for(int i=1; i<rows; i++)
	{
		for(int j=1; j<=i+1; j++)
		if(j==1 || j==i+1)
			cout<<i;
		else
			cout<<0;
		cout<<endl;

	}
	return 0;
}