import java.util.*;
import java.io.*;

class Program335
{
    public static void main(String arg[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        String str = "     Hello  world  Demo     ";

        System.out.println("Length of str is : "+str.length());

        str = str.trim();

        System.out.println("Length of str is : "+str.length());

        sobj.close();
    }
}