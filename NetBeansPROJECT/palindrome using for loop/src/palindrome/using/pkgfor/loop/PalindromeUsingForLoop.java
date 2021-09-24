/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package palindrome.using.pkgfor.loop;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
public class PalindromeUsingForLoop {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter the num : ");
        int num =obj.nextInt();
        int sum=0;
        int n,a=0;
        for(n=num;n!=0;n=n/10)
            a++;
    
        for(n=num;n!=0;n=n/10)
        {
            int rem=n%10;
            int p=(int) Math.pow(10,a-1);
            sum=sum+rem*p;
            a--;
        } 
        System.out.println("reverse :"+sum);
        if(sum==num)
            System.out.println(" it is palindrome no.");
        else
            System.out.println(" it is not palindrome no.");   
    }
    
}

run:
Enter the num : 
353
reverse :353
 it is palindrome no.
BUILD SUCCESSFUL (total time: 5 seconds)
