//Problem statements : Write a program which accept N numbers from user and display below pattern.
/*
iRow = 3 iCol = 5

A  A  A  A  A 
B  B  B  B  B
C  C  C  C  C
   

*/
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        char CapCh = 'A';
        
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j<= iCol ;j++)
            {
               System.out.print(CapCh+"\t");
            }
            System.out.println();
            CapCh++;
           
        }
    }
}

class Program98
{
    public static void main(String arr[])
    { 
        Scanner sobj = new Scanner(System.in);
   
        System.out.println("Enter the number");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the number");
        int iNo2 = sobj.nextInt();


        Pattern pobj = new Pattern();

        pobj.Display(iNo1, iNo2);
    }
}