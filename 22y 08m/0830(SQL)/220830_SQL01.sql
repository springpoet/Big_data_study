DROP TABLE FOOD_TRUCK;
CREATE TABLE food_truck(
NUM INTEGER PRIMARY KEY,
NAME VARCHAR2(100) NOT NULL,
price INT,
foodcode NUMBER NOT NULL,
FOREIGN KEY(foodcode) REFERENCES food_category(code));

DROP TABLE FOOD_CATEGORY;
CREATE TABLE FOOD_CATEGORY(
CODE NUMBER PRIMARY KEY,
NAME VARCHAR2(50));

INSERT INTO FOOD_CATEGORY VALUES(1,'한식');
INSERT INTO FOOD_CATEGORY VALUES(2,'중식');
INSERT INTO FOOD_CATEGORY VALUES(3,'일식');
INSERT INTO FOOD_CATEGORY VALUES(4,'양식');
INSERT INTO FOOD_CATEGORY VALUES(5,'잡식');
INSERT INTO FOOD_CATEGORY VALUES(6,'기타');
INSERT INTO FOOD_CATEGORY VALUES(7,'음식아님');

DROP SEQUENCE FOOD_ROWNUM;
CREATE SEQUENCE FOOD_ROWNUM;

INSERT INTO FOOD_TRUCK VALUES(FOOD_ROWNUM.NEXTVAL,'민트덮밥',5000,5);
INSERT INTO FOOD_TRUCK VALUES(FOOD_ROWNUM.NEXTVAL,'딸기카레',7000,5);
INSERT INTO FOOD_TRUCK VALUES(FOOD_ROWNUM.NEXTVAL,'타이어',30000,7);

SELECT * FROM FOOD_TRUCK;

SELECT FOOD_TRUCK.NAME AS 음식명, PRICE AS 가격, FOOD_CATEGORY.NAME AS 분류
FROM FOOD_TRUCK
JOIN FOOD_CATEGORY ON FOOD_TRUCK.FOODCODE=FOOD_CATEGORY.CODE;

--1번.
INSERT INTO FOOD_TRUCK VALUES(4,'된장찌개',5000,1);
INSERT INTO FOOD_TRUCK VALUES(5,'김치찌개',6000,1);
INSERT INTO FOOD_TRUCK VALUES(6,'청국장',7000,1);
INSERT INTO FOOD_TRUCK VALUES(7,'짜장면',5000,2);
INSERT INTO FOOD_TRUCK VALUES(8,'짬뽕',5500,2);
INSERT INTO FOOD_TRUCK VALUES(9,'탕수육',11000,2);
INSERT INTO FOOD_TRUCK VALUES(10,'초밥',12000,3);
INSERT INTO FOOD_TRUCK VALUES(11,'우동',5500,3);
INSERT INTO FOOD_TRUCK VALUES(12,'튀김덮밥',9000,3);
INSERT INTO FOOD_TRUCK VALUES(13,'리조또',8000,4);
INSERT INTO FOOD_TRUCK VALUES(14,'까르보나라',7500,4);
INSERT INTO FOOD_TRUCK VALUES(15,'페페로니피자',12500,4);
INSERT INTO FOOD_TRUCK VALUES(16,'회덮밥',8000,5);
INSERT INTO FOOD_TRUCK VALUES(17,'김피탕',10000,5);
INSERT INTO FOOD_TRUCK VALUES(18,'대창덮밥',9000,5);
INSERT INTO FOOD_TRUCK VALUES(19,'신발',45000,6);
INSERT INTO FOOD_TRUCK VALUES(20,'무선이어폰',90000,6);
INSERT INTO FOOD_TRUCK VALUES(21,'마스크',500,6);
INSERT INTO FOOD_TRUCK VALUES(22,'노트북',750000,7);
INSERT INTO FOOD_TRUCK VALUES(23,'컴퓨터',1000000,7);
INSERT INTO FOOD_TRUCK VALUES(24,'마우스',110000,7);

--2번.
INSERT INTO FOOD_CATEGORY VALUES(8,'디저트');

--3번
INSERT INTO FOOD_TRUCK VALUES(25,'케이크',4500,8);
INSERT INTO FOOD_TRUCK VALUES(26,'크림브륄레',5500,8);
INSERT INTO FOOD_TRUCK VALUES(27,'아이스아메리카노',2500,8);
INSERT INTO FOOD_TRUCK VALUES(28,'카페라뗴',3500,8);
INSERT INTO FOOD_TRUCK VALUES(29,'녹차라떼',4000,8);

--4번
SELECT FOOD_TRUCK.NAME AS 음식명, PRICE AS 가격, FOOD_CATEGORY.NAME AS 분류 
FROM FOOD_TRUCK
JOIN FOOD_CATEGORY ON FOOD_TRUCK.FOODCODE=FOOD_CATEGORY.CODE;

--5번
SELECT FOOD_TRUCK.NAME AS 음식명, PRICE AS 가격, FOOD_CATEGORY.NAME AS 분류 
FROM FOOD_TRUCK
JOIN FOOD_CATEGORY ON FOOD_TRUCK.FOODCODE=FOOD_CATEGORY.CODE
ORDER BY PRICE DESC;

--group by.
select * from food_truck;

--분류별 평균 값.
select foodcode, avg(price) from food_truck group by foodcode;

--분류별 최고가 음식
select foodcode, max(price) from food_truck group by foodcode order by foodcode;

--having : group by 문의 조건문.
select foodcode,avg(price) as 평균가격 
from food_truck 
group by foodcode 
having avg(price)>10000
order by foodcode;

--중첩질의 : 쿼리문 안에 쿼리문이 들어간 것
select * from food_truck where price=(select max(price) from food_truck);

--view : 가상 테이블
--create table 로 만들어진 정식테이블이 아니고
--기존의 테이블을 이용해서 자료 조회하고 그 조회된 자료를 가지고 만들어진 가상의 테이블
create view find_max_price as select max(price) max_price from food_truck;
select * from find_max_price;

--view 를 잘 이용하면 중첩질의가 더 간략해 짐
select * from food_truck where price=(select * from find_max_price);

--실습1
--1-1.
select food_category.name as "분류명" ,avg(food_truck.price) as "평균 가격"
from food_truck
join food_category on food_truck.foodcode=food_category.code 
group by food_category.name
order by avg(food_truck.price);

--view 이용해서 풀기
create view q1 
as select food_category.name, price
from food_truck
join food_category on food_truck.foodcode=food_category.code;

select name as "분류명", avg(price) as "평균 가격"
from q1
group by name
order by avg(price);

--선생님 1번 풀이.
create view groupby_foodcode_avg 
as select foodcode, avg(price) avgprice from food_truck
group by foodcode;

select name, avgprice
from food_category 
join groupby_foodcode_avg on food_category.code=groupby_foodcode_avg.foodcode;

--1-2.
select food_category.name as "분류명", avg(food_truck.price) as "평균"
from food_truck
join food_category on food_truck.foodcode=food_category.code 
group by food_category.name
order by avg(price) desc;

--실습2
select food_category.name as "분류명", max(food_truck.price) as "가장 비싼 음식의 가격"
from food_truck
join food_category on food_truck.foodcode=food_category.code
group by food_category.name;

create view q2
as select food_truck.name as "음식명", food_category.name as "분류명", max(food_truck.price) as "가장 비싼 음식의 가격"
from food_truck
join food_category on food_truck.foodcode=food_category.code
group by food_category.name, food_truck.name;

select * from q2;
--선생님 2번 풀이
--disticnt : 중복 제거
select distinct food_truck.name foodname, price, food_category.name categoryname
from food_truck
join food_category on food_truck.foodcode=food_category.code;

create view food_category_truck 
as select distinct food_truck.name foodname, price, food_category.name categoryname
from food_truck
join food_category
on food_truck.foodcode=food_category.code;

select * from food_category_truck;


select categoryname, max(price) 
from food_category_truck 
group by categoryname;

create view max_food
as select categoryname, max(price) maxprice 
from food_category_truck
group by  categoryname;

select * from max_food;


select foodname, price, max_food.categoryname 
from max_food 
join food_category_truck 
on max_food.categoryname = food_category_truck.categoryname 
and max_food.maxprice = food_category_truck.price;

--실습3
select food_category.name as 분류명, min(food_truck.price) as "가장 저렴한 음식"
from food_truck
join food_category on food_truck.foodcode=food_category.code
group by food_category.name;

--선생님 3번 풀이
select categoryname, min(price) minprice 
from food_category_truck
group by categoryname;

create view min_food
as select categoryname, min(price) minprice 
from food_category_truck
group by categoryname;

select foodname, price, min_food.categoryname 
from min_food 
join food_category_truck 
on min_food.categoryname=food_category_truck.categoryname 
and min_food.minprice=food_category_truck.price;


--실습4
--분류명과 가격만 따로 빼낸 뷰를 생성
create view food_price
as select food_category.name, price 
from food_truck
join food_category on food_truck.foodcode=food_category.code;

select * from food_price;

--생성한 뷰의 분류명과 가격을 통해 분류명, 평균값을 컬럼으로 가진 뷰를 생성 
--avg(price)를 컬럼으로 만들기 위해서는 컬럼명(avgprice)를 설정해줘야 함
create view food_avg_price
as select name, avg(price) avgprice
from food_price 
group by name;

select * from food_avg_price;

--분류명, 평균값으로 이루어진 뷰에서 분류별 평균에서 최댓값을 가진 분류명 출력
select name, avgprice
from food_avg_price 
where avgprice=(select max(avgprice) from food_avg_price);

--실습5
--분류명, 평균값으로 이루어진 뷰에서 분류별 평균에서 최솟값을 가진 분류명 출력
select * from food_avg_price;

select name,avgprice 
from food_avg_price 
where avgprice=(select min(avgprice) from food_avg_price);