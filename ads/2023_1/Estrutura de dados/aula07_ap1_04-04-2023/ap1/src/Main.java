import java.util.Random;

public class Main {
  public static void main(String[] args) {
    int imageSize = 100; // Tamanho mínimo da imagem
    int[][] image = generateImage(imageSize, imageSize); // Gera uma imagem aleatória

    int[][] pattern = {{0, 1, 0}, {1, 1, 1}, {0, 1, 0}}; // Padrão a ser encontrado

    System.out.println("Padrão a ser encontrado:");
    printMatrix(pattern); // Imprime o padrão

    System.out.println("\n\nGabarito da matriz:");
    printMatrix(image); // Imprime o gabarito da matriz

    long startTime = System.currentTimeMillis(); // Inicia o cronômetro
    int occurrences = findPatternOccurrences(image, pattern); // Encontra as ocorrências do padrão na imagem
    long endTime = System.currentTimeMillis(); // Para o cronômetro

    System.out.println("\n\nPadrão encontrado " + occurrences + " vezes.");
    System.out.println("Tempo gasto: " + (endTime - startTime) + " ms");
  }

  // Função para gerar uma imagem aleatória
  public static int[][] generateImage(int rows, int cols) {
    int[][] image = new int[rows][cols];
    Random random = new Random();
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        image[i][j] = random.nextInt(2); // Gera um valor aleatório entre 0 e 1
      }
    }
    return image;
  }

  // Função para encontrar as ocorrências de um padrão em uma imagem
  public static int findPatternOccurrences(int[][] image, int[][] pattern) {
    int occurrences = 0;
    int rows = image.length;
    int cols = image[0].length;
    int patternRows = pattern.length;
    int patternCols = pattern[0].length;

    for (int i = 0; i <= rows - patternRows; i++) {
      for (int j = 0; j <= cols - patternCols; j++) {
        boolean match = true;
        for (int k = 0; k < patternRows; k++) {
          for (int l = 0; l < patternCols; l++) {
            if (image[i + k][j + l] != pattern[k][l]) {
              match = false;
              break;
            }
          }
          if (!match) {
            break;
          }
        }
        if (match) {
          occurrences++;
        }
      }
    }
    return occurrences;
  }

  // Função para imprimir uma matriz
  public static void printMatrix(int[][] matrix) {
    int rows = matrix.length;
    int cols = matrix[0].length;

    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        System.out.print(matrix[i][j] + " ");
      }
      System.out.println();
    }
  }
}