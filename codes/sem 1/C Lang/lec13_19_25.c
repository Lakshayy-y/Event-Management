#include <stdio.h>

int main() {
    int m = 3;
    for (int i=0;i<=m; i++){
        int current_digit;

        if (i % 2 != 0) { 
            current_digit = 0;
        } else { 
            current_digit = 1;
        }

        for (int j = 0; j <= i + 1; j++) { 
            printf("%d ", current_digit);
            current_digit = 1 - current_digit;
        }
        printf("\n"); 
    }
    
}
   