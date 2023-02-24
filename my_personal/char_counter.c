#ifndef _SOYOYE_
#define _SOYOYE_

#include <stdio.h>


#endif


/**
  * char_counter - counts the # of characters to be written to a file
  * @j: the index of the string to be written
  * @b: array of strings
  *
  * Return: returns the number of characters in the string at index j
  */


int char_counter(int j, char **b)
{
        char *str;

        int i = 0;

        str = b[j];
        while (str[i])
        {
                i++;
        }
        return (i);
}
