#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    long long int n1, n2, newnum;

    int n = 50000;

    if (n == 1)
    {
        cout << "0" << endl;
    }
    else if (n == 2)
    {
        cout << "0    1" << endl;
    }
    else
    {
        clock_t t = clock();
        n1 = 0;
        n2 = 1;
        cout << "0    1"
             << "\t";

        for (int i = 3; i <= n; i++)
        {
            newnum = n1 + n2;
            n1 = n2;
            n2 = newnum;

            cout << newnum << "\t";
        }

        t = clock() - t;
        double d = double(t) / CLOCKS_PER_SEC;

        cout << "time taken  = " << d << endl;
    }
}