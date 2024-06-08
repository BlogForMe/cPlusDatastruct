//
// Created by mc on 21-4-26.
//




#include <cstdio>
#include <cmath>
#include <cstring>
#include <stdlib.h>

#if 0
int main() {

    printf("hello\n");

    double x = 3.14;
    printf("%lf %lf\n ", sqrt(x), sin(x));

    char s[10] = "d hello";
    puts(s);

    char s2[16];
    strcpy(s2, s);
    puts(s2);
    strcat(s2, "sdfsdf");
    puts(s2);

    printf("%d  %d \n", strlen(s), strlen(s2));
//#else
    char *s = (char *) (malloc(12 * sizeof(char)));
    strcpy(s,"hello world!\n");
    puts(s);
}


#endif