<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<%! String strID,tryId; %>

<% strID=(String)session.getAttribute("id");
	  tryId=(String)session.getAttribute("tryId");%>

<h1><%=strID %>의 비밀번호 잘못 입력했습니다.</h1>
<h1>입력한 ID : <%=tryId %></h1>
</body>
</html>