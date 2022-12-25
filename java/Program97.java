//Problem statements : Write a program which accept N numbers from user and display below pattern.
/*
iRow = 4 iCol = 4

A  B  C  D
a  b  c  d
A  B  C  D
a  b  c  d
   

*/
import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        char CapCh = 'A';
        char SmallCh = 'a';
        for(int i = 1; i <= iRow; i++)
        {
            for(int j = 1; j<= iCol ;j++)
            {
                if(i % 2 == 0)
                {
                    System.out.print(SmallCh+"\t");
                }
                else
                {
                    System.out.print(CapCh+"\t");
                }
               
                CapCh++;
                SmallCh++;
            }
            System.out.println();
            CapCh ='A';
            SmallCh = 'a';
        }
    }
}

class Program97
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