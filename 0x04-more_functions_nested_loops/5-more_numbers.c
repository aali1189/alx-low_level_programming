#include "main.h"

void more_numbers(void)
{
 for (int number1 = 0; number1 < 10; number1++)
   {
  for (int number2 = 0; number2 <= 14; number2++)
    {
     if (number2 > 9)
      {
        _putchar((number2 / 10) + '0');
      }
       _putchar((number2 % 10) + '0');
     }
       _putchar(10);
     }
}
