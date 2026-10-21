#include<bits/stdc++.h>
using namespace std; 
int main(){
    int number;
    cin>>number;
    int rev = 0;
    int n=number;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(number==rev)cout<<"truee";
    else cout<<"false";
    return 0;
}