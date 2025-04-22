import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        float num1, num2, diferenca;

        System.out.println("Digite o primeiro valor: ");
        num1 = scanner.nextFloat();

        System.out.println("Digite o segundo valor: ");
        num2 = scanner.nextFloat();

        if(num1 > num2){
            diferenca = num1 - num2;
            System.out.println("diferença: " + diferenca);
            return;
        }
        if(num2 > num1){
            diferenca = num2 - num1;
            System.out.println("diferença: " + diferenca);
            return;
        }
    }
}