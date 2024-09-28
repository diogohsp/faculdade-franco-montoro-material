import java.sql.Array;
import java.util.Scanner;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num1, num2, num3;
        int[] arr = new int[3];

        System.out.println("Digite o primeiro numero: ");
        num1 = scanner.nextInt();
        arr[0] = num1;

        System.out.println("Digite o segundo numero: ");
        num2 = scanner.nextInt();
        arr[1] = num2;

        System.out.println("Digite o terceiro numero: ");
        num3 = scanner.nextInt();
        arr[2] = num3;

        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = 0; j < arr.length - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        System.out.println("Números ordenados:");
        for(int i = 0; i < arr.length; i++) {
            System.out.println(arr[i]);
        }
    }
}
