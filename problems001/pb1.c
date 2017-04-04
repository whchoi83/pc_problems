#include <stdio.h>

int main() {
    int i, j;
    int lbound, mbound, swp;
    int loop;
    int n;
    int count, max_count;

    while (scanf("%d %d", &i, &j) != EOF) {
        lbound = i;
        mbound = j;
        if (lbound > mbound) {
            swp = lbound;
            lbound = mbound;
            mbound = swp;
        }

        max_count = 0;
        for (loop = lbound; loop <= mbound; loop++) {
            n = loop;
            count = 1;
            while (n > 1) {
                if (n % 2 == 0) {
                    n = n / 2;
                } else {
                    n = 3 * n + 1;
                }
                count++;
            }
            if (max_count <= count)
                max_count = count;
        }
        printf("%d %d %d\n", i, j, max_count);
    }

    return 0;
}
