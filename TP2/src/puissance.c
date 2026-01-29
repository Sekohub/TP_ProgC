#include <stdio.h>

int main(void)
{
  int a = 6;
  int b = 5;
  int i;
  float puiss = 1; 

  for (i = 1; i <= b; i++)
    {
      puiss = puiss * a
    }

  printf("%d à la puissance %d = %f\n", a, b, puiss);

  return 0;
}


