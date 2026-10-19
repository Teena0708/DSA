#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {

    // Numbers less than or equal to 1 are not prime
    if (n <= 1)
        return false;

    // Check divisibility from 2 to the square root of n
    for (int i = 2; i* i <=n; i++)
        if (n % i == 0)  
            return false;
    return true;
}

int main() {
    int n = 7;  
  	if(isPrime(n)) cout << "truee";
  	else cout<<"false";
    return 0;
}