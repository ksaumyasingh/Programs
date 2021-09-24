/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sumofdigits;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
public class SumOfDigits {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter the num : ");
        int num =obj.nextInt();
        int sum=0;
        int n;
        for(n=num;n!=0;n=n/10)
        {
            int q=n%10;
            sum=sum+q;
        } 
        System.out.println("sum of digits of no. is :"+sum);
    }
    
}

run:
Enter the num : 
12345
sum of digits of no. is :15
BUILD SUCCESSFUL (total time: 4 seconds)
