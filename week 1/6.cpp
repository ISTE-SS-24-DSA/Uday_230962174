#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,max,arr[1000];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    cout<<max;
	return 0;

}
