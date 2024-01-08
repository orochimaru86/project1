#include <stdio.h>
#include <math.h>
#include <string.h>
#include "calculate.h"

float Calculate(float Numeral, char Operation[4])
{
        float SecondNumeral;
        if (strncmp(Operation, "+", 1) == 0)
        {
                printf("Второе слагаемое: ");
                scanf("%f", &SecondNumeral);
                return Numeral + SecondNumeral;
        }
        if (strncmp(Operation, "-", 1) == 0)
        {
                printf("Вычетаемое: ");
                scanf("%f", &SecondNumeral);
                return Numeral - SecondNumeral;
        }
        if (strncmp(Operation, "*", 1) == 0)
        {
                printf("Множитель: ");
                scanf("%f", &SecondNumeral);
                return Numeral * SecondNumeral;
        }
        if (strncmp(Operation, "/", 1) == 0)
        {
                printf("Делитель: ");
                scanf("%f", &SecondNumeral);
                if (SecondNumeral == 0.0f)
                {
                        printf("Ошибка: деление на ноль.");
                        return 0.0f;
                }

                return Numeral / SecondNumeral;
        }
        if (strncmp(Operation, "pow", 3) == 0)
        {
                printf("Степень: ");
                scanf("%f", &SecondNumeral);
                return pow(Numeral, SecondNumeral);
        }
        if (strncmp(Operation, "sqrt", 4) == 0)
        {
                return sqrt(Numeral);
        }
        if (strncmp(Operation, "sin", 3) == 0)
        {
                return sin(Numeral);
        }
        if (strncmp(Operation, "cos", 3) == 0)
        {
                return cos(Numeral);
        }
        if (strncmp(Operation, "tan", 3) == 0)
        {
                return tan(Numeral);
        }

        printf("Неправильно введено действие ");
        return 0.0f;
}
