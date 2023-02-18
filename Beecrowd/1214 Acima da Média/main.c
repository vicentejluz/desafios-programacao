#include <stdio.h>

int main(){
    int c, n, i, res, cout;
    double por, med;

    scanf("%d", &c);

    while(c--){
        scanf("%d", &n);
        
        por = 100;
        cout = 0;
        res = 0;
        int alu[n];

        for(i = 0; i < n; i++){
            scanf("%d", &alu[i]);            
            res += alu[i];
        }

        med = (double)res / n;

        for(i = 0; i < n; i++){
            if(alu[i] >  med){
                cout++;
            }
        }

        por *= ((double)cout / n); 
        
        printf("%.3lf%%\n", por);
    }

    return 0;
}