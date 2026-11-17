#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n),dep(n);
    for(int i=0;i<n;i++)cin>>arr[i];
     for(int i=0;i<n;i++)cin>>dep[i];
    int i=0,j=0,platforms=0,ans=0;
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            platforms++;
            i++;
        }
        else{
            platforms--;
            j++;
        }
        ans=max(ans,platforms);
    }

    cout<<ans;
    
    
}