#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int first = 0, second = 1, next;
    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        if (i == 0)
            next = first;
        else if (i == 1)
            next = second;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
    return 0;
}
