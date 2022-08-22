--PPT 1�� ������
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

insert into Mydbhakgwa values('001','�İ�');
insert into mydbhakgwa values('002','�Ƶ�������');
--�߰� ����
insert into mydbhakgwa values('003','�濵');

insert into MyDbStudent values('100001','���Ϲ�',20,'002');
insert into MyDbStudent values('100002','���̹�',22,'003');
insert into MyDbStudent values('100003','�ڻ��',25,'001');
insert into MyDbStudent values('100004','�̻��',23,'001');
insert into MyDbStudent values('100005','������',21,'002');
--�߰�����
insert into mydbstudent values('100006','����',31,'003');
insert into mydbstudent values('100007','ĥ��',19,'002');
insert into mydbstudent values('100008','�ȹ�',13,'001');
insert into mydbstudent values('100009','����',28,'003');
insert into mydbstudent values('100010','�ʹ�',12,'002');

select * from mydbstudent;
select * from mydbhakgwa;

select mydbstudent.name as �л���, mydbhakgwa.name as �а���,hakbeon �й� from mydbstudent
join mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code;

select avg(age) from mydbstudent; --���� ��� ���
select hakgwacode, avg(age) from mydbstudent group by hakgwacode;--���� ���� ��� ���

--�а��� ��� ���̸� ����ϵ� 30�� �Ѵ� ���� ǥ���ϱ�
select hakgwacode,avg(age) from mydbstudent group by hakgwacode having avg(age)>20;

select mydbhakgwa.name,avgage 
from mydbhakgwa 
join (select hakgwacode, avg(age) as avgage from mydbstudent group by hakgwacode) a 
on mydbhakgwa.code=a.hakgwacode;

--�߰�����
select name as "���� ����� ���� �а�",avg(age) 
from mydbstudent 
group by name 
having avg(age)=(select max(avg(age)) 
from mydbstudent group by name);

--�̸�, �а���, ���� ����ϱ�
select mydbstudent.name, mydbhakgwa.name, age 
from mydbstudent
join mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code;

--����� ���̰� ���� ���� �а�
--1.�а��� ��ճ���
select mydbhakgwa.name as "�а�",age as "����"
from mydbstudent
join mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code; 

create view age_by_student as select mydbhakgwa.name, age 
from mydbstudent 
join mydbhakgwa on mydbstudent.hakgwacode=mydbhakgwa.code;

--�������� �ٲٸ� view ���� �ٲ�.
select * from age_by_student;

--�� ���� ����� ���� ����
select name, avg(age) 
from age_by_student 
group by name;

--�並 �� �����???????
create view avg_age_major  
as select name, avg(age) avgage 
from age_by_student 
group by name;

--���� ���� ��� ���� ���
select max(avgage) from avg_age_major;

--���� ���� ��� ���� ���� ���� ���
select name 
from avg_age_major
where avgage=(select max(avgage)from avg_age_major);


select * from mydbstudent;
-- ���� �����ڸ� �̴� ���(��ø����)

select * from mydbstudent 
where age = (select max(age) from mydbstudent);

select mydbhakgwa.name, avgage 
from mydbhakgwa 
join (select hakgwacode, avg(age) avgage 
from mydbstudent 
group by hakgwacode) a 
on mydbhakgwa.code = a.hakgwacode;

-- ���� view ���� �� �Ǹ� system �������� �����ؼ� �Ʒ� ������ �����Ѵ�.
--grant create view to c##scott;

create view max_age as(select max(age) maxAge from mydbstudent);
select *from max_age;
--���� ���̺��� ����
--�̷��� ���� ���̺��� ���� �Ѵ�.
--��ø���� ��� �������� ���� Ȱ��
--select �� ���� �ſ� ������ �� ��� �ܼ�ȭ�� �� ���� ����

select *from mydbstudent where age=(select * from max_age);

--���� �� �������� �а��� ����Ϸ��� �Ѵٸ�?
create view max_age_student as select * 
from mydbstudent where age=(select * from max_age);
select mydbhakgwa.name from max_age_student join mydbhakgwa on 
max_age_student.hakgwacode = mydbhakgwa.code;
--�а� �ϳ� �߰��ϰ�, ��� ���̰� ���� ���� �а� ã��
select *from max_age_student;
delete from max_age_student;
select * from mydbstudent;
select * from max_age;
--delete from max_age;

--PPT 2�� ������
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
--enterdate date �� ������ ��ó�� �ϴ°� �´ٰ� ��. date�ε� �� ���� ����

alter table mykbstudent add constraint fk_mykb foreign key(hakgwacode) references hakgwa(code);
--alter table mykbstudent add constraint fk_mykb2 foreign key(enterdate) references hakgwa(date);


insert into hakgwa values('�ΰ�����','001','2022-08-19');
insert into hakgwa values('��������','002','2022-05-22');

insert into mykbstudent values('���Ϲ�','20','1234567890','001');
insert into mykbstudent values('���̹�','22','2345678901','002','2022-08-12');
insert into mykbstudent values('�ڻ��','23','3456789012','002','2022-07-11');

select nvl(enterdate,sysdate) from mykbstudent;
select * from mykbstudent;

select mykbstudent.name as �̸�, mykbstudent.hakbeon as �й�, hakgwa.name from mykbstudent 
join hakgwa on mykbstudent.hakgwacode=hakgwa.code;

select mykbstudent.name as �̸�, hakgwa.name as Ư���а� from mykbstudent
join hakgwa on mykbstudent.hakgwacode=hakgwa.code where hakgwa.name='��������';



