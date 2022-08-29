drop table food;
create table food (
num integer primary key,
name varchar2(50),
price integer);

insert into food(num,name,price) values (1,'불고기',7000);
insert into food(num,name,price) values (2,'김치찌개',6000);
insert into food(num,name,price) values (3,'순두부찌개',9000);
select * from food;

--name과 price 만 나오게 하기
select name as 이름, price as 가격 from food;

--update 문에서 끝에 where을 안 적을 경우 모든 데이터가 다 일괄적으로 바뀜
update food set name='김치+제육' where num=4;

select * from food;


insert into food(num,name,price) values (4,'돈까스',5000);
insert into food(num,name,price) values (5,'우동',3500);
insert into food(num,name) values (6,'김밥');
insert into food(num,name,price) values (7,'오징어덮밥',6000);
insert into food(num,name,price) values (8,'라면',3500);
insert into food(num,name,price) values (9,'라볶이',4500);
insert into food(num,name,price) values (10,'잔치국수',3500);
insert into food(num,name,price) values (11,'쫄면',4000);
insert into food(num,name,price) values (12,'비빔만두',3000);

--2번
select * from food where name like '김치%';

--3번
select * from food where price between 5000 and 7000;

--4번
update food set price=1000 where price is null;

--5번
update food set name='맛있는불고기' where num=1;

--6번
commit;

select * from food;