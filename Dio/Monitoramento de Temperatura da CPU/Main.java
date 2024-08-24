/*
 * Desafio
 *  Você está desenvolvendo um programa que simula uma API para monitorar a temperatura de uma CPU. O
 *  programa deve receber uma lista de leituras de temperatura e retornar a maior temperatura
 *  registrada. Cada leitura de temperatura é um número inteiro representando graus Celsius. Compare
 *  cada temperatura convertida com a maior temperatura encontrada até o momento e atualize a maior
 *  temperatura se a atual for maior. Após processar todas as leituras, retorne uma string formatada que
 *  exiba a maior temperatura encontrada no formato "Maior temperatura: X°C", onde X é o valor da maior
 *  temperatura. Certifique-se de que a string de saída esteja corretamente formatada e inclua o valor
 *  correto.
 *
 *  Entrada
 *      Leituras de temperatura: Uma string contendo leituras de temperatura separadas por vírgulas. A
 *      string pode conter espaços extras ao redor das leituras.
 *
 *  Saída
 *      Retorna uma string no formato "Maior temperatura: X°C", onde X é a maior temperatura registrada.
 *  
 *  Exemplo 1
 *  |      Entrada       |         Saída          |
 *  | 45, 50, 47, 52, 48 | Maior temperatura: 52C |
 *   ---------------------------------------------
 * 
 *  Exemplo 2
 *  |    Entrada     |         Saída          |
 *  | 35, 42, 40, 39 | Maior temperatura: 42C |
 *   -----------------------------------------
 * 
 *  Exemplo 3
 *  |        Entrada         |         Saída           |
 *  | 38, 40, 36, 37, 39, 41 | Maior temperatura: 41C |
 *   --------------------------------------------------
*/

import java.util.Scanner;

public class Main {
    public static String findHighestTemperature(String input) {
        String[] readings = input.split(",");
        int maxTemperature = Integer.MIN_VALUE;

        for (String reading : readings) {
            int temperature = Integer.parseInt(reading.trim());
            // TODO: Comparar a temperatura convertida com maxTemperature e atualizar
            // maxTemperature se a leitura atual for maior.
            if (temperature > maxTemperature)
                maxTemperature = temperature;
        }

        // TODO: Retorne a maior temperatura:
        return "Maior temperatura: " + String.valueOf(maxTemperature) + "C";

    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String input = scanner.nextLine();
        String output = findHighestTemperature(input);
        System.out.println(output);

        scanner.close();
    }
}