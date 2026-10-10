#include<bits/stdc++.h>
using namespace std;   //count no. of digits in a number
int main(){
    int number;
    cin>>number;
    int n = (int)log10(number)+1;
    cout<<n;
    return 0;
}