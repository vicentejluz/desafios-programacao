#include <stdio.h>
 
int main() {
 
	int A, B, C, temp;
	
	scanf("%d %d %d", &A, &B, &C);
	
	if (A < B){
        temp = A;
        A = B;
        B = temp;
    }

    if (B < C){
        temp = B;
        B = C;
        C = temp;
    }

    if (A < B){
        temp = A;
        A = B;
        B = temp;
    }
    if(A + B > C && A + C > B && B + C > A){
        if(A == B && B == C)
            printf("Valido-Equilatero\n");
        else if(A == B || B == C)
            printf("Valido-Isoceles\n");
        else if(A != B && B != C && C != A)
            printf("Valido-Escaleno\n");
        
        if(A * A == B * B + C * C)
		    printf("Retangulo: S\n");
        else
            printf("Retangulo: N\n");
    }
    else
        printf("Invalido\n");

    return 0;
}