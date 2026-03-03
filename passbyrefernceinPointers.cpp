#include <bits/stdc++.h>
using namespace std;

void increment(int *x){
	// (*x)++;
	*x = *x + 2;
}
int main(){
	int a = 8;
	cout<<a<<endl;
	increment(&a);
	cout<<a<<endl;

}