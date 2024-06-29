#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
    int i;
    /*while (dest[len_dest] != '\0')
    {
        len_dest++;
    }
    
    while (src[i] != '\0')
    {
        len_src++;
    }
    */
    for (i = 0; i < n ; i++)
    {
        dest[i] = src[i];
        
        
    }
    
    /*if (len_src < n)
    {
        for (i = len_src; dest[i] != '\0'; i++)
        {
            dest[i] = '\0';
        }
        
    }
    */
    return(dest);
}
