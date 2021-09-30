/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package parentchildthread;

class ChildThread extends Thread{
    public ChildThread(String name){
        super(name);
        start();
    }
    @Override
    public void run(){
      for(int i=10;i<15;i++)
      {
            System.out.println(this.getName()+":\t"+i);
        try {
            Thread.sleep(500);
        } catch (InterruptedException ex) {
            System.out.println(this.getName()+"is interrupted");
        }
      }
        System.out.println(this.getName()+"is terminated");
    }
}
public class ParentChildThread {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        ChildThread t1=new ChildThread("ChinkyThread");
        ChildThread t2=new ChildThread("MinkyThread");
        ChildThread t3=new ChildThread("PinkyThread");
        for(int i=5;i>0;i--){
            System.out.println(Thread.currentThread().getName()+"  "+i);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException ex) {
                System.out.println("main thread interrupted");
            }
        }
        System.out.println("main thread terminated");

    }
    
    
}
/*run:

main  5
MinkyThread:	10
ChinkyThread:	10
PinkyThread:	10
ChinkyThread:	11
PinkyThread:	11
MinkyThread:	11
main  4
MinkyThread:	12
PinkyThread:	12
ChinkyThread:	12
PinkyThread:	13
MinkyThread:	13
ChinkyThread:	13
main  3
PinkyThread:	14
ChinkyThread:	14
MinkyThread:	14
MinkyThreadis terminated
ChinkyThreadis terminated
PinkyThreadis terminated
main  2
main  1
main thread terminated
BUILD SUCCESSFUL (total time: 5 seconds)
*/