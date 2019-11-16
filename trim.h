// trim.h

// trim lefthand side text from a string, in situ
extern void ltrim(char s[]);

// trim lefthand side text from a string, into a user-provided buffer
extern void ltrimcpy(char *dest, char *src);


// trim righthand side text from a string, in situ
extern void rtrim(char text[]);

// trim righthand side text from a string, into a user-provided buffer
extern void rtrimcpy(char *dest, char *src);
