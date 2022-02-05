/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package sychronizedthread;

/**
 *
 * @author ksaum
 */

class CallMe
{
    public void Call(String message)
    {
        synchronized(this)
        {
            System.out.print("["+message);
            try
            {
                Thread.sleep(2000);
            }catch(InterruptedException e){
                System.out.println(e);
            }
            System.out.print("]");
        }
    }
}
class SyncThread extends Thread
{
    String mssg;
    CallMe cm;
    SyncThread(CallMe cm,String mssg)
    {
        this.cm=cm;
        this.mssg=mssg;
        start();
    }
    @Override
    public void run()
    {
        cm.Call(mssg);
    }
}
public class SynchronizedThread {
    public static void main(String args[])
    {
        CallMe c=new CallMe();
        SyncThread t1=new SyncThread(c,"Hello");
        SyncThread t2=new SyncThread(c,"Dear");
        SyncThread t3=new SyncThread(c,"Friends");
        
    }
}
/*
[Hello][Friends][Dear]
BUILD SUCCESSFUL (total time: 6 seconds)
*/