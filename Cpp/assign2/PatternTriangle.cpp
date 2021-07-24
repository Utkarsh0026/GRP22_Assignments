#include<iostream>
using namespace std;
int main() {
	int rows;
	cin>>rows;
	for(int i=1; i<=rows; i++)
	{
        // for printing spaces before number
		for(int m = 1;m<=rows-i;m++)
			cout<<"\t";
        // printing numbers before 2*i-1(i.e 1,3,5,7) in inc order
		for(int j=i; j<=2*i-1; j++)
			cout<<j<<"\t";
        // printing numbers post  2*i-2 in dec order
		for(int k=2*i-2; k>=i; k--)
			cout<<k<<"\t";
		cout<<endl;
	}
	return 0;
}