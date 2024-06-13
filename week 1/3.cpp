#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,flag=0;
    cin>>n;
    if(n<2){
        cout<<"neither";
        return 0;
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0)
        flag=1;
    }
    if(flag)
    cout<<"composite";
    else
    cout<<"prime";
	return 0;

}
