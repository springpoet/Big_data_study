--2번

drop table mykbstudent2;
create table mykbstudent2 (
name varchar2(30),
age char(2),
hakbeon varchar(10) primary key,
code char(3),
regdate date default sysdate);

drop table mykbmajor2;
create table mykbmajor2 (
name varchar2(30),
code char(3) primary key,
regdate date default sysdate);

alter table mykbstudent2 add constraint fk_mystu2 foreign key(code) references mykbmajor2(code);

insert into mykbmajor2(name,code) values ('경영','001');
insert into mykbmajor2 values ('세무','002','2000-01-01');
select * from mykbmajor2;

insert into mykbstudent2 values ('일번',20,'00001','001','2014-04-13');
insert into mykbstudent2 values ('이번',22,'00002','002','2016-04-01');
insert into mykbstudent2(name,age,hakbeon,code) values ('삼번',16,'00003','001');
select * from mykbstudent2;

select mykbstudent2.name as "학생명", mykbstudent2.hakbeon as "학번", mykbmajor2.name as "학과명"
from mykbstudent2 
join mykbmajor2 on mykbstudent2.code=mykbmajor2.code;

select mykbstudent2.name as "학생명", mykbstudent2.hakbeon as "학번", mykbmajor2.name
from mykbstudent2 
join mykbmajor2 on mykbstudent2.code=mykbmajor2.code 
where mykbmajor2.name='경영';
