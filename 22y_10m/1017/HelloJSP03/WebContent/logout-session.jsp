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
		Enumeration enu = session.getAttributeNames();
	while (enu.hasMoreElements()) {
		String sName = enu.nextElement().toString();
		String sValue = (String) session.getAttribute(sName);
		System.out.println(sName);
		System.out.println(sValue);
		if (sValue.equals("bbb")) {
			session.removeAttribute(sName);
		}
	}
	%>
	<a href="session_test.jsp">세션테스트페이지</a>
</body>
</html>