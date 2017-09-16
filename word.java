import java.io.*;
import java.util.*;
class word
{
public static void main(String args[])
{
int a;
System.out.println("Enter a number within 4");
Scanner s=new Scanner(System.in);
a=s.nextInt();
switch(a)
{
case 1:System.out.println("One");
break;
case 2:System.out.println("Two");
break;
case 3:System.out.println("Three");
break;
case 4:System.out.println("Four");
break;
default:System.out.println("Enter valid number");
break;
}
}
}
