#include <stdio.h>

/**
*main - Print the alpahbet in lowercase letters, except for e and q
*
*Return: Always 0 
*/

in main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
puchar(letter);
}
putchar('\n');

return (0);
}
