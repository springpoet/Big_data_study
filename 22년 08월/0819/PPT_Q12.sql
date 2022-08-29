--PPT 1번 페이지
drop table mydbstudent;
create table MyDbStudent (
hakbeon varchar2(10) primary key,
name varchar2(20),
age integer,
HakGwaCode char(3));

drop table mydbhakgwa;
create table MYDbHakgwa (
code char(3) primary key,
name varchar(20));

alter table MyDbStudent add constraint fk_dbstu foreign key(code) references MYDbHakgwa(code);

insert into Mydbhakgwa values('001','컴공');
insert into mydbhakgwa values('002','아동가족학');
--추가 문제
insert into mydbhakgwa values('003','경영');

insert into MyDbStudent values('100001','김일번',20,'002');
insert into MyDbStudent values('100002','최이번',22,'003');
insert into MyDbStudent values('100003','박삼번',25,'001');
insert into MyDbStudent values('100004','이사번',23,'001');
insert into MyDbStudent values('100005','나오번',21,'002');
--추가문제
insert into mydbstudent values('100006','육번',31,'003');
insert into mydbstudent values('100007','칠번',19,'002');
insert into mydbstudent values('100008','팔번',13,'001');
insert into mydbstudent values('100009','구번',28,'003');
insert into mydbstudent values('100010','십번',12,'002');

select * from mydbstudent;
select * from mydbhakgwa;

select mydbstudent.name as 학생명, mydbhakgwa.name as 학과명,hakbeon 학번 from mydbstudent
join mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code;

select avg(age) from mydbstudent; --나이 평균 출력
select hakgwacode, avg(age) from mydbstudent group by hakgwacode;--과별 나이 평균 출력

--학과별 평균 나이를 출력하되 30살 넘는 과만 표시하기
select hakgwacode,avg(age) from mydbstudent group by hakgwacode having avg(age)>20;

select mydbhakgwa.name,avgage 
from mydbhakgwa 
join (select hakgwacode, avg(age) as avgage from mydbstudent group by hakgwacode) a 
on mydbhakgwa.code=a.hakgwacode;

--추가문제
select name as "나이 평균이 높은 학과",avg(age) 
from mydbstudent 
group by name 
having avg(age)=(select max(avg(age)) 
from mydbstudent group by name);

--이름, 학과명, 나이 출력하기
select mydbstudent.name, mydbhakgwa.name, age 
from mydbstudent
join mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code;

--평균이 나이가 가장 많은 학과
--1.학과별 평균나이
select mydbhakgwa.name as "학과",age as "나이"
from mydbstudent
join mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code; 

create view age_by_student as select mydbhakgwa.name, age 
from mydbstudent 
join mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code;

--원본값을 바꾸면 view 값도 바뀜.
select * from age_by_student;

--각 과의 평균을 보는 쿼리
select name, avg(age) 
from age_by_student 
group by name;

--뷰를 또 만든다???????
create view avg_age_major  
as select name, avg(age) avgage 
from age_by_student 
group by name;

--제일 높은 평균 값을 출력
select max(avgage) from avg_age_major;

--제일 높은 평균 값을 가진 과를 출력
select name 
from avg_age_major
where avgage=(select max(avgage)from avg_age_major);


select * from mydbstudent;
-- 제일 연장자를 뽑는 방법(중첩질의)

select * from mydbstudent 
where age = (select max(age) from mydbstudent);

select mydbhakgwa.name, avgage 
from mydbhakgwa 
join (select hakgwacode, avg(age) avgage 
from mydbstudent 
group by hakgwacode) a 
on mydbhakgwa.code = a.hakgwacode;

-- 만약 view 생성 안 되면 system 계정으로 접속해서 아래 쿼리를 실행한다.
--grant create view to c##scott;

create view max_age as(select max(age) maxAge from mydbstudent);
select *from max_age;
--가상 테이블을 만듬
--이러한 가상 테이블을 뷰라고 한다.
--중첩질의 등에서 쓰기위해 많이 활용
--select 문 등이 매우 복잡해 질 경우 단순화할 때 많이 쓰임

select *from mydbstudent where age=(select * from max_age);

--만약 최 연장자의 학과를 출력하려고 한다면?
create view max_age_student as select * 
from mydbstudent where age=(select * from max_age);
select mydbhakgwa.name from max_age_student join mydbhakgwa on 
max_age_student.hakgwacode = mydbhakgwa.code;
--학과 하나 추가하고, 평균 나이가 가장 많은 학과 찾기
select *from max_age_student;
delete from max_age_student;
select * from mydbstudent;
select * from max_age;
--delete from max_age;

--PPT 2번 페이지
drop table mykbstudent;
create table mykbstudent (
name varchar2(30),
age char(2),
hakbeon char(10) primary key,
hakgwacode char(3),
enterdate date);

drop table hakgwa;
create table hakgwa (
name varchar2(30),
code char(3) primary key,
enterdate timestamp default sysdate);
--enterdate date 로 했으나 위처럼 하는게 맞다고 함. date로도 할 수는 있음

alter table mykbstudent add constraint fk_mykb foreign key(hakgwacode) references hakgwa(code);
--alter table mykbstudent add constraint fk_mykb2 foreign key(enterdate) references hakgwa(date);


insert into hakgwa values('인공지능','001','2022-08-19');
insert into hakgwa values('제과제빵','002','2022-05-22');

insert into mykbstudent values('김일번','20','1234567890','001');
insert into mykbstudent values('최이번','22','2345678901','002','2022-08-12');
insert into mykbstudent values('박삼번','23','3456789012','002','2022-07-11');

select nvl(enterdate,sysdate) from mykbstudent;
select * from mykbstudent;

select mykbstudent.name as 이름, mykbstudent.hakbeon as 학번, hakgwa.name from mykbstudent 
join hakgwa on mykbstudent.hakgwacode=hakgwa.code;

select mykbstudent.name as 이름, hakgwa.name as 특정학과 from mykbstudent
join hakgwa on mykbstudent.hakgwacode=hakgwa.code where hakgwa.name='제과제빵';



