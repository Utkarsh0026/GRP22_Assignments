#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	cin>>n1>>n2;
	for(int i=1;n1!=0;i++)
	{
        // check for multiple acc to ques
		if((3*i+2) % n2==0)
			continue;
		else 
		{		
			cout<<3*i+2<<endl;
            //counter to print number of elements req only
			n1--;
		}
	}
	return 0;
}