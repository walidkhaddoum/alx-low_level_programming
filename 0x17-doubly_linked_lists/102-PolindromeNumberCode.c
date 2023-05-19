#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int n) {
    int reversed = 0, temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }
    return n == reversed;
}

int main() {
    int max = -1;
    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            int p = i * j;
            if (is_palindrome(p) && p > max) {
                max = p;
            }
        }
    }

    FILE *f = fopen("102-result", "w");
    if (f == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(f, "%d", max);
    fclose(f);

    return 0;
}

