#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double maior_do_array(double array[], int i, double max, int indice)
{
    if (i > 3) {
        double temp;
        temp = array[2];
        array[2] = max;
        array[indice] = temp;
        return max;
    };

    if (array[i] >= max){ 
        max = array[i];
        indice = i;
    }

    return maior_do_array(array, i + 1, max, indice);
}

void menor_do_array(double array[], int i, double min, int indice)
{
    if (i > 3)
    {
        double temp;
        temp = array[0];
        array[0] = min;
        array[indice] = temp;
        return;
    };

    if (array[i] <= min){ 
        min = array[i];
        indice = i;
    }

    menor_do_array(array, i + 1, min, indice);
}

int main()
{
    double familia[4];
    double p0, p1, p2, p3, temp;

    scanf("%lf %lf %lf %lf", &p0, &p1, &p2, &p3);

    familia[0] = p0;
    familia[1] = p1;
    familia[2] = p2;
    familia[3] = p3;

    temp = maior_do_array(familia, 0, 0, 0);
    menor_do_array(familia, 0, temp, 0);

    if (familia[3] > familia[1]) {
        temp = familia[1];
        familia[1] = familia[3];
        familia[3] = temp;
    }

    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n", familia[0], familia[1], familia[2], familia[3]);

    return 0;
}