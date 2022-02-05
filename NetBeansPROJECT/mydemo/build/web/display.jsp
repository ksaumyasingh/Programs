<%-- 
    Document   : display
    Created on : 11 Jan, 2022, 2:49:42 AM
    Author     : ksaum
--%>

<%@page import="java.sql.PreparedStatement"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.Connection"%>
<%@page import="java.sql.DriverManager"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Login</title>
    </head>
    <body>
        <h1>login successful</h1> 
        <%
            String username=request.getParameter("username");
            String password=request.getParameter("password");
            
            Connection con=null;
            Statement stmt=null;
            String dbname="saumya";
            try{
            Class.forName("org.apache.derby.jdbc.ClientDriver");
            con=DriverManager.getConnection("jdbc:derby://localhost:1527/"+dbname);
            stmt=con.createStatement();
            //stmt.executeUpdate("insert into login values('"+username+"','"+password+")");
            out.print("<h1>db connected successfully</h1>");
        }
        catch(Exception e)
        {
            out.println("Sorry !!! try again");
        }
        try{
            PreparedStatement ps=con.prepareStatement("insert into login values(?,?)");
            ps.setString(1,username);
            ps.setString(2,password);
            if(ps.executeUpdate()>0)
              out.print("<h1>your account is created successfully</h1>");
            
        }catch(Exception e){
            out.println("Sorry !!! try again");
        }
        %>
        <table border="0">
            <tbody>
                <tr>
                    <td>Username</td>
                    <td><%=username%></td>
                </tr>
                <tr>
                    <td>Password</td>
                    <td><%=password%></td>
                </tr>
            </tbody>
        </table>

    </body>
</html>
