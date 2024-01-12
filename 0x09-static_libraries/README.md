# 0x09. C - Static libraries

## Resources

**Read or watch:**

* [What Is A “C” Library? What Is It Good For?]()
* [Creating A Static “C” Library Using “ar” and “ranlib”]()
* [Using A “C” Library In A Program]()
* [What is difference between Dynamic and Static library(Static and Dynamic linking) (stop at 4:44)]()

---

### Learning Objectives:

At the end of this project, i might be able to explain to anyone, without the help of Google:


* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm

---

### [0. A library is not a luxury but one of the necessities of life ](./libmy.a)
* Static library `libmy.a` containing all the functions listed below:

```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

### [1. Without libraries what have we? We have no past and no future](./create_static_lib.sh)
* Script called `create_static_lib.sh `that creates a static library called liball.a from all the .c files that are in the current directory.

---

## Author
* [Grácio Macuácua](http://github.com/graciomacuacua)