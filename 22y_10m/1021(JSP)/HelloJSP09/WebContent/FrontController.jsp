<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<a href="insert.do"></a><br>
<a href="update.do"></a><br>
<a href="delete.do"></a><br>
<a href="select.do"></a><br>
<%=request.getContextPath() %>
<hr>
<a href="http://localhost:8181<%=request.getContextPath() %>/test.do">/test.do</a>
<hr>
<a href="<%=request.getContextPath() %>"/test.do>test2</a>
<hr>
<a href="http://localhost:8181/HelloJSP09/aaa.do">aaa</a>
</body>
</html>