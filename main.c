#include <stdio.h>
#include "atm.h"

int print_denominations_count(unsigned int notes)
{
  int denominations[8] = {2000, 500, 100, 50, 20, 10, 5, 1};
  for(int i = 0;i < 8;i++)
    {
      printf("\t%d notes of %d\n",notes >> 28,denominations[i]);
      notes = notes << 4;
    }
  
  return 0;
}

int main(void)
{
  unsigned short int amounts[] = {1, 10, 39, 589, 2590, 31999};
  for (int i = 0; i < 6; i++)
  {
    unsigned int notes = get_money(amounts[i]);
    printf("%5u %0x\n", amounts[i],notes);
    print_denominations_count(notes);
    printf("\n");
  }

  return 0;
}
