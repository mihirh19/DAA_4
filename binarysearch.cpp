#include <iostream>
#include <time.h>

using namespace std;

long long int binarys(long long int arr[], long long int l, long long int r, long long int x)
{
   if (l > r)
   {
      return -1;
   }
   else
   {
      int mid = (l + r) / 2;
      if (arr[mid] == x)
      {
         return mid;
      }
      else if (x < arr[mid])
      {
         return binarys(arr, l, mid - 1, x);
      }
      else
      {
         return binarys(arr, mid + 1, r, x);
      }
   }
}

int main(int argc, char const *argv[])
{
   long long n = 10000000;
   long long int arr[n];
   long long int x;

   for (long long i = 0; i < n; i++)
   {
      arr[i] = i * 2 + 1;
   }

   clock_t t = clock();

   x = binarys(arr, 0, n - 1, 600000);

   t = clock() - t;

   double d = double(t) / CLOCKS_PER_SEC;

   cout << "time taken  = " << d << endl;

   return 0;
}
