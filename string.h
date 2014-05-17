char *strcpy(char *s, const char *ct);
char *strncpy(char *s, const char *ct, size_t n);
char *strcat(char *s, const char *ct);
char *strncat(char *s, const char *ct, size_t n);
int strcmp(const char *cs, const char *ct);
int strncmp(const char *cs, const char *ct, size_t n);
char *strchr(const char *cs, int c);
char *strrchr(const char *cs, int c);
size_t strspn(const char *cs, const char *ct);
size_t strcspn(const char *cs, const char *ct);
char *strpbrk(const char *cs, const char *ct);
char *strstr(const char *cs, const char *ct);
size_t strlen(const char *cs);
char *strerror(int c);
char *strtok(char *s, const char *ct);

void *memcpy(char *s, const char *ct, size_t n);
void *memmove(char *s, const char *ct, size_t n);
int memcmp(const char *cs, const char *ct, size_t n);
void *memchr(const char *cs, int c, size_t n);
void *memset(char *s, int c, size_t n);
 
