#include <stdio.h>

void main()
{
  int score;
  char grade;

  printf("Enter your Score :");
  scanf("%d", &score);

  // if(score<0 || score>100){
  //   printf("Invalid Input");
  // }

  (score >= 90 && score <= 100) ? grade = ('a') : (score >= 80 && score < 90) ? grade = ('b')
                                              : (score >= 70 && score < 80)   ? grade = ('c')
                                              : (score >= 60 && score < 70)   ? grade = ('d')
                                              : (score >= 50 && score < 60)   ? grade = ('e')
                                              : (score >= 40 && score < 50)   ? grade = ('f')
                                              : (score <= 30)                 ? grade = ('g')

                                                              : printf("Invalid Input");

  switch (grade)
  {
  case 'a':
    printf("\nExcellent Work");
    printf("\nYour Grade Is A");
    break;
  case 'b':
    printf("\n Very Good");
    printf("\nYour Grade Is B");
    break;

  case 'c':
    printf("\n  Good");
    printf("\nYour Grade Is C");
    break;

  case 'd':
    printf("\n Not Good");
    printf("\nYour Grade Is D");
    break;

  case 'e':
    printf("\n Very Bad");
    printf("\nYour Grade Is E");
    break;

  case 'f':
    printf("\n Very Very Bad");
    printf("\nYour Grade Is F");
    break;

  case 'g':
    printf("\n Very Very Very Bad");
    printf("\nYour Grade Is G");
    break;

  default:
    printf("Invalid Input");
  }
}