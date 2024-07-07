#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {

int num;
int count = 0; 
int i;

int coins[5] = {25, 10, 5, 2, 1};


if (argc == 1)
{
printf("Error\n");
return (0);
}

num = atoi(argv[1]);

if (num < 0)
{
printf("0\n");
return (0);
}

for (i = 0; i < 5; i++)
{
    if (num / coins[i] >= 1)
    {
        count = count + num / coins[i];
        num = num % coins[i];
    }
    
    
}

printf("%d", count);

    return (0);
}
