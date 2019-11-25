// trim.h
// (c) Ian Bruntlett, October 2019 - November 2019
// Licenced under the ISC Licence (see ISC-LICENCE.txt)

// trim lefthand side text from a string, in situ. returns start address of string
extern char *ltrim(char s[]);

// trim lefthand side text from a string, into a user-provided buffer
extern void ltrimcpy(char *dest, char *src);


// trim righthand side text from a string, in situ. returns start address of string
extern char *rtrim(char text[]);

// trim righthand side text from a string, into a user-provided buffer
extern void rtrimcpy(char *dest, char *src);
