int main(){
  int A, N, i, cont, soma = 0;
  
    scanf("%d", &A);
    
    do{
        scanf("%d", &N);
    }while(N <= 0);

    for(i = A, cont = 0; cont < N; i++){
        soma += i;
        cont++;
    }
    printf("%d\n", soma);

  return 0;
}