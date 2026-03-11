#include <bits/stdc++.h>
using namespace std;
const int N = 1e9;
const int NN = 1e4;
int a[NN];
int main(){
	for(int i = 0; i<N; i++){
		a[i%NN] = i;
	}
	cout<<a[i];



}