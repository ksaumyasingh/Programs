/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package compundinterest;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
public class CompundInterest {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner obj=new Scanner(System.in);
        System.out.println("enter the initial principal value");
        int Principal=obj.nextInt();
        System.out.println("enter interest rate");
        int Rate=obj.nextInt();
        System.out.println("enter the time period");
        int Time=obj.nextInt();
        System.out.println("enter the no. of times interest applied per time period");
        int n=obj.nextInt();
        float CI=(float) (Principal*(Math.pow((1+(Rate/n)),Time*n))-Principal);
        System.out.println("Compound Interest :"+CI);
        
    }
    
}
