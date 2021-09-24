/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package area;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
public class Area {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter the base : ");
        int base =obj.nextInt();
        System.out.println("Enter the height : ");
        int height =obj.nextInt();
        float Area=0.5f*base*height;
        System.out.println("the area of traingle is :"+Area);
    }
    
}
