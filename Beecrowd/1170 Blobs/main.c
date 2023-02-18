#include <stdio.h>

int main() {
  int N, i, cont = 0;
  double C, div;

  scanf("%d", &N);

  for (i = 0; i < N; i++) {
    scanf("%lf", &C);
    div = C / 2;
    if (div >= 1)
      cont = 1;
    while (div > 1) {
      div /= 2;
      cont++;
    }
    printf("%d dias\n", cont);
  }

  return 0;
}