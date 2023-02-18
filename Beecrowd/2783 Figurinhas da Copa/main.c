#include <stdio.h>

int main() {
    int n, c, m;

    scanf("%d %d %d", &n, &c, &m);

    int fc[c], fb[m];
    int cout = c;

    for (int i = 0; i < c; i++) {
        scanf("%d", &fc[i]);
    }

    for (int i = 0; i < m; i++) {
        scanf("%d", &fb[i]);
    }

    for (int i = 0; i < c; i++) {
        for (int j = 0; j < m; j++) {
            if (fb[j] == fc[i]) {
                cout--;
                break;
            }
        }
    }

    printf("%d\n", cout);


    return 0;
}
