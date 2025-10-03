//to read an integer and character input from the user using scanf and print the output using the printf function
/*input:enter the integer: 8
  enter the character: s
output:8 s  */

#include<stdio.h>
int main()
{
  int x;
  char ch;
  printf("enter the integer: ");
  scanf("%d",&x);
  printf("\nenter the character: ");
  scanf("%c",&ch);
  printf("%d %c",x,ch);//print the integer and character value.
  return 0;
}
