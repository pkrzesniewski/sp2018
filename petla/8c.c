// Napisz program rozmieszczający poniższe 
// wzory oddzielnie jeden pod drugim. 
// Użyj pętli for do generowania wzorów. 
// Do wypisywania gwiazdek należy użyć instrukcji 
// putchar('*') (powodującej wyświetlanie ich 
// obok siebie). Uwaga: dwa ostatnie wzory wymagają,
// by każdy wiersz zaczynał się od odpowiedniej liczby spacji.
//  *       ****    ****       *
//  **      ***      ***      **
//  ***     **        **     ***
//  ****    *          *    ****

#include <stdio.h>

void firstSign();
void secondSign();
void thirdSign();
void fourthSign();

int main()
{
  firstSign();
  secondSign();
  thirdSign();
  fourthSign();
}

void firstSign(){
  for(int i=0;i<4;i++){
    if(i==0){
      putchar('*');
    }
    if(i==1){
      for(int i=1;i<=2;i++){
        putchar('*');
        continue;
      }
    }
    if(i==2){
      for(int i=1;i<=3;i++){
        putchar('*');
        continue;
      }
    }
    if(i==3){
      for(int i=1;i<=4;i++){
        putchar('*');
        continue;
      }
    }
    putchar('\n');
  }
}

void secondSign(){
  for(int i=0;i<4;i++){
    if(i==0){
      for(int i=1;i<=4;i++){
        putchar('*');
        continue;
      }
    }
    if(i==1){
      for(int i=1;i<=3;i++){
        putchar('*');
        continue;
      }
    }
    if(i==2){
      for(int i=1;i<=2;i++){
        putchar('*');
        continue;
      }
    }
    if(i==3)
      putchar('*');
    putchar('\n');
  }
}

void thirdSign(){
  for(int i=0;i<4;i++){
    if(i==0){
      for(int i=1;i<=4;i++){
        putchar('*');
        continue;
      }
    }
    if(i==1){
      printf(" ");
      for(int i=1;i<=3;i++){
        putchar('*');
        continue;
      }
    }
    if(i==2){
      printf("  ");
      for(int i=1;i<=2;i++){
        putchar('*');
        continue;
      }
    }
    if(i==3){
      printf("   ");
      putchar('*');
    }
    putchar('\n');
  }
}

void fourthSign(){
  for(int i=0;i<4;i++){
    if(i==0){
      printf("   ");
      putchar('*');
    }
    if(i==1){
      printf("  ");
      for(int i=1;i<=2;i++){
        putchar('*');
        continue;
      }
    }
    if(i==2){
      printf(" ");
      for(int i=1;i<=3;i++){
        putchar('*');
        continue;
      }
    }
    if(i==3){
      for(int i=1;i<=4;i++){
        putchar('*');
        continue;
      }
    }
    putchar('\n');
  }
}
