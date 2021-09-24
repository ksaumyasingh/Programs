/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package AB;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
public class AB {

public static class Ab{
    int a,b;
    Ab(int a,int b)
    {
        this.a=a;
        this.b=b;
    }
    void sum()
    {
        System.out.println("super class sum: "+(a+b));
    }
    
}
public static class Abc extends Ab{
    int c;
    Abc(int a,int b,int c)
    {
        super(a,b);
        this.c=c;
    }
    @Override
    void sum()
    {
     System.out.println("subclass sum: "+(a+b+c));
    }
    
}
    public static void main(String[] args) {
       Scanner obj=new Scanner(System.in);
        Ab obj1=new Ab(2,2);
        Abc obj2=new Abc(1,2,3);
        Ab obj3=new Abc(2,2,3);
        
        obj1.sum();
        obj2.sum();
        obj3.sum();
        
    }
    
}
/*
run:
super class sum: 4
subclass sum: 6
subclass sum: 7
BUILD SUCCESSFUL (total time: 0 seconds)
*/