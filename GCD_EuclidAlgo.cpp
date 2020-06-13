#include <iostream>

using namespace std;

// get GCD in O(Log min(a,b)) times.

int euclidAlgoGCD(int a, int b){
    if(b==0)
        return a;
    return EuclidAlgo(b, a % b);
}

// Driver Function

int main()
{
   cout << euclidAlgoGCD(78,66);
   return 0;
}
