<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
 <jsp:useBean id="student1" class="com.java1017.mytest.Student" scope="page"/>
 <!-- Student student1 = new Student(); 와 같음 -->
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
<jsp:setProperty property="name" name="student1" value="홍길동" />
<jsp:getProperty property="name" name="student1"/>
<jsp:setProperty property="age" name="student1" value="34" />
<jsp:getProperty property="age" name="student1"/>

<!-- EL(Expression Language) -->
${student1.name}
${student1.age}
</body>
</html>