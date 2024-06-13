#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    int n,i,num;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    for(i=0;i<n;++i){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    reverse(vec.begin(),vec.end());
    for(i=0;i<n;++i){
        cout<<vec[i]<<" ";
    }
	return 0;
}
