create table Employee(
name varchar(100) ,
sabeon int primary key,
part varchar(100));

insert into Employee values('김성근',1,'영업팀');
insert into Employee values('장태연',2,'경영팀');
insert into Employee values('안서준',3,'인사팀');

select * from Employee;

-- 데이터베이스 선택하는것.
-- 내가 작업하고자 하는 데이터베이스를 선택해주자!
use sys;
use hellojavaweb;
