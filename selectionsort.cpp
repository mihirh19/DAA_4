#include <iostream>
#include <time.h>
#include <cmath>
using namespace std;

void swap(long long int *a, long long int *b)
{
    long long int t = *a;
    *a = *b;
    *b = t;
}

void selectionsort(long long int a[], long long int n)
{
    long long min;
    for (long long int i = 0; i < n; i++)
    {
        min = i;
        for (long long int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(&a[min], &a[i]);
    }
}

int main(int argc, char const *argv[])
{
    long long int n;
    n = 200000;

    long long int a[n];

    for (long long int i = 0; i < n; i++)
    {
        a[i] = rand() % n;
    }

    clock_t t = clock();
    selectionsort(a, n);

    t = clock() - t;

    double d = double(t) / CLOCKS_PER_SEC;

    cout << "time taken = " << d << endl;

    return 0;
}
