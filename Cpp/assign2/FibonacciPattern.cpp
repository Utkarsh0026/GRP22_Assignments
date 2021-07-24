#include<iostream>
using namespace std;
int main() {
	int rows;
	cin>>rows;
    // determining the total number to be printed
	int size = rows*(rows+1)/2;
    // initialising array of size = number of elements req
	int arr[size];
	int a=0,b=0,c=1;
	arr[0]=0;
    // assigning the fibonacci seq to arr elements
	for(int i=1;i<size;i++)
		{
			arr[i] = c;
			a = b;
			b = c;
			c = a + b;
		}
	// printing the arr elements
	int k = 0;
	for(int i = 1; i<=rows; i++)
		{
            // to mantain the triangle pattern
			for(int j = 0; j<i; j++)
            // incrementing the k for printing arr elements
			cout<<arr[k++]<<"\t";
		cout<<endl;
		}
	return 0;
}