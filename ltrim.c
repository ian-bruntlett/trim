// ltrim.c
// (c) Ian Bruntlett, October 2019

#include <string.h>
#include <ctype.h>
#include "trim.h"

void ltrim(char s[])
{
  if ( !isspace(s[0]) )
    {return;}
    
  // Get index of first non-space
  int non_space_index=0;
  while ( isspace(s[non_space_index]) )
    { ++non_space_index; }
  // copy text characters over the white space
  int dest_index=0;
  while ( s[dest_index++] = s[non_space_index++] )
    ;
}

void ltrimcpy(char *dest, char *src)
{
  strcpy(dest, src);
  ltrim(dest);
}


