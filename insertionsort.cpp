#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

void insersort(long long int a[], long long int n)
{
   long long int j;

   for (long long int i = 0; i < n; i++)
   {
      long long int k = a[i];
      j = i - 1;

      while (j >= 0 && a[j] > k)
      {
         a[j + 1] = a[j];
         j--;
      }

      a[j + 1] = k;
   }
}

int main()
{
   long long int n;

   n = 200000;
   long long int a[n];
   for (long long int i = 0; i < n; i++)
   {
      a[i] = rand() % n;
   }

   clock_t t = clock();

   insersort(a, n);
   t = clock() - t;

   double d = double(t) / CLOCKS_PER_SEC;

   cout << "time taken = " << d << endl;

   return 0;
}
