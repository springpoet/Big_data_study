<%@page import="com.javalec.daodto.*" %>
<%@page import="java.util.ArrayList" %>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body> 
<h2> 사람 목록</h2>
<table border="1">  
    <tr>
                <th>이름</th>    
                <th>ID</th>
                <th>성별</th>
    </tr>

<%
        MemberDAO dao=new MemberDAO();
        //dao.dbConn();   db 연결 확인 작업      
         ArrayList<MemberDTO>list=dao.memberlist();
         for(MemberDTO dto:list){                 
%>
        <tr>
                <td><%=dto.getName() %></td>
                <td><%=dto.getId() %></td>
                <td><%=dto.getGender() %></td>
        </tr>
<%
 
         }
%>
 </table>

</body>
</html>