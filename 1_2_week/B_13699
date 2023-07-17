#include <stdio.h>

int main()
{
	int n;
	long long int aa[36];
	aa[0] = 1;

	for (int i = 1; i < 36; i++)
	{
		aa[i] = 0;
		for (int j = 0; j < i; j++)
		{
			aa[i] += aa[j] * aa[i - j - 1];
		}
	}

	scanf("%d", &n);
	printf("%lld", aa[n]);

	return 0;
}