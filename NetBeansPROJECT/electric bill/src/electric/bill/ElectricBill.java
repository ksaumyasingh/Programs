/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package electric.bill;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
public class ElectricBill {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter the unit used : ");
        int unit =obj.nextInt();
        int cost=0;
        if(unit<=200)
            cost=150;
        else if(unit>200&&unit<=500)
            cost=150+(unit-200)*4;
        else if(unit>500&&unit<=1000)
            cost=150+300*4+(unit-500)*6;
        else if(unit>1000)
            cost=150+300*4+500*6+(unit-1000)*8;
        
        System.out.println("the electric bill is :"+cost);
            
            
    }
    
    
}

/*run:
Enter the unit used : 
510
the electric bill is :1410
BUILD SUCCESSFUL (total time: 4 seconds)*/

