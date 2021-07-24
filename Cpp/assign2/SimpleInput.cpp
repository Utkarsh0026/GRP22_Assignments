#include<iostream>
using namespace std;
int main() {
	int n = 0,sum=0;
	while(sum>=0){
		cin>>n;
		sum += n;
		if(sum>=0)
			cout<<n<<endl;
	}
	return 0;
}