/* Code for printing Hollow Diamond pattern 

For n = 4

Output:

********
***  ***
**    **
*      *
*      *
**    **
***  ***
********

Solution: 
1. First we divide the pattern horizontally into 2 halves.
2. The 1st for loop prints all the pattern in the 1st half
3. The 2nd for loop prints all the pattern in the 2nd half
*/

public import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        hollowDiamond(4); // For n = 4
    }
    
    public static void hollowDiamond(int n){
        // Print i number of stars
        // 1st for loop
        for (int i=1; i<=n; i++) 
        {
            for (int j = i; j <= n; j++)
            {
                System.out.print("*");
            }
            for (int k = 1; k <= i*2-2; k++) // this loop is used to provide spaces
            {
                System.out.print(" ");
            }
            for (int l = i; l <= n; l++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
        
        // 2nd for loop
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                System.out.print("*");
            }
            for (int k = i*2-2; k < n*2-2; k++) // this loop is used to provide spaces
            {
                System.out.print(" ");
            }
            for (int l = 1; l <= i; l++)
            {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

