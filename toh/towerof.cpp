#include <iostream>
#include <time.h>
using namespace std;

void toh(int n, char a, char b, char c)
{
    if (n > 0)
    {
        toh(n - 1, a, c, b);
        cout << "move disk from   " << a << "   to  " << b << endl;
        toh(n - 1, b, a, c);
    }
}

int main(int argc, char const *argv[])
{
    clock_t t = clock();
    toh(25, 'a', 'b', 'c');
    t = clock() - t;

    double d = double(t) / CLOCKS_PER_SEC;

    cout << "time taken = " << d << endl;
    return 0;
}
