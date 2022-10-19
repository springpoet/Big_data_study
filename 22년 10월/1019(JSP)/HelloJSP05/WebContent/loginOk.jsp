<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<style>
.man{
	font-color:blue;
}
.woman{
	font-color:hotpink;
}
</style>
</head>
<body>
<% String strId,strGender,strName;%>
<% 
strId=(String)session.getAttribute("id");
strName=(String)session.getAttribute("name");
strGender=(String)session.getAttribute("gender");
%>
<h1>로그인 잘됨</h1>
	이름 : <%=strName %>
	ID : <%=strId %>
	성별 : <%=strGender %>	
<%
if(strGender=="man"){
}
%>
	
</body>
</html>