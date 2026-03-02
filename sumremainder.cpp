#include <bits/stdc++.h>
using namespace std;

int main() {
    //sum of  all of the digit
    int t;
    cin>>t;
    while(t--){
    int n;
    int sum = 0;
    cin>>n;
    while(n!=0){
        int rem = n%10;
        sum = sum + rem;
        n = n/10;
        
    }
    
    cout<<sum<<endl;
}
	

}
