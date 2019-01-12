// Napisz program, który wczyta ze stdin 6
// liczb całkowitych do tablicy, a następnie
// wypisze zawartość tej tablicy od początku i od końca.

#include <stdio.h>

int main()
{
  int numbers[6];
  printf("Program wczytuje 6 liczb całkowitych z konsoli do tablicy i wypisuje ich wartość\n");
  printf("Wprowadz 6 liczb całkowitych oddzielonych spacją,\nlub zatwierdzając każdą z nich enterem\n");
  for (int i = 0; i < 6; i++)
  {
    scanf("%d", &numbers[i]);
  }
  printf("Wpisane liczby to: ");
  for (int i = 0; i < 6; i++)
  {
    printf("%d ", numbers[i]);
  }
  printf("\n");
}
