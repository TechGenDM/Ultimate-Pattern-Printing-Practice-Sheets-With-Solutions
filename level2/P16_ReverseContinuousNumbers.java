package level2;

public class P16_ReverseContinuousNumbers {
    public static void main(String[] args) {
        int n = 4;

        for (int i = 1; i <= n; i++) {
            int number = i * (i + 1) / 2;
            int firstNumber = (i - 1) * i / 2 + 1;

            while (number >= firstNumber) {
                System.out.print(number--);
            }
            System.out.println();
        }
    }
}
