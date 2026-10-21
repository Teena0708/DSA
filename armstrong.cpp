#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int num = n;
     int digits = to_string(n).length();
    while(num>0){
        int rem = num%10;
        sum+=pow(rem,digits);
        num = num/10;
    }
    if(sum==n)cout<<"true";
    else cout<<"falseee";
    return 0;
}