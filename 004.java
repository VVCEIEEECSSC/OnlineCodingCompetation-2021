import java.util.Scanner;
public class Matrix {
    private static Scanner sc;
    public static int[] main (String[] args) {
        int i, j, m=8, k=2;
        sc = new Scanner(System.in);

        int[][] arr1 = new int[m][m];
        System.out.println("\n Enter the array matrix elements");
        for(i=0; i<m; i++) {
            for(j=0; j<m; j++) {
                arr1[i][j] = sc.nextInt();
            }
        }


        int[] temp;
        for (i = 0; i<m; i++)
        {
            for (j = i + 1; j<m; j++)
            {
                if (arr1[i] > arr1[j])
                {
                    temp = arr1[i];
                    arr1[i] = arr1[j];
                    arr1[j] = temp;
                }
            }
        }
        return arr1[0];
    }
}
