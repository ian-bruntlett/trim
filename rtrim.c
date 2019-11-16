// rtrim.c
// (c) Ian Bruntlett, October 2019

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "trim.h"

#define TEST_MAX (100)

void rtrim(char text[])
{
  int length = strlen(text);
  if (!length)
    return;

  for (int rhs = length-1;
       isspace(text[rhs]);
       --rhs
       )
    text[rhs] = '\0';
       
}

void rtrimcpy(char *dest, char *src)
{
  strcpy(dest,src);
  rtrim(dest);
}
