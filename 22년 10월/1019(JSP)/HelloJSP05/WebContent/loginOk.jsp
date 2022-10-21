<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<style>
.man {
	color: blue;
}

.woman {
	color: hotpink;
}
</style>
</head>
<body>
	<%
		String strId, strGender, strName;
	%>
	<%
		strId = (String) session.getAttribute("id");
	strName = (String) session.getAttribute("name");
	strGender = (String) session.getAttribute("gender");
	%>
	<h1 class=<%=strGender %>>로그인 잘됨</h1>
	<h1 class=<%=strGender %>>이름 :
	<%=strName%></h1>
	<h1 class=<%=strGender %>>ID :
	<%=strId%></h1>
	<h1 class=<%=strGender %>>성별 :
	<%=strGender%></h1>
	<%
		if (strGender.equals( "man")) {
	%><p class="man">
		로그인 잘됨
		<br> 이름 :<%=strName%>
		<br> ID :<%=strId%>
		<br> 성별 :<%=strGender%>
	</p>
	<%
		} else {
	%><p class="woman">
		로그인 잘됨
		<br> 이름 :<%=strName%>
		<br> ID :<%=strId%>
		<br> 성별 :<%=strGender%></p>
	<%
		}
	%>

</body>
</html>