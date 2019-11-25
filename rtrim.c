// rtrim.c
// (c) Ian Bruntlett, October 2019 - November 2019
//, Licenced under the ISC Licence (see ISC-LICENCE.txt)

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "trim.h"

#define TEST_MAX (100)

char *rtrim(char text[])
{
  int length = strlen(text);
  if (!length)
    return text;

  for (int rhs = length-1;
       isspace(text[rhs]);
       --rhs
       )
    text[rhs] = '\0';
  return text;     
}

void rtrimcpy(char *dest, char *src)
{
  strcpy(dest,src);
  rtrim(dest);
}
