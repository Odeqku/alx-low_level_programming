#ifndef _SOYOYE_
#define _SOYOYE_

#include <stdio.h>

#endif

/**
  * words_counter - counnts the number of words written to the cl
  * @c: array of strings on the cl
  *
  * Return: the number of words/element of the array
  */


int words_counter(char **c)
{
        int i = 0;
        while (c[i])
        i++;

        return (i);
}
