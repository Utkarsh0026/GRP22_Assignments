#include<iostream>
using namespace std;
int main() {
	int min,max,step;
	cin>>min>>max>>step;
	int deg = 0;
	for(int i = min; i<=max; i=i+step)
	{
		deg = (int)5*( i - 32)/9;
		cout<<i<<"\t"<<deg<<endl;
	}
	return 0;
}