#include <time.h>
#include <iostream>
using namespace std;

long long int fibo(long long int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
    int n = 50;
    clock_t t = clock();

    for (int i = 0; i < n; i++)
    {
        cout << fibo(i) << "\t";
    }

    t = clock() - t;

    double d = double(t) / CLOCKS_PER_SEC;

    cout << "time taken is = " << d << endl;

    return 0;
}
