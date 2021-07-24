#include<iostream>
using namespace std;
int calCost(int c1,int c2,int c3,int arr[],int size){
	int ans=0;
	for(int i=0; i<size; i++)
		if(c2 <= c1*arr[i])
			ans += c2;
		else
			ans += c1*arr[i];
		if(c3<ans)
			ans = c3;
		return ans;
}
int main() {
	int testCases;
	cin>>testCases;

	while(testCases){
	int c1,c2,c3,c4,n,m;
	cin>>c1>>c2>>c3>>c4>>n>>m;
	int rickshaw[n],cab[m];
	for(int i=0; i<n; i++)
		cin>>rickshaw[i];
	for(int i=0; i<m; i++)
		cin>>cab[i];
	int ans=0;
	ans += calCost(c1,c2,c3,rickshaw,n);
	ans += calCost(c1,c2,c3,cab,m);
	if(c4<ans)
		ans = c4;
	cout<<ans<<endl;
		testCases--;
	}
	return 0;
}