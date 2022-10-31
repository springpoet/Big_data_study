<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<style type="text/css">
h1 {
	color: black;
	background: red;
}
</style>
</head>
<body>
<% String birth; %>
	<%
	birth = request.getParameter("birth");
	System.out.println(birth+"값은 잘못됨");
	%>
	<h1>값을 잘못 입력했습니다. <%=birth %>값은 잘못된 값.</h1>
	<a href="requestex.html">처음으로</a>
</body>
</html>