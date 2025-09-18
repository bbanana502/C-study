#include <stdio.h>

int main(void) {
    int sugar;
    scanf("%d", &sugar);

    int bag = -1;

    for (int five = sugar / 5; five >= 0; five--) {
        int remain = sugar - (five * 5);
        if (remain % 3 == 0) {
            int three = remain / 3;
            bag = five + three;
            break;
        }
    }

    printf("%d\n", bag);
    return 0;
}
