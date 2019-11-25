// test_rtrim.c
// (c) Ian Bruntlett, October 2019 - November 2019
// Licenced under the ISC Licence (see ISC-LICENCE.txt)

#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "trim.h"

#define TEST_MAX (100)

void test_rtrimcpy(char *test_argument, char *expected_result)
{
  char test_result[TEST_MAX];
  assert(strlen(test_argument) < TEST_MAX);

  rtrimcpy(test_result, test_argument);

  int success = !strcmp(test_result, expected_result);  
  if ( success )
    { printf("OK :" );  }
  else
    { printf("Failed :" );  }
  printf("argument : '%s' result : '%s' : expected '%s'\n", test_argument, test_result, expected_result);
  assert(success);
}

int main(int argc, char *argv[])
{
  if ( argc==1 ) {
    test_rtrimcpy("Hello World", "Hello World");
    test_rtrimcpy("  Hello ", "  Hello");
    test_rtrimcpy("Hello ","Hello");
    test_rtrimcpy("","");
    test_rtrimcpy("      ","");
  }
  else if (argc==2)
  {
    printf("'%s' : ", argv[1]);
    printf("'%s'\n",  rtrim(argv[1]));
  }
  else if (argc==3)
    test_rtrimcpy(argv[1],argv[2]);
  else
     printf("%s incorrect arguments\n", argv[0] );
  
  return 0;
}
