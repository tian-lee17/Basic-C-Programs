/*The scanf() function is an input function defined in the standard input/output header file (stdio.h). 
It allows a program to read and parse data from the user according to a specified format and store that data into program variables.
The name scanf stands for "scan formatted."*/
//Syntax:scanf("Format specifier",addr.of_the_variable);

#include<stdio.h>
int main()
{
  int a ,b;//declare two variables of the type integer
  printf("Enter the values of a and b: ");
  scanf("%d %d",&a,&b);//to read the values of a and b from the user
  int sum=a+b;//store the sum of a and b in the variable sum
  printf("sum of %d and %d is %d\n",a,b,sum);//print the sum of a and b
}
/*sample input:Enter the values of a and b: 5 4
  sample output: sum of 5 and 4 is 9*/
