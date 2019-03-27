//Author Name: Qisheng Chen
//Program Description: this program is to list  all the numbers before you enter

#include<stdio.h>
main(){

  int i, Num, Sum = 0;

  printf("Please Enter the value of the Number : \n");
  scanf("%d", &Num);// enter your number
  printf("The value of Number is : %d \n", Num);

  for(i=1; i<=Num; i++){
    Sum +=i;
  }
    printf("The Sum of the number from 1 to %d is %d  \n", Num, Sum);
  
  return 0;
}// end of main
