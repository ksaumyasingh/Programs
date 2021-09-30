/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package currentthread;

/**
 *
 * @author ksaum
 */
public class CurrentThread {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Thread t=Thread.currentThread();
        System.out.println("before change");
        System.out.println(t);
        t.setName("MyThread");
        t.setPriority(7);
        System.out.println("after change");
        for(int i=5;i>0;i--)
            System.out.println(t.getName()+"  "+i);
        try {
            Thread.sleep(1000);
        } catch (InterruptedException ex) {
            System.out.println("main thread interrupted");
        }
            
    }
    
}
/*before change
Thread[main,5,main]
after change
MyThread  5
MyThread  4
MyThread  3
MyThread  2
MyThread  1
BUILD SUCCESSFUL (total time: 1 second)
*/
