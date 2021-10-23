/* Code for printing Square Pattern of numbers from 1 to n

For input n = 5

Output:

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

import java.util.*;

public class Main
{
    public static void main(String[] args) {
        squarePattern(4); // For n = 4
    }
    
    public static void squarePattern(int n){
        int length = 2 * n - 1; // length of the side of the square
        int min1, min2, min;
        
        // for rows
        for(int row = 1; row <= length; row++){
            // for columns
            for(int col = 1; col <= length; col++){
                // minimum difference between vertical sides
                min1 = row <= length - row ? row - 1 : length - row;
                // minimum difference between horizontal sides
                min2 = col <= length - col ? col - 1 : length - col;
                // minimum difference between vertical and horizontal sides
                min = min1 <= min2 ? min1 : min2;
                
                System.out.print(n - min + " "); // for printing numbers 
            }
            System.out.println();
        } 
    }
}


