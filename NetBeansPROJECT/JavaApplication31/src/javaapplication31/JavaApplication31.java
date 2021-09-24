/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication31;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
public class JavaApplication31 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        int arr[]={1,2,3,4};
        try{
            System.out.println("array is"+arr[6]);
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("error occured ,index is out of bound please check your code");
        }
        
        int a=5,b=0;
        try{
            int x=a/b;
            System.out.println("divide result: "+x);
        }catch(ArithmeticException e){
            System.out.println("error occured ,/ by 0 please check your code");
        }
        
        System.out.println("Important code run");        
    }
    
    
}
