/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test123;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
class Account {
    
    int accountNumber;
    float amount;
    String add,name,contactNumber;
    Scanner obj =new Scanner(System.in);
    
    public void read()
    {
      
        System.out.print("Enter Account No= ");
        accountNumber = obj.nextInt();
        System.out.print("Enter Account Holder's Name= ");
        name=obj.nextLine();
       name+=obj.nextLine();
        System.out.print("Enter Address= ");
        add= obj.nextLine();
       add+= obj.nextLine();
        System.out.print("Enter Contact No= ");
        contactNumber= obj.next();
        System.out.print("Enter Amount= ");
        amount=obj.nextFloat();
        
        
    }
    
     public void print()
     {
        
        System.out.format("| %-10s | | %-20s | | %-20s | | %-10s | | %-10s |\n","Account No","Holder Name","Address","Contact No","Amount");   
        System.out.format("| %-10d | | %-20s | | %-20s | | %-10s | | %-10f |",accountNumber,name,add,contactNumber,amount);      

         /*System.out.println();
         System.out.println(accountNumber+name+add+contactNumber+amount);*/
         
     }
    public boolean deposit(int a)
    {
        amount+=a;
       
        return true;
        
        
    }
    
     public boolean withdraw(int a)
    {
       
        
        if(a>amount)
            return false;
        
        amount-=a;
        
        return true;
        
        
    }
    
    
}

class test123
{
    public static void main(String[] args) 
    {
        
     Scanner obj =new Scanner(System.in);
        
       Account obj1=new Account();
       int c,a;
        
        do
        {
            System.out.println("\n1.Read account info  2.Print account info  3.Deposit Amount  4.Withdraw Amount  5.Exit");

            System.out.print("Enter choice= ");
            c=obj.nextInt();
           
           switch(c)
           {
                case 1: obj1.read();
                        break;
                   
                case 2: obj1.print();
                        break;
                    
                case 3: System.out.println("Enter Amount to be deposited= ");
                        a=obj.nextInt();    
                        if(obj1.deposit(a))
                             System.out.println("Amount Successfully deposited !!");
                        break;
                    
                case 4:  System.out.println("Enter Amount to be withdraw= ");
                        a=obj.nextInt();
                        if(obj1.withdraw(a))
                            System.out.println("Amount Successfully withdraw!!");
                        else 
                            System.out.println("Not enough balance to withdraw!!");
                        break;
                    
                case 5: System.exit(0);
                    
                    
           }
        
        }while(c<=4);
    }
}
       
