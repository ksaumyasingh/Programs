/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exception;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
public class Exception{

    
    public static void main(String[] args) {
        Scanner obj=new Scanner(System.in);
        int a[]={1,2,3,4,5};
        int y=obj.nextInt();
        int n=5,temp=0;
        for(int i=0;i<=n;i++)
        {
          
            while(temp==0)
            {
                    try{
                        temp=a[i]/y;
                        a[i]=temp;
                    }
                    catch(ArithmeticException e){
                        System.out.println("y value is zero.Can't perform divide operation");
                        System.out.println("Enter y");
                        int k=obj.nextInt();
                        y=k;
                    }
                    catch(ArrayIndexOutOfBoundsException p){
                        System.out.println("trying to access Array Index whose memory was not allocated");
                        n=4;
                    }
                
            }
        }
}
}
    

