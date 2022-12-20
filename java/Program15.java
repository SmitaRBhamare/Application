//Problem statements : Accept one character and check wheather that character is vowel (a,e,i,o,u) or not  

import java.util.*;

class CheckChar
{
    public boolean ChkVowel(char ch)
    {
        if(ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u'||ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
        {
           return true; 
        }
        else
        {
          return false;
        }
    } 
}
   
class Program15
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character");
        char character = sobj.next().charAt(0);

        CheckChar cobj = new CheckChar();

        boolean bRet = cobj.ChkVowel(character);

        if(bRet == true)
        {
           System.out.println(character+" is vowel");     
        }
        else
        {
           System.out.println(character+" is not vowel"); 
        }

    }
}