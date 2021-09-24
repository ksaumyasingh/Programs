/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dowhile;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
public class DoWHILE {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter the no : ");
        int num=obj.nextInt();
        int i=1;
        do
        {
            System.out.println(num*i);
            i++;
        }while(i<=10);
    }
    
}

run:
Enter the no : 
2
2
4
6
8
10
12
14
16
18
20
BUILD SUCCESSFUL (total time: 2 seconds)

