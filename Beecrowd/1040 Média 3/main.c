#include <stdio.h>

int main() {

    double N1, N2, N3, N4, media, NotaExame, MediaExame;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    media = (2 * N1 + 3 * N2 + 4 * N3 + 1 * N4) / (2 + 3 + 4 + 1);

    if (media < 5.0) {
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }
    else if (media <= 6.9) {
        scanf("%lf", &NotaExame);
        printf("Media: %.1lf\n", media);
        printf("Aluno em exame.\n");
        MediaExame = (media + NotaExame) / 2;
        printf("Nota do exame: %.1lf\n", NotaExame);
        if (MediaExame < 5.0) {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", MediaExame);
        }
        else {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", MediaExame);
        }
    }
    else {
        printf("Media: %.1lf\n", media);
        printf("Aluno aprovado.\n");
    }

    return 0;
}