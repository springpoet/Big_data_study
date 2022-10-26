<%@page import="java.util.Enumeration"%>
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
		//ArrayList와 유사. 객체를 순서대로 넣고 하나씩 순차적으로 처리
	Enumeration enumeration = session.getAttributeNames();
	while (enumeration.hasMoreElements()) {
		String sName = enumeration.nextElement().toString();
		String sValue = (String) session.getAttribute(sName);
		if (sValue.equals("bbb")) {
			out.println("bbb 안녕!");
		}
	}
	%>
	<a href="logout-session.jsp">로그아웃</a>
	<a href="session_test.jsp">세션 테스트 페이지</a>
</body>
</html>