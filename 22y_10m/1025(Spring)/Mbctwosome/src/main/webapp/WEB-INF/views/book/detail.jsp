<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<%@ taglib prefix="fmt" uri="http://java.sun.com/jsp/jstl/fmt"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Book Detail Page</title>
</head>
<body>
	<h1>Book Information</h1>
	<p>Title : ${data.title}</p>
	<p>Category : ${data.category}</p>
	<p>
		Price :
		<fmt:formatNumber type="number" maxFractionDigits="3"
			value="${data.price}"></fmt:formatNumber>
	</p>
	<p>
		Insert_date :
		<fmt:formatDate value="${data.insert_date}"
			pattern="yyyy.MM.dd HH:mm:ss"></fmt:formatDate>
	</p>
	
	<p>
	<a href="/update?bookId=${bookID}">Edit</a>
	</p>
	<form method="POST" action="/delete">
	<input type="hidden" name="bookId" value="${bookId}">
	<input type="submit" value="삭제">
	</form>
	<hr>
	<p>
	<a href="/list">To list</a>
	</p>
</body>
</html>