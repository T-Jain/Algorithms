#include <iostream>
#include <cstring>

// marks all mutiples of 'a' ( greater than 'a' but less than equal to 'n') as 1.
void markMultiples(bool arr[], int a, int n)
{
	int i = 2, num;
	while ((num = i*a) <= n )
	{
		arr[num] = 1;
		++i;
	}
}

// A function to print all prime numbers smaller than n
void SieveOfEratosthenes(int n)
{
	// There are no prime numbers smaller than 2
	if (n >= 2)
	{
		// Create an array of size n and initialize all elements as 0
		bool arr[n];
		memset(arr, 0, sizeof(arr));

		/* Following property is maintained in the below for loop
		arr[i] == 0 means i is prime
		arr[i] == 1 means i is not prime */
		for (int i=2; i<n; ++i)
		{
			if ( arr[i] == 0 )
			{
				// i is prime, print it and mark its multiples
				printf("%d ", i);
				markMultiples(arr, i, n);
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	printf("Following are the prime numbers below %d\n", n);
	SieveOfEratosthenes(n);
	return 0;
}
