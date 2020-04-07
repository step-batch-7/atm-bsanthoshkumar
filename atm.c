#include <stdio.h>

unsigned int get_money(unsigned short int amount)
{
  int denominations[] = {2000, 500, 100, 50, 20, 10, 5, 1};
  unsigned int total_notes = 0X0;
  unsigned short int balance = amount;
  if(balance <= 31999)
  {
    for(int i = 0;i < 8;i++)
    {
      total_notes = total_notes << 4;
      total_notes += balance / denominations[i];
      balance = balance % denominations[i];
    }
  }
  return total_notes;
}