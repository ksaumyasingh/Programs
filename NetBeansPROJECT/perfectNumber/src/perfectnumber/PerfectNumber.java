/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package perfectnumber;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
public class PerfectNumber {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here'
        int s = isPerfect();
    }

    private static int isPerfect() {
        int n, r, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");

        n = sc.nextInt();

        for (int i = 1; i < n; i++) {
            r = n % i;
            if (r == 0) {
                sum = sum + i;
            }
        }
        if (n == sum) {
            System.out.println(n + " is a perfect number");
        } else {
            System.out.println(n + " is not a perfect number");
        }
        return sum;
    }
   }

    

