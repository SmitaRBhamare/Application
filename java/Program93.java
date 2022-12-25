//Problem statements : Write a program which accept N numbers from user and display below pattern.
/*
iRow = 3 iCol = 5

5  4  3  2  1
5  4  3  2  1
5  4  3  2  1
   

*/
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = iCol; j>= 1; j--)
            {
                System.out.print(j+"\t");
            }
            System.out.println();
        }
    
    }
}

class Program93
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