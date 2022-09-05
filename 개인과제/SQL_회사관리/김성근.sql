--테이블 선언
create table employee(
e_code number primary key,
e_name varchar2(30),
e_depart number,
e_position varchar2(30),
e_salary number,
e_home number);

create table department(
d_code number primary key,
d_name varchar2(30),
d_floor number);

create table hometown(
h_code number primary key,
h_name varchar2(30));

--외래키 설정
alter table employee add constraint fk_depart foreign key(e_depart) references department(d_code);
alter table employee add constraint fk_home foreign key(e_home) references hometown(h_code);

--insert 실행
insert into department values(01,'개발팀',3);
insert into department values(02,'영업팀',4);
insert into department values(03,'총무팀',6);
insert into department values(04,'인사팀',5);

select * from department;

insert into hometown values(4,'대구');
insert into hometown values(1,'서울');
insert into hometown values(2,'부산');
insert into hometown values(3,'울산');
insert into hometown values(5,'경기');
insert into hometown values(6,'경북');

select * from hometown;

insert into employee values(1,'김성근',01,'대리',3300,4);
insert into employee values(2,'어수일',02,'대리',3400,4);
insert into employee values(3,'안현태',04,'팀장',4200,4);
insert into employee values(4,'최규민',04,'팀장',4300,1);
insert into employee values(5,'조성연',04,'사원',2800,3);
insert into employee values(6,'박민주',02,'팀장',4500,6);
insert into employee values(7,'최선규',03,'팀장',4600,3);
insert into employee values(8,'김유경',03,'사원',2900,5);
insert into employee values(9,'한동혁',02,'사원',2800,6);
insert into employee values(10,'박현호',03,'대리',3400,2);
insert into employee values(11,'곽준섭',01,'사원',2800,1);
insert into employee values(12,'이상목',01,'팀장',4800,4);

select * from employee;

--update 실행
update employee set e_home=2 where e_code=12;

select * from employee;

--delete 실행
delete from employee where e_code=11;

select * from employee;

--외래키 작동 확인
select e_name as 사원명, department.d_name as 부서명, e_position as 직급, hometown.h_name as 고향
from employee
join department on employee.e_depart=department.d_code
join hometown on employee.e_home=hometown.h_code;

--group by 활용 (직급 별 총 급여, 평균 연봉, 직급 별 인원 수 확인(평균 연봉이 3600 이상인 직급만 출력))
select department.d_name as 직급, sum(e_salary) as "총 급여", avg(e_salary) as "평균 급여", count(*)||'명' as "인원 수"
from employee
join department on employee.e_depart=department.d_code
group by department.d_name
having avg(e_salary)>3600;




