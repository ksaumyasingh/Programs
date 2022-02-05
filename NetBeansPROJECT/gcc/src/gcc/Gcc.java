/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package gcc;
import java.io.*;
import java.util.*;

public class Gcc {
static int securitiesBuying(int z, ArrayList<Integer> security_value)
    {
        int no_of_stocks=0;
        TreeMap<Integer,Integer> m=new TreeMap<>();
        int n=security_value.size();
        for(int i=0;i<n;i++)
        {
		m.put(security_value.get(i),(i+1));
        }

	int sum=0;
        for (int key : m.keySet()) {
            System.out.print(key+" "+m.get(key));
            int p=sum+(m.get(key)*key);
            if(p<=z)
            {
                sum=p;
                no_of_stocks+=m.get(key);
            }
            else
            {
                for(int j=0;j<m.get(key);j++)
                {
                    sum+=key;
                    if(sum<=z)
                        no_of_stocks++;
                    else
                        break;
                }
                break;
            }
            if(sum==z)
                break;
        }


        return no_of_stocks;
    }
 
    
    public static void main(String[] args)throws IOException {
        Scanner scanner = new Scanner(System.in);
        int z = scanner.nextInt();
        scanner.nextLine();
        String str = scanner.nextLine();
        String[] price_str =str.split(" ");  
        ArrayList<Integer> security_value =new ArrayList<Integer>();
        for (String s: price_str){security_value.add(Integer.parseInt(s));}
        int no_of_stocks_purchased = securitiesBuying(z,security_value);
        System.out.println(no_of_stocks_purchased);
    }
    
}




/*class Solution {

    

    public static void main(String[] args)  {
        

        
    }
}
*/