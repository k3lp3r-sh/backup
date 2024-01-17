import java.util.*;


abstract class Shape {	
    public abstract double area(); 
	public void move()
	{ 
		// non-abstract method
		System.out.println("Moved the shape");
	}

}
	
class Circle extends Shape {	
	protected double r;	
	protected static final double PI =3.1415926535;
	public Circle() { r = 1.0; }	
	public double area() { return PI * r * r; }
}

class Rectangle extends Shape {	
	protected double w, h;	
	public Rectangle() { w = 0.0; h=0.0; }	
	public double area() { return w * h; }
}

class pracprog {    
	public static void main(String[] args) { 
		Circle c= new Circle();  
		c.move();
		System.out.println(c.area());  

	}
}
