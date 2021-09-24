/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package multipleinheritance;

/**
 *
 * @author ksaum
 */
interface Geometric{
    float getX();
    float getY();
    double getArea();
    double getCircumference();
}
interface Movable{
    void setX(float x);
    void setY(float y);
}
abstract class Shape implements Geometric,Movable{
   float X,Y;
   Shape(int x,int y)
   {
       X=x;
       Y=y;
   }
   @Override
   public void setX(float x){
       X=x;
   }
   @Override
   public void setY(float y){
       Y=y;
   }
   @Override
   public float getX(){
       return X;
   }
   @Override
   public float getY(){
       return Y;
   }
   
}

class Rectangle extends Shape{
        int l,b;
        Rectangle(int l,int b,int x,int y)
        {
            super(x,y);
            this.l=l;
            this.b=b;
        }
        @Override
        public double getArea()
        {
            return (l*b);
        }
        @Override
        public double getCircumference(){
            return 2*(l+b);
        }
    
    }
class Circle extends Shape{
         int r;
         Circle(int r,int x,int y)
         {
             super(x,y);
             this.r=r;
         }
         @Override
         public double getArea()
        {
            return 3.14*r*r;
        }
         @Override
        public double getCircumference(){
            return 2*3.14*r;
        }
     }
public class MultipleInheritance {
    public static void main(String[] args) {
        Shape obj1=new Rectangle(2,4,2,2);
        Shape obj2=new Circle(7,0,0);
        Rectangle obj3=new Rectangle(4,4,5,5);
        Shape obj4=new Circle(49,1,1);
        System.out.println("for rectangle => X coordinate :"+(obj1.getX())+"and y coordinate :"+(obj1.getY()));
        System.out.println("Area of Rectangle : "+ obj1.getArea());
        System.out.println("circumference of Rectangle : "+ obj1.getCircumference());
        obj1.setX(3);
        obj1.setY(2);
        System.out.println("for rectangle => X coordinate :"+(obj1.getX())+"and y coordinate :"+(obj1.getY()));
        System.out.println();
        System.out.println("for Circle => X coordinate :"+(obj2.getX())+"and y coordinate :"+(obj2.getY()));
        System.out.println("Area of Circle : "+ obj2.getArea());
        System.out.println("circumference of Circle : "+ obj2.getCircumference());
        System.out.println();
        System.out.println("for rectangle => X coordinate :"+(obj3.getX())+"and y coordinate :"+(obj3.getY()));
        System.out.println("Area of Rectangle : "+ obj3.getArea());
        System.out.println("circumference of Rectangle : "+ obj3.getCircumference());
        System.out.println();
        System.out.println("for Circle => X coordinate :"+(obj4.getX())+"and y coordinate :"+(obj4.getY()));
        System.out.println("Area of Circle : "+ obj4.getArea());
        System.out.println("circumference of Circle : "+ obj4.getCircumference());
       
    }
    
}
/*run:
for rectangle => X coordinate :2.0and y coordinate :2.0
Area of Rectangle : 8.0
circumference of Rectangle : 12.0
for rectangle => X coordinate :3.0and y coordinate :2.0

for Circle => X coordinate :0.0and y coordinate :0.0
Area of Circle : 153.86
circumference of Circle : 43.96

for rectangle => X coordinate :5.0and y coordinate :5.0
Area of Rectangle : 16.0
circumference of Rectangle : 16.0

for Circle => X coordinate :1.0and y coordinate :1.0
Area of Circle : 7539.14
circumference of Circle : 307.72
BUILD SUCCESSFUL (total time: 0 seconds)


*/
