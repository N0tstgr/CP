#include <bits/stdc++.h>
using namespace std;

int main(){
	int x = 4;
	int *p_x = &x;
	cout<<"Addr x: " << &x+1 << endl;
	cout<<"Addr p_x: " << p_x << endl;
	cout<<"Addr *p_x: " << *p_x << endl;
	*p_x = 6;
	cout<<"Addr x: " << x << endl;
	cout<<"Addr p_x + 1: " << p_x+1 << endl;
	int **p_p_x = &p_x;
	cout<< "Addr p_x : " << &p_x<<endl;
	cout<< "VAl p_p_x : " << p_p_x<<endl;
	cout<< "VAlue *p_p_x : " << *p_p_x<<endl;
	cout<< "VAlue **p_p_x : " << **p_p_x<<endl;
	**p_p_x = 8;
	cout<<"Value of x : "<< x<<endl;






}