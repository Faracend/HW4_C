#include <stdio.h>

int main() {
    int z[10000], n, count = 0;

    // Считываем количество элементов в массиве
    scanf("%d", &n);

    // Считываем элементы массива размера N
    for (int i = 0; i < n; i++) {
        scanf("%d", &z[i]);
    }

    // Подсчитываем количество положительных чисел в массиве
    int i = 0;
    while (i < n) {
        if (z[i] > 0) { // если число больше 0
            count++; // увеличиваем счетчик количества положительных чисел
        }
        i++; // переходим к следующему элементу массива
    }

    // Выводим результат
    printf("%d\n", count);

    return 0;
}