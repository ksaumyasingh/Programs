/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pattern;


/**
 *
 * @author ksaum
 */
public class PATTERN {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        int num=1;
        for(int i=1;i<=5;i++)
        {
            ;
            if(i==1||i==4||i==5) 
                for(int j=1;j<=i;j++)
                {
                    if(j%2!=0) 
                        System.out.print(0+" ");
                    else
                        System.out.print(1+" ");    
                }
            else
                for(int j=1;j<=i;j++)
                {
                    if(j%2!=0) 
                        System.out.print(1+" ");
                    else
                        System.out.print(0+" ");    
                }
            System.out.print("\n");
        }
        
    }
    
}
run:
0 
1 0 
1 0 1 
0 1 0 1 
0 1 0 1 0 
BUILD SUCCESSFUL (total time: 0 seconds)

