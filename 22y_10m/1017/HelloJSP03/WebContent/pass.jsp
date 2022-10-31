<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<%
	String age = request.getParameter("age");
	String birth = request.getParameter("birth");
	%>
	<h1>당신은 성인 입니다.</h1>
	<h2>
		당신의 나이는
		<%=age%></h2>
	<h2>
		당신의 나이는
		<%=birth%></h2>
</body>
</html>