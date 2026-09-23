package level3;

public class P27_AlphabetPyramid {
    public static void main(String[] args) {
        int n = 5;

        for(int i = 1; i <= n; i++){
            for(int s = 1; s <= n - i; s++){
                System.out.print(" ");
            }

            char ch = 'A';
            for(int j = 1; j <= 2 * i - 1; j++){
                System.out.print(ch++);
            }

            System.out.println();
        }
    }
}
