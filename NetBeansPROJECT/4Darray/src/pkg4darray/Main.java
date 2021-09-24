/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkg4darray;

/**
 *
 * @author ksaum
 */
public class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
           int a[][][][]=
           {
            {
               {
                   {1,2,3},
                   {4,5,6},
                   {7,8,9}
               },
               {
                   {3,2,1},
                   {6,5,4}
               }
            },
            {
                {
                   {7,6,5},
                    {9,8,7},
                    {1,2,4}
                        
                },
                {
                    {7,6,5},
                    {9,8,7}
                }
            }
          };
            for(int i=0;i<a.length;i++){
                System.out.println("block"+i);
                for(int j=0;j<a[i].length;j++)
                {
                    System.out.println("matrix"+j);
                    for(int k=0;k<a[i][j].length;k++)
                    {
                        for(int l=0;l<a[i][j][k].length;l++)
                            System.out.print(a[i][j][k][l]+" ");
                        System.out.println();
                    }
                    System.out.println();
                }
                System.out.println();
            }
    }
    
}
/*run:
block0
matrix0
1 2 3 
4 5 6 
7 8 9 

matrix1
3 2 1 
6 5 4 


block1
matrix0
7 6 5 
9 8 7 
1 2 4 

matrix1
7 6 5 
9 8 7 


BUILD SUCCESSFUL (total time: 0 seconds)
*/