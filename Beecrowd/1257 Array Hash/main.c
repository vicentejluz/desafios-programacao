#include <stdio.h>
#include <ctype.h>

int main()
{
    int n, l, soma, pA, elem, pE;
    char str[51];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &l);
        pA = 0;
        elem = 0;
        pE = 0;
        for (int i = 0; i < l; i++)
        {
            scanf("%s", str);

            for (int j = 0; str[j] != '\0'; j++)
            {
                str[j] = toupper(str[j]);
                pA += str[j] - 65;
                elem += i;
                pE += j;
            }

            soma = pA + elem + pE;
        }
        printf("%d\n", soma);
    }

    return 0;
}