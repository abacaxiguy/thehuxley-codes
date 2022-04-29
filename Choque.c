#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int level;

	scanf("%d", &level);

	if (level <= 20)
		printf("Potencia de : %d W\n", 20 + (level * level * level));
	else if (level <= 40)
		printf("Potencia de : %d W\n", 8000 + ((level - 10) * (level - 10)));
	else if (level <= 60)
		printf("Potencia de : %d W\n", 9000 + 5 * level);
	else if (level <= 80)
		printf("Potencia de : %d W\n", 9300 + 2 * level);
	else
		printf("Potencia de : %d W\n", 9500 + level);

	return 0;
}