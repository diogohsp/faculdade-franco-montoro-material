import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
       Scanner scanner = new Scanner(System.in);
       float nota1,nota2,nota3,nota4,somaNotas, media;

        System.out.println("digite a nota 1: ");
        nota1 = scanner.nextFloat();

        System.out.println("digite a nota 2: ");
        nota2 = scanner.nextFloat();

        System.out.println("digite a nota 3: ");
        nota3 = scanner.nextFloat();

        System.out.println("digite a nota 4: ");
        nota4 = scanner.nextFloat();

        somaNotas = nota1 + nota2 + nota3 + nota4;

        if (somaNotas/4 < 5){
            System.out.println("Reprovado");
            return;
        }

        System.out.println("Aprovado");
    }
}