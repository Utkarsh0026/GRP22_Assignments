#include<iostream>
using namespace std;
int main() {
	int rows;
	cin>>rows;
	for(int i=1; i<=rows; i++)
	{
		for(int j=1; j<=rows; j++)
		{
			if(i == 1 && (j == 1 || j >= rows/2+1))
				cout<<"*";
			else if(i == rows/2+1)
				cout<<"*";
			else if((j == 1 || j == rows/2+1) && (i < rows/2 + 1))
				cout<<"*";
			else if((j == rows/2+1 || j == rows) && (i > rows/2 + 1 && i < rows))
				cout<<"*";
			else if((i == rows) && ( j==rows || j<=rows/2 + 1))
				cout<<"*";
			else	
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}