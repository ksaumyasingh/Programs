/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package database;

import static java.lang.System.out;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;


/**
 *
 * @author ksaum
 */
public class DbCon {
    Connection con;//A Connection is the session between java application and database.
    /*Connection Object is used to create an open connection to a data source. Through this connection, you can access and manipulate a database.
    If you want to access a database multiple times, you should establish a connection using the Connection object.*/
    public Connection dbConnect(String dbname){
        try{
            Class.forName("org.apache.derby.jdbc.ClientDriver");
            Connection con=DriverManager.getConnection("jdbc:derby://localhost:1527/"+dbname);
            //System.out.println("connected successfully");
            out.print("<h1>db connected successfully</h1>");
            this.con=con;
            return con;
             
        }catch(Exception e){
            e.printStackTrace();
        } 
        return null;
    }
    /*    When PreparedStatement is created, the SQL query is passed as a parameter. This Prepared Statement contains 
    a pre-compiled SQL query, so when the PreparedStatement is executed, DBMS can just run the query instead of first compiling it.
    We can use the same PreparedStatement and supply with different parameters at the time of execution.
    An important advantage of PreparedStatements is that they prevent SQL injection attacks.*/
    public void insert(String username,String password){
        try{
            PreparedStatement ps=con.prepareStatement("insert into login values(?,?)");
            ps.setString(1,username);
            ps.setString(2,password);
            if(ps.executeUpdate()>0)
              System.out.println("inserted successfully");  
            
        }catch(Exception e){
            e.printStackTrace();
        }
    }
    /*public void insert(int id,String n,String c){
        try{
            PreparedStatement ps=con.prepareStatement("insert into Address values(?,?,?)");
            ps.setInt(1,id);
            ps.setString(2,n);
            ps.setString(3,c);
            if(ps.executeUpdate()>0)
              System.out.println("inserted successfully");  
            
        }catch(Exception e){
            e.printStackTrace();
        }
    }
    public void update(int id,String n,String c){
        try{
            PreparedStatement ps=null;
            if((n!=null&&n!="")&&(c!=null&&c!="")){
                ps=con.prepareStatement("update Address set Ename=?,City=? where Eid=?");
                ps.setInt(3,id);
                ps.setString(1,n);
                ps.setString(2,c);
            }
            else if(n!=null&&n!=""){
                ps=con.prepareStatement("update Address set Ename=? where Eid=?");
                ps.setInt(2,id);
                ps.setString(1,n);  
            }
            else{
                ps=con.prepareStatement("update Address set City=? where Eid=?");
                ps.setInt(2,id);
                ps.setString(1,c);
            }   
            if(ps.executeUpdate()>0)
              System.out.println("updated successfully");  
            
        }catch(Exception e){
            e.printStackTrace();
        }
    }
    public void delete(int id){
        try{
            PreparedStatement ps=con.prepareStatement("delete from Address where Eid=?");
            ps.setInt(1,id);
            if(ps.executeUpdate()>0)
              System.out.println("deleted successfully");  
            
        }catch(Exception e){
            e.printStackTrace();
        }
    }
    public void display(){
        try{
            PreparedStatement ps=con.prepareStatement("select * from address");
            ResultSet rs=ps.executeQuery();
            System.out.println("===================================================");
            System.out.println("Eid\t"+"Ename\t"+"City\t");
            System.out.println("===================================================");
            while(rs.next())
                System.out.println(rs.getInt(1)+"\t"+rs.getString(2)+"\t"+rs.getString(3));
        }catch(SQLException ex){
            ex.printStackTrace();
        }
    }
    public ResultSet search(int id)throws Exception{
        PreparedStatement ps = con.prepareStatement("select ename, city from address where eid = ?");
        ps.setInt(1, id);
        ResultSet rs = ps.executeQuery();
        return rs;
    }*/
    
}
