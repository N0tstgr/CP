#include <bits/stdc++.h>
using namespace std;

void printHello(){
	cout<<"hello";
}
int sum(int a, int b){
	int result = a + b;
	return result;
}

int digit_sum(int n){
	int digit_sum = 0;
	while(n!=0){
		digit_sum = digit_sum + n%10;
		n = n/10;

	}
	return digit_sum;
}


int main(){
	digit_sum(456);
	cout<<digit_sum;
	// int n;
	// cin>>n;
	// int digit_sum = 0;
	// while(n!=0){
	// 	digit_sum = digit_sum + n%10;
	// 	n = n/10;
	// }
	// // cout<<digit_sum;
	// cin>>n;
	// int digit_sum1 = 0;
	// while(n!=0){
	// 	digit_sum1 = digit_sum1 + n%10;
	// 	n = n/10;
	// }
	// cout<<digit_sum1 + digit_sum;




}