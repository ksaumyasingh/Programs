/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package methods;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
public class Methods {

    /**
     * @param args the command line arguments
     */
    static int factorial(int n)
    {
        int fac=1;
        for(int r=n;r>1;r--)
        {
            fac=fac*r;
          
        }
        return fac;
        
    }
    public static void main(String[] args) {
        Scanner obj=new Scanner(System.in);
        // TODO code application logic here
        System.out.println("Enter the number : ");
        int n =obj.nextInt();
        int fact=factorial(n);
        System.out.println(fact);
    }
   
}
Enter the number : 
4
24
BUILD SUCCESSFUL (total time: 6 seconds)

