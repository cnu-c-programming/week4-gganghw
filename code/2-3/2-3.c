#include <stdio.h>
#include <string.h>
int main() {
    char a[64] = "Hello";
    char b[64] = "world";
    char c[128];

    int len = strlen(a);
    printf("length of a: %d\n", len);

    strcpy(c, a);
    printf("a: %s, c: %s\n", a, c);

    strcpy(c, b);
    printf("c: %s\n", c);
    
    printf("strcmp(%s, %s) = %d\n", a, a, strcmp(a, a));
    int result = strcmp(a, b);
    if(result < 0){
        result = -1;
    }else if(result > 0){
        result = 1;
    }
    printf("strcmp(%s, %s) = %d\n", a, b, result);

    return 0;
}