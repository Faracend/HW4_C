#include <stdio.h>

int main() {
    int start_day, days_in_month, i, j;
    // Запрашиваем у пользователя данные
scanf("%d %d", &start_day, &days_in_month);

// Инициализируем переменные
int day_count = 0;
int week_count = 0;

// Начинаем создание календаря
while (day_count != days_in_month) {
    week_count++; // Увеличиваем счетчик недель
    j = 1; // Устанавливаем начальное значение для счетчика дней в неделе

    while (j <= 7) { // Выводим все 7 дней в неделе
        if ((week_count == 1) && (j < start_day)) { // Если первая неделя и день месяца еще не начался
            printf(" "); // Выводим пробелы
            printf(" ");
            printf(" ");
        }
        else {
            if (day_count != days_in_month) { // Если еще не прошли все дни месяца
                day_count += 1; // Увеличиваем счетчик дней
                printf("%d", day_count); // Выводим номер дня месяца
                printf(" "); // Выводим пробел после номера дня
            }
        }
        j++; // Увеличиваем счетчик дней в неделе
    }
    printf("\n"); // Переходим на новую строку после вывода всех дней в неделе
}
    return 0;
}
