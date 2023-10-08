#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - check the code
 *@b: int
 * Return: ptr(pointer to heap).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i , j , l, k = 0;
    char *s;


    while (s1 && s1[i])
    {
        i++;
    }
    while (s2 && s2[k])
    {
        k++;
    }
    if (n < k)
    {
        s = malloc(sizeof(char) * (i + n + 1));
    }
    else
    {
        s = malloc(sizeof(char) * (i + k + 1));
    }
    if (!s)
        return (NULL);

    while (l < i)
    {
        s[l] = s1[l];
        l++;
    }
    while (n < k && l < i + n)
    {
        s[l] = s2[j];
        j++;
        l++;
    }
    while (n >= k && l < i + k)
    {
        s[l] = s2[j];
        j++;
        l++;
    }
    s[l] = '\0';    
    
    return (s);
}
