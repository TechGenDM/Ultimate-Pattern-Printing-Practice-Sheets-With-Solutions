package level2;

public class P20_CharacterStaircase {
    public static void main(String[] args) {
        int n = 5;
        char character = 'A';

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++){
                System.out.print(character++);
            }
            System.out.println();
        }
    }
}
