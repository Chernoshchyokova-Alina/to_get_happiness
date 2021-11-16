/* Задачи на битовые операции и делимость

   №3 найти первые N целых (>=0) чисел, 
      у которых младший байт является зеркальным отражением следующего байта

   Чернощёкова Алина Фёдоровна, группа 112 */

#include "headers.h" // Подключаем другие функции
 
int main(void)
{
    int N; // Количество чисел, которые нужно найти
    int bits[32]; // Массив из 32 элементов для записи битового представления числа

    printf("How many numbers do you want to be found? \n");
    scanf("%d", &N);

    find_numbers(N, bits);

    return 0;
}