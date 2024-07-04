#include "main.h"

char *_strstr(char *haystack, char *needle)
{
int i;
int j;
int k = 0;

for (i = 0; haystack[i]; i++)
{
    for (j = 0; needle[j]; j++)
    {
        
        if (haystack[i + j] == needle[j])
        k++;
        
    }
    if (k == j)
    return haystack + i;
   
    k = 0;

return 0;
}
    
    
