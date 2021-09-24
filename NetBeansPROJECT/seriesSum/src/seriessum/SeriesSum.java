/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package seriessum;

import java.util.Scanner;


public class SeriesSum {

    /**
     * @param args the command line arguments
     */
    static int sum(int n)
    {
        if(n==1)
            return n;
        else
            return n+sum(n-1);
    }
    public static void main(String[] args) {
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter the number : ");
        int n =obj.nextInt();
        int fact=sum(n);
        System.out.println(fact);
    }
    
}
/*
Enter the number : 
4
10
BUILD SUCCESSFUL (total time: 8 seconds)

*/
