#include <iostream>

using namespace std;

long Factorial(int n)
{   
    long nFactorial = 1;
    for (int i = 1; i <= n; i++)
        nFactorial = nFactorial * i;
    return nFactorial;
}

int CountZerosAtEnd(long nFactorial)
{
    int NumberOfZeros = 0;
    
    while (nFactorial % 10 == 0)
    {
        NumberOfZeros++;
        nFactorial = nFactorial / 10;
    }

    return NumberOfZeros;
}

int main()
{
    int n;
    long nFactorial;
    cin >> n;

    nFactorial = Factorial(n);

    cout << CountZerosAtEnd(nFactorial);

    return 0;
}
