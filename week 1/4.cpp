#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,j,dig=1;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        cout<<dig++<<" ";
        cout<<endl;
    }
	return 0;

}
