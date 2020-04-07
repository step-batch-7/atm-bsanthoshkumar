#include <stdio.h>

unsigned int get_money(unsigned short int amount)
{
  if(amount > 31999)
  {
    return 0;
  }

  int denominations[8] = {2000, 500, 100, 50, 20, 10, 5, 1};
  unsigned int total_notes = 0X0;
  unsigned short int balance = amount;

  for(int i = 0;i < 8;i++)
  {
    total_notes = total_notes << 4;
    total_notes += balance / denominations[i];
    balance %= denominations[i];
  }
  
  return total_notes;
}