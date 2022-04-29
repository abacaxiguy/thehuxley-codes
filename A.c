#include <stdio.h>
#include <math.h>

int main()
{
	long int a, b;
	int i = 0, y = 0;

	scanf("%ld%ld", &a, &b);

	while (a != b)
	{
		y = 0;
		while (pow(2, y) < (a - b))
		{
			if (pow(2, y + 1) > (a - b))
				break;
			y++;
		}
		printf("%.lf ", pow(2, y));
		b += pow(2, y);

		i++;
	}

	return 0;
}