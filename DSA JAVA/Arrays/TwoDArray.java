
public class TwoDArray {
    public static void main(String[] args) {
        int[][] Arr = new int[3][3];  //Initializing 2D array
        int[][] Arr2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int i=0;i<Arr2.length;i++){     //Printing 2D Array
        for(int j=0;j<Arr2[i].length;j++){
            System.out.print(Arr2[i][j] + " ");
        }
        System.out.println(" ");
    }

    }
    
}
