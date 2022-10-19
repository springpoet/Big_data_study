drop table member;
create table member(
name varchar(100) not null,
id varchar(100) primary key,
pw varchar(100) not null, 
hp varchar(50) unique,
gender varchar(10));

alter table member add hobby varchar(50);

select * from member;