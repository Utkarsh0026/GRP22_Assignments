#include<iostream>
using namespace std;
int main() {
	int rows;
	cin>>rows;
	for(int i=1; i<=rows; i++)
	{
        // for printing elements in inc order
		for(int j=1; j<=i; j++)
			if(j==i)
				cout<<j;
			else
				cout<<j<<"\t";
        // for printing spaces in between vaccant places
		for(int k=1; k<=2*(rows-i); k++)
			cout<<"\t";
        // for printing elements in dec order
		for(int j=i; j>=1; j--)
			if(j==rows){
				cout<<"\t";
				continue;
			} else
				cout<<j<<"\t";
		cout<<endl;
	}
	return 0;
}