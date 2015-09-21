/*
 *Program to find the maximum value of a contiguous subsequence
 *Time=O(n) Space=O(1)
 *Returns 0 if all elements are negative
 */

#include <cstdio>
#define IN(a) scanf("%d",&a)
#define FOR(a,b) for(a=0;a<b;a++)
using namespace std;
 
int max(int x, int y)
{ return (y > x)? y : x; }
 
int maxSubArraySum(int a[], int size)
{
   int max_so_far = a[0], i;
   int curr_max = a[0];
 
   for (i = 1; i < size; i++)
   {
        curr_max = max(a[i], curr_max+a[i]);
        max_so_far = max(max_so_far, curr_max);
   }
   return max_so_far;
}
 
int main()
{
  int n; // no of elements in given array
  int i;  // loop variable
  IN(n);
  int *array=new int[n];
  FOR(i,n)
    IN(array[i]);
  int max_sum = maxSubArraySum(array, n);
  printf("Maximum contiguous sum is %d\n", max_sum);
  return 0;
}