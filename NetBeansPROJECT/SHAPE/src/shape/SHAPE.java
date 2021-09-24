/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package shape;

/**
 *
 * @author ksaum
 */

public class SHAPE {
    public static abstract class Shape
    {
        private int xcord,ycord;
        Shape()
        {
            xcord=ycord=0;
        }
        Shape(int xcord,int ycord)
        {
            this.xcord=xcord;
            this.ycord=ycord;
        }
        void setCord(int x,int y)
        {
            xcord=x;
            ycord=y;
        }
        int getXcord()
        {
            return xcord;
        }
        int getYcord()
        {
            return ycord;
        }
        abstract void getArea();
        
    }
     public static class Rectangle extends Shape{
        int l,b;
        Rectangle(int l,int b)
        {
            super();
            this.l=l;
            this.b=b;
        }
        @Override
        void getArea()
        {
            System.out.println("Area of Rectangle : "+(l*b));
        }
    
    }
     public static class Circle extends Shape{
         int r;
         Circle(int r)
         {
             super(r,r);
             this.r=r;
         }
         @Override
         void getArea()
        {
            System.out.println("Area of circle : "+(3.14*r*r));
        }
     }

    public static void main(String[] args) {
        Shape obj1=new Rectangle(2,4);
        Shape obj2=new Circle(7);
        Rectangle obj3=new Rectangle(4,4);
        Shape obj4=new Circle(49);
        obj1.getArea();
        obj2.getArea();
        obj3.getArea();
        obj4.getArea();
        System.out.println("for rectangle => X coordinate :"+(obj1.getXcord())+"and y coordinate :"+(obj1.getXcord()));
        System.out.println("for Circle => X coordinate :"+(obj2.getXcord())+"and y coordinate :"+(obj2.getXcord()));
        System.out.println("for rectangle => X coordinate :"+(obj3.getXcord())+"and y coordinate :"+(obj3.getXcord()));
        System.out.println("for rectangle => X coordinate :"+(obj4.getXcord())+"and y coordinate :"+(obj4.getXcord()));
    }
    
}
/*run:
Area of Rectangle : 8
Area of circle : 153.86
Area of Rectangle : 16
Area of circle : 7539.14
for rectangle => X coordinate :0and y coordinate :0
for Circle => X coordinate :7and y coordinate :7
for rectangle => X coordinate :0and y coordinate :0
for rectangle => X coordinate :49and y coordinate :49
BUILD SUCCESSFUL (total time: 0 seconds)
*/