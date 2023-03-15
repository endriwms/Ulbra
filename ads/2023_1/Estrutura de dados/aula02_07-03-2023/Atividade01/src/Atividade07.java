package src;

import java.util.Arrays;


    public class Atividade07 {
        /*  Escreva	uma classe Estatística em Java que faça a leitura de uma Matriz 5x5, a classe deve ao final mostrar:
        A moda	dos	elementos	no	array	(elemento	mais	freqüente).
        A mediana	dos	elementos	no	array	(elemento	central).
        A média.
        */


        public static void main(String[] args) {
            int[][] matriz = new int[5][5];
            // Preenchendo a matriz com valores aleatórios
            for (int i = 0; i < matriz.length; i++) {
                for (int j = 0; j < matriz[i].length; j++) {
                    matriz[i][j] = (int) (Math.random() * 10);
                }
            }

            // Exibindo a matriz
            System.out.println("Matriz:");
            for (int i = 0; i < matriz.length; i++) {
                System.out.println(Arrays.toString(matriz[i]));
            }

            // Calculando a moda
            int moda = moda(matriz);
            System.out.println("Moda: " + moda);
            // Calculando a mediana
            int mediana = mediana(matriz);
            System.out.println("Mediana: " + mediana);
            // Calculando a média
            double media = media(matriz);
            System.out.println("Média: " + media);
        }

        public static int moda(int[][] matriz) {
            int[] valores = new int[matriz.length * matriz[0].length];
            int indice = 0;
            for (int i = 0; i < matriz.length; i++) {
                for (int j = 0; j < matriz[i].length; j++) {
                    valores[indice] = matriz[i][j];
                    indice++;
                }
            }

            Arrays.sort(valores);
            int moda = valores[0];
            int frequenciaModa = 1;
            int frequenciaAtual = 1;
            for (int i = 1; i < valores.length; i++) {
                if (valores[i] == valores[i - 1]) {
                    frequenciaAtual++;
                } else {
                    if (frequenciaAtual > frequenciaModa) {
                        frequenciaModa = frequenciaAtual;
                        moda = valores[i - 1];
                    }
                    frequenciaAtual = 1;
                }
            }

            if (frequenciaAtual > frequenciaModa) {
                moda = valores[valores.length - 1];
            }
            return moda;
        }

        public static int mediana(int[][] matriz) {
            int[] valores = new int[matriz.length * matriz[0].length];
            int indice = 0;
            for (int i = 0; i < matriz.length; i++) {
                for (int j = 0; j < matriz[i].length; j++) {
                    valores[indice] = matriz[i][j];
                    indice++;
                }
            }

            Arrays.sort(valores);
            int mediana;
            if (valores.length % 2 == 0) {
                int indice1 = valores.length / 2 - 1;
                int indice2 = valores.length / 2;
                mediana = (valores[indice1] + valores[indice2]) / 2;
            } else {
                indice = valores.length / 2;
                mediana = valores[indice];
            }
            return mediana;
        }

        public static double media(int[][] matriz) {
            int soma = 0;
            for (int i = 0; i < matriz.length; i++) {
                for (int j = 0; j < matriz[i].length; j++) {
                    soma += matriz[i][j];
                }
            }

            double media = soma / (double) (matriz.length * matriz[0].length);
            return media;
        }
    }