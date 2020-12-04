#include <iostream> 
using namespace std; 
int main() 
{ int n; 
cin >> n; 
for(int i=0;i<n;i++){
	 for(int j=n-i;j>0;j--){ 
	if(j%2!=0) cout << "M"; else cout << "R"; } cout << " "; 
	 for(int j=0;j<=i;j++){ if(j%2==0) cout << "M"; else cout << "R"; 
	 } cout << endl; } }