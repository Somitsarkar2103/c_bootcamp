#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    int x = 0;
    char s[5];
 
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        scanf("%s", s);
 
        if (strstr(s, "++") != NULL)
            x++;
        else
            x--;
    }
 
    printf("%d\n", x);
 
    return 0;
}