#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

int search(long long int arr[], int n, long long int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int n;
    long long int x;
    n = 1000000;

    long long int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % n;
        cout << arr[i] << "\t";
    }
    x = arr[rand() % n - 1];
    clock_t t = clock();
    x = search(arr, n, 100000000);

    t = clock() - t;
    cout << "location  = " << x;
    double d = double(t) / CLOCKS_PER_SEC;

    cout << "time taken = " << d << endl;

    return 0;
}
