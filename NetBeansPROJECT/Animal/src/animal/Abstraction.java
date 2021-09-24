/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package animal;

/**
 *
 * @author ksaum
 */
abstract class Animal
{
    int noOfLegs;
    String type;
    Animal(int n,String s)
    {
        noOfLegs=n;
        type=s;
    }
    void printData()
    {
        System.out.println("No of legs :"+ noOfLegs +"type : " + type );
    }
    abstract void speech();
    abstract void movement();
}
class Cow extends Animal
{
    int noOftail;
    Cow(int n,int tail,String s)
    {
        super(n,s);
        noOftail=tail;
    }
    @Override
    void printData()
    {
        super.printData();
        System.out.print(" no of tails :" + noOftail);
    }
    @Override
    void speech()
    {
        System.out.println("moo");
    }
    @Override
    void movement()
    {
        System.out.println("Cow can walk,run,jump");
    }
}
class Owl extends Animal
{
    String haveFeathers;
    Owl(int n,String s2,String s)
    {
        super(n,s);
        haveFeathers=s2;
    }
    @Override
    void printData()
    {
        super.printData();
        System.out.print(" haveFeathers :" + haveFeathers);
    }
    @Override
    void speech()
    {
        System.out.println("hoot");
    }
    @Override
    void movement()
    {
        System.out.println("Owl can walk,jump,fly");
    }
}
public class Abstraction {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Animal obj1=new Owl(2,"yes","carnivorus");
        Animal obj2=new Cow(4,1,"harbivorus");
        Owl obj3=new Owl(2,"yes","carnivorus");
        Cow obj4=new Cow(4,1,"harbivorus");
        obj1.printData();
        obj1.speech();
        obj1.movement();
        obj2.printData();
        obj2.speech();
        obj2.movement();
        obj3.printData();
        obj3.speech();
        obj3.movement();
        obj4.printData();
        obj4.speech();
        obj4.movement();
        
    }
    
}
