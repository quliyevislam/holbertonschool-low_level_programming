#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
    
	int i;
for (i = 0; i < n; i++)
    {

        if (src[i] == '\0')
        {
            break;
        }
        dest[i] = src[i];
    }


    for (; i < n; i++)
    {
        dest[i] = '\0';
    }
    return(dest);
}
