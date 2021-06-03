//
// Created by mc on 21-6-2.
//

#if 0

#include <stdio.h>

int main() {

    char *pmessage = "now is the time";
//    printf("pmessage[0] %c \n ",pmessage[0]);
//    printf("pmessage[1] %c \n ",pmessage[1]);
//    printf("pmessage[2] %c \n ",pmessage[2]);


    char *g;
//    strcat(g,pmessage);

//    printf("%c \n", pmessage[0]);
//    printf("%c \n", *pmessage);
//    printf("%c", pmessage[1]);
//    printf("%c \n", pmessage[2]);


    strcat(g,pmessage);

    char m;
    while ((m = *g++) != '\0') {
        printf("%c", m);
    }

    return 0;
}

void strcat(char *s, char *t) {
    while ((*s++ = *t++)!='\0');
}

#endif


#if 0
/* strcat: concatenate t to end of s; s must be big enough */
void strcat(char s[], char t[])
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0') /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '\0') /* copy t */
        ;
}
#endif
