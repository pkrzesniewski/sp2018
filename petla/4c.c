// Napisz program, który wyliczy sumę liczb naturalnych
// od 1 do liczby n podanej przez użytkownika.
// Kiedy użytkownik poda liczbę mniejszą niż 1, to program
// powinien wypisać stosowny komunikat o błędzie.

#include <stdio.h>

void numberInput(int *number);
void numberSum(int number);

int main()
{
  int number;
  printf("Program wylicza sumę liczb naturalnych od 1\ndo podanej przez uzytkownika liczby..\n");
  printf("Wprowadz liczbę na ktorej sumowanie ma się zakonczyc:\n");
  numberInput(&number);
  numberSum(number);
}

void numberInput(int *number)
{
  scanf("%d", number);
}

void numberSum(int number)
{
  if (number < 1)
    printf("Proszę podać liczbę naturalną większą od 1 aby sumowanie przebiegło prawidłowo\n");
  else
  {
    int a = 1;
    int result = 0;
    while (a <= number)
    {
      result += a;
      a++;
    }
    printf("Suma liczb od 1 do %d wynosi: %d\n", number, result);
  }
}
