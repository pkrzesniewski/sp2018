// Napisz program, który wczyta ze stdin 6 liczb
// rzeczywistych do tablicy, a następnie wyszuka
// i wypisze największą i najmniejszą liczbę umieszczoną
// w tej tablicy.

#include <stdio.h>

int main()
{
  double numbers[6];
  double max;
  double min;
  printf("Program wczytuje 6 liczb z konsoli do tablicy i wypisuje najmniejszą i największą wartość\n");
  printf("Wprowadz 6 liczb oddzielonych spacją,\nlub zatwierdzając każdą z nich enterem\n");
  for (int i = 0; i < 6; i++)
  {
    scanf("%lf", &numbers[i]);
  }
  for (int i = 0; i < 6; i++)
  {
    if (i == 0)
    {
      min = max = numbers[i];
    }
    else if (max < numbers[i])
      max = numbers[i];
    else if (min > numbers[i])
      min = numbers[i];
  }
  printf("Najmniejszą liczbą wpisaną do tablicy jest: %.2lf\n", min);
  printf("Najwiekszą liczbą wpisaną do tablicy jest: %.2lf\n", max);
}