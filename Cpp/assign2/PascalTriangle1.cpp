#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	// Intialising all arr elements to 0
	int arr[n][n] = {0};

	// Implementing the number logic
	for(int i=1; i<=n; i++)
		for(int j=1;j<=i;j++)
			if(j==0||j==i)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i-1][j-1] + arr[i-1][j];

	// Implementing the printing logic
	for(int i = 1; i<=n; i++)
	{
		for(int j=i; j<=2*(n)+3; j++)
		cout<<"  ";
		for(int j=1; j<=i; j++)
		cout<<arr[i][j]<<"   ";
		cout<<endl;
	}
	return 0;

}