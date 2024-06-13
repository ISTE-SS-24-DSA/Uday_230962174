#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, nrev=0, dig;
    cin>>n;
    while(n){
        nrev*=10;
        dig=n%10;
        nrev+=dig;
        n/=10;
    }
    cout<<nrev;
	return 0;

}
