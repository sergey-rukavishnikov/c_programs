#include<stdio.h>
#include<math.h>
int main() {
	int N, a = 1, l, b = 1, k, c = 1, f;
	printf("Input: ");
	scanf("%d", &N);
	while (a<N)
	{
		l = N - pow(a, 2);
		while (b<l)
		{
			k = l - pow(b, 2);
			while (c<k)
			{
				f = k - pow(c, 2);
				if (f=0)
				{
					printf("YES");
					break;
				}
				++c;
			}
			++b;
		}
		++a;
	}
	return(0);
}