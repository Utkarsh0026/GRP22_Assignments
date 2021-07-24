#include<bits/stdc++.h>
using namespace std;

int main() {
 int n;
 cin >> n;
 int n2, n1, inc = 0;
 cin >> n1;
 n--;
 while (n > 0) {
  cin >> n2;
  if (n2 == n1) {
   cout << "false";
   return 0;
  }
  if (n2 < n1 && inc == 0) {
   n--;
   n1 = n2;
   continue;
  }
  else if (n2 < n1 && inc == 1) {
   cout << "false";
   return 0;
  }
  else if (n2 > n1) {
   inc = 1;
  }
  n1 = n2;
  n--;
 }
 cout << "true";
 return 0;
}