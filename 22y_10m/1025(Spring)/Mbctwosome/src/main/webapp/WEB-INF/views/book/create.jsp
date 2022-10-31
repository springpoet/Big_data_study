<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Book create page</title>
</head>
<body>
	<h1>New Book</h1>
	<form method="POST">
		<p>
			Title : <input type="text" name="title">
		</p>
		<p>
			Category : <input type="text" name="category">
		</p>
		<p>
			Price : <input type="text" name="price">
		</p>
		<p>
			<input type="submit" value="저장">
	</form>
</body>
</html>