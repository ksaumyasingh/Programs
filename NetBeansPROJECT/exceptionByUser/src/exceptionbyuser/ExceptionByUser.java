/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exceptionbyuser;

import java.util.Scanner;

class InvalidPincodeException extends RuntimeException{
    InvalidPincodeException()
    {
        super();
    }
    InvalidPincodeException(String message)
    {
        super(message);
    }
}
public class ExceptionByUser {

    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner scan= new Scanner(System.in);
        try{
            System.out.println("Enter your pincode");
            long pincode=Long.parseLong(scan.next());
            if(pincode<100000||pincode>1000000)
                throw new InvalidPincodeException("Wrong input of pincode");
        }
        catch(NumberFormatException e){
            System.out.println(e.getMessage());
        }
    }
    
}
/*
run:
Enter your pincode
821
Exception in thread "main" exceptionbyuser.InvalidPincodeException: Wrong input of pincode
	at exceptionbyuser.ExceptionByUser.main(ExceptionByUser.java:30)
Java Result: 1
BUILD SUCCESSFUL (total time: 4 seconds)

*/