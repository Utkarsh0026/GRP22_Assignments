#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long int a,b,c;
	cin>>a>>b>>c;
	int root1,root2,D = sqrt(b * b -(4 * a * c));
	if(D > 0) {
		root1 = (-b + D)/(2*a);
		root2 = (-b - D)/(2*a);
		cout<<"Real and Distinct"<<endl;
		cout<<root2<<" "<<root1;
	} else if(D == 0) {
		root1 = (-b)/(2*a);
		root2 = (-b)/(2*a);
		cout<<"Real and Equal"<<endl;
		cout<<root1<<" "<<root1;
	} else {
		cout<<"Imaginary"<<endl;
	}
	return 0;
} 