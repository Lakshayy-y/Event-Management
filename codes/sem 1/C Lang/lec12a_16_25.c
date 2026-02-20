#include <stdio.h>

int main() {
    int n = 4; //max stars in middle

    for (int i = 1;i<=2 * n-1; i++) {
        int stars, spaces;

        if (i<= n) {
            stars= i;
            spaces= n - i;
        } else {
            stars= 2 * n - i;
            spaces= i - n;
        }
        for (int j=1;j<=spaces;j++) {
            printf(" ");
        }
        for (int j=1; j <= stars;j++) {
            printf("*");
        }
        printf("\n");
    }
}
