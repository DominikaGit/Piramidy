#include <stdio.h>
//Program ma tworzyc rozne wzory z cyfr

int main() {
    int i, j, k; //k- rzedy
    printf("Wpisz liczbe rzedow: \n");
    scanf("%d", &k);

    for (i = 1; i <= k; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
