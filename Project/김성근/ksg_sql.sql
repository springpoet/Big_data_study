--테이블 선언
--drop table flight;
create table flight(
flightcode int primary key,
flightcompany varchar2(30),
departure int,
arrived int,
dated date);

--drop table passenger;
create table passenger(
name varchar2(30),
regist_num integer primary key,
gender varchar2(30),
phone_num varchar2(30),
flightnum int);

--drop table country;
create table country(
code int primary key,
name varchar2(30));

--drop table lodge;
create table lodge(
code int primary key,
name varchar2(30),
price int,
country int);

--외래키 설정
alter table flight add constraint fk_departure foreign key(departure) references country(code);
alter table flight add constraint fk_arrived foreign key(arrived) references country(code);

alter table passenger add constraint fk_flightnum foreign key(flightnum) references flight(flightcode);

alter table lodge add constraint fk_country foreign key(country) references country(code);

--insert문 입력.
--country.
insert into country values(001,'한국');
insert into country values(002,'일본');
insert into country values(003,'미국');
insert into country values(004,'프랑스');
insert into country values(005,'영국');
insert into country values(006,'베트남');

--flight.
insert into flight values(707001, '대한항공', 001, 002, '2022-08-30');
insert into flight values(707002, '대한항공', 001, 003, '2022-08-30');
insert into flight values(707003, '대한항공', 001, 004, '2022-08-30');
insert into flight values(707004, '대한항공', 001, 005, '2022-08-30');
insert into flight values(707005, '대한항공', 001, 006, '2022-08-30');
insert into flight values(321001, '아시아나', 001, 002, '2022-08-30');
insert into flight values(321002, '아시아나', 001, 003, '2022-08-30');
insert into flight values(321003, '아시아나', 001, 006, '2022-08-30');
insert into flight values(707101, '티웨이', 001, 002, '2022-08-30');
insert into flight values(707201, '진에어', 001, 006, '2022-08-30');
insert into flight values(707301, '제주항공', 001, 002, '2022-08-30');

--passenger
insert into passenger values('김성근',960116,'남자','010-5242',321001);
insert into passenger values('이지훈',781203,'남자','010-3134',321001);
insert into passenger values('강현정',921021,'여자','010-1234',321001);
insert into passenger values('박민호',830204,'남자','010-5678',321001);
insert into passenger values('고우리',680811,'여자','010-7891',321001);
insert into passenger values('나영석',750212,'남자','010-5242',321001);
insert into passenger values('정필돈',990121,'남자','010-5242',321001);
insert into passenger values('노효원',850828,'여자','010-5242',321001);
insert into passenger values('길잡이',921011,'남자','010-5242',321001);
insert into passenger values('정우진',900417,'남자','010-5242',321001);
insert into passenger values('전진',850230,'남자','010-5242',321001);
insert into passenger values('송현재',950305,'남자','010-5242',321001);
insert into passenger values('양세준',821011,'여자','010-5242',321001);
insert into passenger values('구영호',910431,'남자','010-5242',321001);