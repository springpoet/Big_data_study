<%@page import="java.sql.DriverManager"%>
<%@page import="java.sql.ResultSet"%>
<%@page import="java.sql.Statement"%>
<%@page import="java.sql.Connection"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<%! String strName, strID, strPW, strPhone, strGender; %>
	<%! String p1,p2,p3;//번호저장용 %>
	<%
	try {
		Class.forName("com.mysql.cj.jdbc.Driver");
	} catch (ClassNotFoundException e1) {
		// TODO Auto-generated catch block
		e1.printStackTrace();
	}
	Connection conn = null;
	Statement stmt = null;
	ResultSet rs = null;
	try {
		String jdbcDriver = "jdbc:mysql://localhost:3306/jspdb?" + "useUnicode=true&characterEncoding=utf8&"
				+ "serverTimezone=UTC";
		String dbUser = "root";
		String dbPass = "1234";
		conn = DriverManager.getConnection(jdbcDriver, dbUser, dbPass);
		stmt = conn.createStatement();
		
		strID=(String)session.getAttribute("id");
		String strQuery="select * from member where id= '"+strID+"'";
		rs=stmt.executeQuery(strQuery);
		
		rs.next();
		
		strName=rs.getString("name");
		strID=rs.getString("id");
		strPW=rs.getString("pw");
		strPhone=rs.getString("hp");
		strGender=rs.getString("gender");
		
		System.out.println(strName);
		System.out.println(strID);
		System.out.println(strPW);
		System.out.println(strPhone);
		System.out.println(strGender);
		
		p1=strPhone.split("-")[0];
		p2=strPhone.split("-")[1];
		p3=strPhone.split("-")[2];
		
		System.out.println(p1);
		System.out.println(p2);
		System.out.println(p3);
		
	} catch (Exception e) {
		e.printStackTrace();
	} finally {
		try {
			stmt.close();
			conn.close();
		} catch (Exception e2) {
			// TODO: handle exception
			e2.printStackTrace();
		}
	}
	%>
	<form action="ModifyOk" method="post">
		이름 : <input type="text" name="name" value=<%=strName %> /><br> ID
		:
		<%=strID %><br> PW : <input type="password" name="pw"
			value=<%=strPW %>><br> HP : <select name="phone">
			<% if(p1.equals("010")){ %>
			<option value="010" selected>010</option>
			<option value="011">011</option>
			<option value="007">007</option>

			<% }else if(p1.equals("011")){ %>
			<option value="010">010</option>
			<option value="011" selected>011</option>
			<option value="007">007</option>
			<%} else { %>
			<option value="010">010</option>
			<option value="011">011</option>
			<option value="007" selected>007</option>
			<% }%>
		</select>
		<input type="text" name="phone2" value=<%=p2 %>>
		<input type="text" name="phone3" value=<%=p3 %>>
		<%if(strGender.equals("man")){ %>
		<input type="radio" name="gender" value="man" checked>남자
		<input type="radio" name="gender" value="woman" >여자
		<%}else { %>
		<input type="radio" name="gender" value="man" >남자
		<input type="radio" name="gender" value="woman" checked >여자
		<%} %>
		
		<input type="submit" value="정보수정"/><br>
		<input type="reset" value="취소"/>
		
	</form>
</body>
</html>