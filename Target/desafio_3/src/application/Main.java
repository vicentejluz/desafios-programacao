/*
 * Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:
 * 
 * SP – R$67.836,43
 * RJ – R$36.678,66
 * MG – R$29.229,88
 * ES – R$27.165,48
 * Outros – R$19.849,53
 * 
 * Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada
 * estado teve dentro do valor total mensal da distribuidora.
*/

package application;

public class Main {
    public static void main(String[] args) {
        String state[] = new String[] {
                "SP",
                "RJ",
                "MG",
                "ES",
                "Outros"
        };
        double monthlyBillingState[] = new double[] {
                67836.43d,
                36678.66d,
                29229.88d,
                27165.48d,
                19849.53d
        };
        double totalBilling = 0;
        double percentage;

        for (int i = 0; i < state.length; i++) {
            totalBilling += monthlyBillingState[i];
        }

        System.out.println("Faturamento total: R$ " + totalBilling);
        System.out.println();

        for (int i = 0; i < state.length; i++) {
            percentage = (monthlyBillingState[i] / totalBilling) * 100;
            System.out.printf("Percentual de %s: %.2f%%\n", state[i], percentage);
        }
    }
}
