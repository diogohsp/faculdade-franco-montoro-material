import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[] arr = new int[4];

        for (int index = 0; index < arr.length; index++ ){
            System.out.println("Digite o numero " + (index+1) + ":");
            arr[index] = scanner.nextInt();
        }

        for (int i : arr) {
            if (i % 3 == 0 | i % 2 == 0) {
                System.out.println(i);
            }
        }

    }
}