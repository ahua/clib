/* ctype.h standard header */
#ifndef _CTYPE
#define _CTYPE

#define _XA  0x200
#define _XS  0x100
#define _BB  0x80
#define _CN  0x40
#define _DI  0x20
#define _LO  0x10
#define _PU  0x08
#define _SP  0x04
#define _UP  0x02
#define _XD  0x01

int isalnum(int), isalpha(int), iscntrl(int), isdigit(int);
int isgraph(int), islower(int), isprint(int), ispunct(int);
int isspace(int), isupper(int), isxdigit(int);
int tolower(int), toupper(int);
