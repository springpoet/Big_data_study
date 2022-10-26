drop table mydbstudent2;
create table mydbstudent2 (
hakbeon varchar(30) primary key,
name varchar(20),
age int,
hakgwacode char(3));

drop table mydbhakgwa2;
create table mydbhakgwa2 (
code char(3) primary key,
name varchar(30));

alter table mydbstudent2 add constraint fk_dbstu2 foreign key(hakgwacode) references mydbhakgwa2(code);

insert into mydbhakgwa2 values ('001','경영학과');
insert into mydbhakgwa2 values ('002','세무학과');

insert into mydbstudent2 values ('abc001','일번',21,'001');
insert into mydbstudent2 values ('abc002','이번',27,'002');
insert into mydbstudent2 values ('abc003','삼번',24,'002');
insert into mydbstudent2 values ('abc004','사번',26,'001');
insert into mydbstudent2 values ('abc005','오번',23,'001');

SELECT  MYDBHAKGWA2.NAME AS "학과명",MYDBSTUDENT2.NAME AS "학생 이름", AGE AS "학생 나이", MYDBSTUDENT2.HAKBEON
FROM MYDBSTUDENT2 
JOIN MYDBHAKGWA2 ON MYDBSTUDENT2.HAKGWACODE=MYDBHAKGWA2.CODE;

select mydbstudent2.hakbeon as "학번", mydbstudent2.name as "학생명", mydbhakgwa2.name
from mydbstudent2
join mydbhakgwa2 on mydbstudent2.hakgwacode=mydbhakgwa2.code
order by hakgwacode;

--전체 나이 평균 구하기
select avg(age) from mydbstudent2;

--특정학과의 평균만 구하기
select avg(age) 
from mydbstudent2
where hakgwacode='002';

--과별로 평균 구하기
--select mydbhakgwa2.name as "학과명", mydbstudent2.age as "나이"
--from mydbstudent2
--join mydbhakgwa2 on mydbstudent2.hakgwacode=mydbhakgwa2.code;
select name as "나이 평균이 높은 학과",avg(age) 
from mydbstudent2 
group by name 
having avg(age)=(select max(avg(age)) 
from mydbstudent2 group by name);

create view age_by_student2 as select mydbhakgwa2.name, age 
from mydbstudent2 
join mydbhakgwa2 on mydbstudent2.hakgwacode=mydbhakgwa2.code;

--원본값을 바꾸면 view 값도 바뀜.
select * from age_by_student2;

--각과의 평균을 보기
select name, avg(age)
from age_by_student2
group by name;

