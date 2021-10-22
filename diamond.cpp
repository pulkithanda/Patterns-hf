//Code for DIAMOND star pattern
//You can add or change the printDiamond(int n) in the main so the size of the diamond changes too.

/*
Output for 5 will be:
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/

#include <bits/stdc++.h>

using namespace std;
 
// Prints diamond pattern with 2n rows
void printDiamond(int n)
{
    int space = n - 1;
 
    // run loop (parent loop)
    // till number of rows
    for (int i = 0; i < n; i++)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0;j < space; j++)
            cout << " ";
 
        // Print i+1 stars
        for (int j = 0; j <= i; j++)
            cout << "* ";
 
        cout << endl;
        space--;
    }
 
    // Repeat again in reverse order
    space = 0;
 
    // run loop (parent loop)
    // till number of rows
    for (int i = n; i > 0; i--)
    {
        // loop for initially space,
        // before star printing
        for (int j = 0; j < space; j++)
            cout << " ";
 
        // Print i stars
        for (int j = 0;j < i;j++)
            cout << "* ";
 
        cout << endl;
        space++;
    }
}
 
int main()
{
    printDiamond(5);
    return 0;
}
