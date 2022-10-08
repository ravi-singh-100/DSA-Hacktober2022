import java.util.Scanner;

public class _24Operators {

	void display()   
    {  
    double d = 67.54;  
    int i = (int)d;   //casting double type to integer
    System.out.println(i);  
    }  
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner reader = new Scanner(System.in);
		
		System.out.println("----Types of operator---- ");
		
		System.out.println("Unary operator:- ");
		int num1 = +50; // it is optional 'cause its default
		System.out.println("Unary Plus Operator: " + num1);
		int num2 = -50;
		System.out.println("Unary Minus Operator: " + num2);
		
		
		System.out.println("\nArithmetic Operator:-");
		int num3 = 10 + 20;
		System.out.println("Arithmetic Plus Operator: " + num3);
		int num4 = 20 - 10;
		System.out.println("Arithmetic Minus Operator: " + num4);
		int num5 = 10 * 5;
		System.out.println("Arithmetic Multiplication Operator: " + num5);
		int num6 = 10 / 2;
		System.out.println("Arithmetic Divide Operator: " + num6);
		int num7 = 10 % 3;
		System.out.println("Arithmetic Mudular Operator: " + num7);
		
		
		int a = 20, b = 5, c = 20;
		System.out.println("\nSwift Operator(Add, Sub, Pro, Div, Mod):- ");
		int num8 = (a + b);
		System.out.println("Swift Add Operator: " + num8);
		
		
		System.out.println("\nRelational Operator(a=10, b=5, c=20):- ");
			System.out.println("a > b is " + (a>b));
			System.out.println("a < b is " + (a<b));
			System.out.println("a >= b is " + (a>=b));
			System.out.println("a <= b is " + (a<=b));
			System.out.println("a == c is " + (a==b));
			System.out.println("a != c is " + (a!=b));
		
		a = 9; b = 8; c=15;
		System.out.println("\nBitwise Operator(a=9, b=8, c=15):-");
			System.out.println("a & b is " + (a&b));	// bitwise AND
			System.out.println("a ^ b is " + (a^b));	// bitwise exclusive OR
			System.out.println("a | b is " + (a|b));	// bitwise inclusive OR
			System.out.println("~2 is " + (~2));		// ~0010= 1101 = -3  
			System.out.println("c >> 2 is " + (c >>2)); // right shift
			System.out.println("c << 2 is " + (c <<2)); // left shift
			
		a = 10; b = 20;
		System.out.println("\nLogical Operator(a=10, b=20, c=15):-");
			System.out.println("a<15 && b>15 is " + (a<15 && b>15));
			System.out.println("a=0 || b>15 is " + (a==0 || b>15));
			System.out.println("! b>15 is " + !(b>15));
			
		
		a = 10; b = 20; c = 30;
		a = a > b ? (a > c ? a : c) : (b > c ? b : c);
		System.out.println("\nCondition/Ternary Operator:-");
			System.out.println("The largest value is " + a);
			
		a = 10; b = 20;
		System.out.println("\nAssignment Operator(a=10, b=20):-");
			System.out.println("a += b is " + (a += b));
			
		a = 10; b = 20;
		System.out.println("\nIncrement & Decreament Operator(a=10, b=20):-");
			System.out.println("++a is " + (++a));	// prefix
			System.out.println("--b is " + (--b));	// prefix
			
		
		System.out.println("\nSpecial Operator:-");
		System.out.println("1. Instaneof Operator:-");
			// create a variable of string type
		    String name = "MASQ";
		    
		    // checks if name is instance of String
		    boolean check = name instanceof String;
		    System.out.println("Name is an instance of String: " + check);
		    
		
		 System.out.println("\n2. Dot Operator:-");
		    _24Operators doe = new _24Operators();  
		    doe.display();  //method calling 
	
		reader.close();
	}

}