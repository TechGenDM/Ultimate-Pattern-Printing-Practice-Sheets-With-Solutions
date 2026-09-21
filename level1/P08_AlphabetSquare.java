package level1;

public class P08_AlphabetSquare {
    public static void main(String[] args) {
        int n = 5;
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < n; j++){
                System.out.print((char) ('A' + j));
            }
            System.out.println();
        }
    }
}
