#include <stdio.h>

int main() {
    int number; // исходное число
    int remainder; // остаток от деления
    int i = 0; // счетчик
    int binary[32]; // массив для хранения двоичного представления числа
    scanf("%d", &number); // считываем число из ввода
    if (number < 0) { // если число отрицательное, выводим знак минус и меняем его знак на положительный
        printf("-");
        number = -number;
    }
    do { // переводим число в двоичную систему счисления
        remainder = number % 2;
        number = number / 2;
        binary[i] = remainder;
        i++;
    } while (number != 0);
    while (i > 0) { // выводим двоичное представление числа
        i--;
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}
