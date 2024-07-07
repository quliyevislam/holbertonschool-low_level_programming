#include <string.h>
#include "main.h"

int is_pal(char *s, int i, int j) {

    if (i >= j) {
        return 1;
    }
    if (s[i] != s[j]) {
        return 0;
    }
    
    return is_pal(s, i + 1, j - 1);
}

int is_palindrome(char *s) {
    int len = strlen(s);
    return is_pal(s, 0, len - 1);
}
