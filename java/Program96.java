//Problem statements : Write a program which accept N numbers from user and display below pattern.
/*
iRow = 4 iCol = 4

A  B  C  D
A  B  C  D
A  B  C  D
A  B  C  D
   

*/
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        char ch = 'A';
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j<= iCol ;j++)
            {
                System.out.print(ch+"\t");
                ch++;
            }
            System.out.println();
            ch='A';
        }
    }
}

class Program96
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