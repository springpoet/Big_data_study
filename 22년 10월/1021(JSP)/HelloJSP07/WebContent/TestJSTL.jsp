<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<c:set var="vatName2" value="aaa"/>
<c:out value="${vatName2}"/>
<%! String vatName; %>
<% vatName="안녕"; %>
<%=vatName %>
<%
try{
	int a=2;
	int b=0;
	int c=a/b;
	
}catch(Exception e){
	out.println(e.getMessage());
}
%>
<c:catch var="myerror">
<%=2/0 %>
</c:catch>
<c:out value="${myerror}"/>
<br>

<c:if test="${1+2==3}">
맞습니다.
</c:if>

<c:if test="${1+2!=3}">
이건 안 찍힘 메롱
</c:if>
<br>
<c:forEach var="fEach" begin="1" end="10" step="3">
${fEach} <%-- EL태그 --%> <%-- 1 4 7 10 출력됨 --%> 
</c:forEach>

<c:choose>
	<c:when test="${10>100}"> 거짓1</c:when>
	<c:when test="${10==10}"> 참1</c:when>
	<c:otherwise> 이도저도 아님 </c:otherwise>
</c:choose>
</body>
</html>