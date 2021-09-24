/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package shopping;

import java.util.Scanner;

/**
 *
 * @author ksaum
 */
interface Calculator{
    float add(float val);
    float sub(float val);
    float mty(float val);
    float div(float val);
 }
class Casio implements Calculator{
  float result;
  public Casio(){
          this.result=0;
  }
  public Casio(float result){
          this.result=result;
  }
  @Override
  public float add(float val){
      return result+=val;
  }
  @Override
  public float sub(float val){
      return result-=val;
  }
  @Override
  public float div(float val){
      if(val==0)
      {
          System.out.println("can,t divide by zero to number"); 
         return result;
      }
      
      return result/=val;
  }
  @Override
  public float mty(float val){
     return result*=val;
  }
  
}
public class Shopping {
    public static void main(String[] args) {
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter a number");
        float num=obj.nextFloat();
        Calculator c=new Casio(num);
        do{
            System.out.println("enter choice 1.+ 2.- 3.* 4./ 5.Exit");
            int choice=obj.nextInt();
            switch(choice){
                case 1: System.out.println("enter number to be added");
                        float a=obj.nextFloat();
                        System.out.println("result : "+c.add(a));
                        break;
                case 2: System.out.println("enter number to be subtracted");
                        float b=obj.nextFloat();
                        System.out.println("result : "+c.sub(b));
                        break;
                case 3: System.out.println("enter number to multiply");
                        float e=obj.nextFloat();
                        System.out.println("result : "+c.mty(e));
                        break;
                case 4: System.out.println("enter number to divide");
                        float d=obj.nextFloat();
                        System.out.println("result : "+c.div(d));
                        break;
                case 5: System.exit(0);
                default:System.out.println("wrong choice");
            }
        }while(true);
    }
}
/*run:
Enter a number
7
enter choice 1.+ 2.- 3.* 4./ 5.Exit
1
enter number to be added
2
result : 9.0
enter choice 1.+ 2.- 3.* 4./ 5.Exit
2
enter number to be subtracted
3
result : 6.0
enter choice 1.+ 2.- 3.* 4./ 5.Exit
3
enter number to multiply
2
result : 12.0
enter choice 1.+ 2.- 3.* 4./ 5.Exit
4
enter number to divide
3
result : 4.0
enter choice 1.+ 2.- 3.* 4./ 5.Exit
5
BUILD SUCCESSFUL (total time: 36 seconds)
*/