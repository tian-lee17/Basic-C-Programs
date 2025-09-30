// To understand how to print variables of different data types using appropriate format specifier.
/*A format specifier in C is a special sequence of characters used in output functions like printf() and 
input functions like scanf() to determine the type and format of data being read or written.*/

#include<stdio.h>
int main()
{
  //declare a variable ch of the type character
  char ch='A';
  //declare a variable x of the type integer
  int x=47;
  //declare a variable f of the type float(real number)
  float f= 3.1428;
  
  printf("character is %c\n",ch);//%c is the format specifier for character
  printf("integer is %d\n",x);//%d is the format specifier for integer
  printf("float is %f\n",f);//%f is the format specifier for float
  return 0;  
}
