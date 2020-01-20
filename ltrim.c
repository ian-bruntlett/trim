// ltrim.c
// (c) Ian Bruntlett, October 2019 - November 2019
// Licenced under the ISC Licence (see ISC-LICENCE.txt)

#include <string.h>
#include <ctype.h>
#include "trim.h"

static char *first_non_isspace(char *s) {
  // Get index of first non-space
  size_t non_space_index=0;
  while ( isspace(s[non_space_index]) )
    { ++non_space_index; }
  return s + non_space_index;
}

char *ltrim(char s[])
{
  // copy text characters over the white space
  char *t = first_non_isspace(s);
  memmove(s, t, strlen(t)+1);
  return s;
}

void ltrimcpy(char *dest, char *src)
{
  strcpy(dest, first_non_isspace(src));
}
