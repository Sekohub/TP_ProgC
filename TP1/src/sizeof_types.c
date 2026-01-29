#include <stdio.h>
#include <stdlib.h>

int main ()
{
  printf("sizeof(char) == %d bits\n", (int) sizeof(char)); //1
  printf("sizeof(signed char) == %d bits\n", (int) sizeof(signed char)); // bonus
  printf("sizeof(short) == %d bits\n", (int) sizeof(short)); //2
  printf("sizeof(int) == %d bits\n", (int) sizeof(int)); //3
  printf("sizeof(long int) == %d bits\n", (int) sizeof(long int)); //4
  printf("sizeof(long long int) == %d bits\n", (int) sizeof(long long int)); //5
  printf("sizeof(float) == %d bits\n", (int) sizeof(float)); //6
  printf("sizeof(double) == %d bits\n", (int) sizeof(double)); //7
  printf("sizeof(long double) == %d bits\n", (int) sizeof(long double)); //8

  return 0;
}



