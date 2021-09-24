/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ragarry;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
public class RAGARRy {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner scan =new Scanner(System.in);
        int a[][]=new int[7][];
        for(int r=0;r<a.length;r++)
        {
            if(r<4)
                a[r]=new int[r+1];
            else
                a[r]=new int[7-r];
                
        }
        for(int r=0;r<a.length;r++)
            for(int j=0;j<a[r].length;j++)
            {
                a[r][j]=j+1;
            }
        for(int r=0;r<a.length;r++)
        {
            for(int j=0;j<a[r].length;j++)
                System.out.print(a[r][j]+" ");
        System.out.println();
        }
    }
    
}
/*
run:
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 
1 2 
1 
BUILD SUCCESSFUL (total time: 0 seconds)*/
