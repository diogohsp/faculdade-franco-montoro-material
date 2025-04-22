import java.text.DecimalFormat;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double peso, altura, imc;
        String resposta;

        do {
                System.out.println("Informe o peso: ");
                peso = scanner.nextDouble();

                System.out.println("Informe sua altura: ");
                altura = scanner.nextDouble();

                imc = peso / Math.pow(altura, 2);

                DecimalFormat df = new DecimalFormat("#.00");
                System.out.print("IMC: " + df.format(imc) + " - ");

                if (imc < 18.5) {
                    System.out.println("Magreza");
                } else if (imc < 24.9) {
                    System.out.println("Normal");
                } else if (imc < 29.9) {
                    System.out.println("Sobrepeso grau 1");
                } else if (imc < 39.9) {
                    System.out.println("Obesidade grau 2");
                } else {
                    System.out.println("Obesidade grau 3");
                }

                System.out.println("Quer continuar? ");
                resposta = scanner.next();

        } while (resposta.equals("S") || resposta.equals("s"));

        scanner.close();
    }
}