#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    float average;

    // Считываем числа из последовательности, пока не введём 0
    do {
        scanf("%d", &num);

        if (num != 0) { // если число не равно 0
            sum += num; // суммируем все введенные числа
            count++; // увеличиваем счетчик количества введенных чисел
        }
    } while (num != 0); // повторяем до тех пор, пока не введём 0

    // Вычисляем среднее арифметическое
    average = (float) sum / count;

    // Выводим результат
    printf("%f\n", average);

    return 0;
}
