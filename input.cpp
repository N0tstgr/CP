#include <bits/stdc++.h>
using namespace std;

int main(){
	double n;
	cin>>n;
	int a[n];
	// char a[n],b[m];
	for(int i = 0; i<n; i++){
		cin>>a[i];

	}
	int sum = 0;
	for(int i = 0; i<n; i++){
		sum = sum + a[i];

	}
	cout<<sum<<endl;
}
