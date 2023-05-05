#include <stdio.h>

int main() {
    int z, n, zero_count = 0, positive_count = 0, negative_count = 0;

    // Считываем количество чисел, которые будут вводиться
    scanf("%d", &n);

    // Считываем числа и подсчитываем количество нулей, положительных и отрицательных чисел
    int i = 0;
    while (i < n) {
        scanf("%d", &z);
        if (z == 0) { // если число равно 0
            zero_count++; // увеличиваем счетчик количества нулей
        } else if (z > 0) { // если число больше 0
            positive_count++; // увеличиваем счетчик количества положительных чисел
        } else { // иначе
            negative_count++; // увеличиваем счетчик количества отрицательных чисел
        }
        i++; // переходим к следующему числу
    }

    // Выводим результат
    printf("%d %d %d\n", zero_count, positive_count, negative_count);

    return 0;
}