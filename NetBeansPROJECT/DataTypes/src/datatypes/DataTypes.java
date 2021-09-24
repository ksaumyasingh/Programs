/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package datatypes;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
public class DataTypes {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        /*int a=2147483647;
        int c=a+3;
        System.out.println("gdg="+c);*/
        Scanner obj=new Scanner(System.in);
        System.out.println("enter sales : ");
        int sales=obj.nextInt();
        float commission;
        if(sales>50000)
        {
            commission=(float)(15/100)*sales;
            System.out.println(commission);
        }
        else if(sales>20000)
                commission=(float)(1/100)*sales;
        else if(sales>10000)
                    commission=(float)(5/100)*sales;
               else
                     commission=0;
        System.out.println("commission = "+commission+sales);
            
    }
    
}
