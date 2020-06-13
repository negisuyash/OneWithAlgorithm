#include <bits/stdc++.h>

using namespace std;

//finding primes using Sieve of Eratosthenes

vector<int> findPrime(int num){
    
    vector<int> primes;
    
    bool isPrime[num+1];
    
    memset(isPrime,true,sizeof(isPrime));
    
    for(int i=2;i<=sqrt(num);i++){
        if(isPrime[i]==true){
            for(int j=i*i;j<=num;j+=i)
                isPrime[j]=false;
        }
    }
    
    for(int i=2;i<=num;i++){
        if(isPrime[i]==true)
            primes.push_back(i);
    }
    
    return primes;
    
}

//Driver function
int main()
{
    for(auto i:findPrime(20)) cout<<i<<'\t';
    
    return 0;
}
