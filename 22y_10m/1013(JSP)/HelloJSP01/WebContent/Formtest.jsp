<%@ page language="java" contentType="text/html; charset=UTF-8"
	pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<form action="HiWorld">
		<input type="text" name="hi"> <input type="submit" value="전송">
	</form>
	<form action="ByeWorld">
		<input type="text" name="Bye"> <input type="submit" value="전송">
	</form>
	<!--method="post"를 붙이면 값이 안보임-->
	<%--jsp용 주석 처리 방법 --%>
	<form action="HiWorld" method="post">
		<input type="text" name="hi"> <input type="submit" value="전송">
	</form>
	<form action="ByeWorld" method="post">
		<input type="text" name="Bye"> <input type="submit" value="전송">
	</form>
</body>
</html>