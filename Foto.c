#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double p1, p2, p3, p4;
    double primeiro, segundo, terceiro, quarto;

    scanf("%lf %lf %lf %lf", &p1, &p2, &p3, &p4);

    if (p1 > p2 && p1 > p3 && p1 > p4) terceiro = p1;
    else if (p2 > p1 && p2 > p3 && p2 > p4) terceiro = p2;
    else if (p3 > p1 && p3 > p2 && p3 > p4) terceiro = p3;
    else if (p4 > p1 && p4 > p2 && p4 > p3) terceiro = p4;

    if (p1 < p2 && p1 < p3 && p1 < p4){
        primeiro = p1;
        p1 += p2 + p3 + p4 + 10; // Voc� agr � maior q todos
    }
    else if (p2 < p1 && p2 < p3 && p2 < p4)
    {
        primeiro = p2;
        p2 += p1 + p3 + p4 + 10; // Voc� agr � maior q todos
    }
    else if (p3 < p2 && p3 < p1 && p3 < p4)
    {
        primeiro = p3;
        p3 += p2 + p1 + p4 + 10; // Voc� agr � maior q todos
    }
    else if (p4 < p2 && p4 < p3 && p4 < p1)
    {
        primeiro = p4;
        p4 += p2 + p3 + p1 + 10; // Voc� agr � maior q todos
    }

    if (p1 > primeiro && p1 < p2 && p1 < p3 && p1 < p4) quarto = p1;
    else if (p2 > primeiro && p2 < p1 && p2 < p3 && p2 < p4) quarto = p2;
    else if (p3 > primeiro && p3 < p2 && p3 < p1 && p3 < p4) quarto = p3;
    else if (p4 > primeiro && p4 < p2 && p4 < p3 && p4 < p1) quarto = p4;

    if (p1 > primeiro && p1 > quarto && p1 < terceiro) segundo = p1;
    else if (p2 > primeiro && p2 > quarto && p2 < terceiro) segundo = p2;
    else if (p3 > primeiro && p3 > quarto && p3 < terceiro) segundo = p3;
    else if (p4 > primeiro && p4 > quarto && p4 < terceiro) segundo = p4;

    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf", primeiro, segundo, terceiro, quarto);

    return 0;
}