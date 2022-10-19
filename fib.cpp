#include <iostream>
using namespace std;

int fib(int n)
{
    int F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
        return 0;
    pow(F, n - 1);
 
    return F[0][0];
}
 
void pow(int F[2][2], int n)
{
    if(n == 0 || n == 1)
       return;
    int M[2][2] = {{1, 1}, {1, 0}};
     
    pow(F, n / 2);
    mult(F, F);
     
    if (n % 2 != 0)
        mult(F, M);
}
