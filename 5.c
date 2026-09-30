#include <stdio.h>
 
int main() {
    int n, k;
    int a[50];
    int count = 0;
 
    // Read n and k
    scanf("%d %d", &n, &k);
 
    // Read scores
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
 
    // Check who qualifies
    for (int i = 0; i < n; i++) {
        if (a[i] >= a[k - 1] && a[i] > 0) {
            count++;
        }
    }
 
    // Print answer
    printf("%d\n", count);
 
    return 0;
}