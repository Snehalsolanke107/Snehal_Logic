import java.sql.*;  //1

public class Database2 
{
    public static void main(String arg[]) throws Exception
    {
        Connection cobj = DriverManager.getConnection("jdbc:mysql://localhost:3306/PPA","root","root");  //2

        Statement sobj = cobj.createStatement();    //3

        ResultSet robj = sobj.executeQuery("select * from student");   //4

        while(robj.next())
        {
            System.out.println("RID :"+robj.getInt("rno"));
            System.out.println("Name :"+robj.getString("name"));
            System.out.println("City :"+robj.getString("city"));
            System.out.println("Marks :"+robj.getInt("marks"));
        }
    }
}
