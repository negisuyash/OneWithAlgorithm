#include <bits/stdc++.h>

using namespace std;

vector<int> primeFactor(int num){
    
    vector<int> pf;
    
    while(num % 2 == 0){
        pf.push_back(2);
        num/=2;
    }
    
    for(int i = 3 ; i <= sqrt(num) ; i += 2){
        
        while(num % i == 0){
            pf.push_back(i);
            num/=i;
        }
        
    }
    
    if(num > 1) pf.push_back(num);
    
    return pf;
    
}

int main()
{
   vector<int> primeFactors = primeFactor(250);
   
   for(auto i:primeFactors)
        cout<<i<<'\t';
   
   return 0;
}
