<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

<%! int age; %>
<%
	String str = request.getParameter("age");

try{
	age = Integer.parseInt(str);
	if(age>=20)
		response.sendRedirect("pass.jsp?age="+age);
	else
		response.sendRedirect("ng.jsp?age="+age);

}catch (Exception e){
	//에러페이지 이동 대신 예외 발생 시 requestex로 이동.
	//myfail 발생시키고 싶으면 requestex.html 대신 myfail.jsp라 적음.
	//또는 try catch 제거.
	response.sendRedirect("requestex.html");
}
	%>
</body>
</html>
















