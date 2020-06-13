#include <bits/stdc++.h>

#define bigInt unsigned long long int

using namespace std;

//testing a number for primality using Fermat's little number algorithm

bool isPrime(bigInt p){
    
    bigInt fermatWitness =(int) rand() % (p-1);
    
    bigInt n = pow(fermatWitness,p-1);

    //applying algo
    if(n % p == 1)
      return true;
      
    return false;
    
}

//Driver function
int main()
{
    cout << isPrime(19ULL);
    
    return 0;
}
