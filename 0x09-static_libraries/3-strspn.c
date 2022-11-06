#include "main.h"
  2 /**
  3  * _strspn - gets the length of a prefix substring
  4  *
  5  * @s: segment to return bytes from
  6  * @accept: the bytes to include
  7  *
  8  * Return: the number of bytes in the initial segment of @s which consist     only
  9  * of bytes from @accept
 10  */
 11
 12 unsigned int _strspn(char *s, char *accept)
 13 {
 14         int i, j;
 15         int c = 0;
 16
 17         for (i = 0; s[i] != '\0'; i++)
 18         {
 19                 if (s[i] != 32)
 20                 {
 21                         for (j = 0; accept[j] != '\0'; j++)
 22                         {
 23                                 if (s[i] == accept[j])
 24                                         c++;
 25                         }
 26                 }
 27                 else
 28                         return (c);
 29
