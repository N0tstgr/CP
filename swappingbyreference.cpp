#include <bits/stdc++.h>
using namespace std;
void swap(int &a , int &n){
	int temp = a;
	a = n;
	n = temp;
	
}

int main(){
	int a= 3;
	int n = 8;
    swap(a,n);

	cout<<a<< " " <<n<<endl;

}