<%@taglib prefix="sql" uri="http://java.sun.com/jsp/jstl/sql"%>
<%-- 
    Document   : index
    Created on : 11 Jan, 2022, 2:28:40 AM
    Author     : ksaum
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Login</title>
    <form name="myLogin" action="display.jsp" method="POST">
    <table border="0">
        <h1>Login</h1>
        <tbody>
            <tr>
                <td>Username :</td>
                <td><input type="text" name="username" value="" size="20" /></td>
            </tr>
            <tr>
                <td>Password :</td>
                <td><input type="password" name="password" value="" size="20" /></td>
            </tr>
        </tbody>
        
    </table>
    <input type="submit" value="login" name="login" />
    <input type="reset" value="clear" name="clear" />
    </form>
    </head>
    <body>
        
    </body>
</html>
