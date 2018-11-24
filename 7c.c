// Napisz program, który ze stdin wczyta
// 6 liczb rzeczywistych do tablicy, a
// następnie wypisze liczbę liczb dodatnich
// w niej zawartych.

#include <stdio.h>

int main()
{
  double numbers[6];
  int count = 0;
  printf("Program wczytuje 6 liczb z konsoli do tablicy i wypisuje ilość liczb dodatnich\n");
  printf("Wprowadz 6 liczb oddzielonych spacją,\nlub zatwierdzając każdą z nich enterem\n");
  for (int i = 0; i < 6; i++)
  {
    scanf("%lf", &numbers[i]);
  }
  for (int i = 0; i < 6; i++)
  {
    if (numbers[i] > 0)
      count++;
  }
  printf("Wpisanych liczb dodatnich jest: %d\n", count);
}
