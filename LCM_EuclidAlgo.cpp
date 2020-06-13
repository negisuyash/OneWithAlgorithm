#include <iostream>

using namespace std;

// finding LCM in O(Log min(a,b)) using Euclid GCD 

// LCM(a,b) = a * b / GCD(a,b)

int euclidAlgoGCD(int a, int b){
    if(b==0)
        return a;
    return euclidAlgoGCD(b, a % b);
}

int lcm(int a, int b){
    return (a * b) / euclidAlgoGCD(a,b);
}

int main()
{
   cout << lcm(12, 15);
   return 0;
}
