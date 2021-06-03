//
// Created by mc on 21-6-3.
//

#if 0

#include <stdio.h>
#include <string.h>

/* functions */
int strend(char *, char *);

/* strend: returns 1 if t occurs at the end of s, and zero otherwise */
int strend(char *s, char *t) {
    size_t sLength = strlen(s);
    size_t tLength = strlen(t);
    size_t length = strlen(s) - strlen(t);
    s += length; /* advance the pointer */

    char flagS = *s;
    char flagT = *t;
    while (*s && *t) {
        char pS = *s++;
        char pT = *t++;
        printf("pS %c  pT %c \n", pS, pT);
        if (pS != pT) {
            return 0;;
        }
    }
    return 1;
}

int main(void) {
    char string1[] = {"this is a string"};
    char string2[] = {"string"};

    printf("%i\n", strend(string1, string2));

    return 0;
}

#endif