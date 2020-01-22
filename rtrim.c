// rtrim.c
// (c) Ian Bruntlett, October 2019 - November 2019
//, Licenced under the ISC Licence (see ISC-LICENCE.txt)

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "trim.h"

static size_t get_rhs(char *s) {
  size_t rhs;
  for (rhs = strlen(s);
       rhs && isspace(s[rhs-1]);
       --rhs
       );
  return rhs;
}

char *rtrim(char text[])
{
  text[get_rhs(text)] = '\0';
  return text;     
}

void rtrimcpy(char *dest, char *src)
{
  size_t n = get_rhs(src);
  strncpy(dest,src,n);
  dest[n] = '\0';
}
