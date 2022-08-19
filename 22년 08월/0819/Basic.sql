--�� �ڵ尡 SQL���� ��~�� �⺻���� �ڵ�
--��� �����͸� ��ȸ�� �� �� �ִ� �ڵ�
--��Ʈ�� ����=�����ϱ�
SELECT * FROM STUDENT;

--where ���̰� ���� ���ϴ� ���ǵ��� ������ �ȴ�.
SELECT * FROM STUDENT WHERE AGE>27;

--SQL���� ���ǹ����� ������ üũ�� �� =���� �Ѵ�.
SELECT * FROM STUDENT WHERE AGE>25 AND HAKBEON='002';

INSERT INTO STUDENT (HAKBEON, NAME, AGE) VALUES ('1','�̵���',34);

--SQL�� �ٽ�
--CRUD
--select = read : ��ȸ
--insert = create : ����
--update = update : ����
--delete = delete : ����

--��ȸ
SELECT * FROM STUDENT;

--�й� 1�� ���� ����� �̸��� ���¿����� �ٲ�
UPDATE STUDENT SET NAME='���¿�' WHERE HAKBEON='1';

--��ȸ
SELECT * FROM STUDENT;

--�� ����
--delete from student;

--30�� �ʰ��ϴ� ����� �� ����
DELETE FROM STUDENT WHERE AGE>30;

COMMIT; --�߰� ���� �Ҷ����� �� ������ ������ �ִ� ��

--���� ���������� Ŀ���� �������� ���ư� �� �ִ�.
ROLLBACK;

--delete : �ȿ� ������ ����    
--drop, truncate : ���̺� ��ü�� ���� ������ �ȵ�
DELETE FROM STUDENT;

COMMIT;

SELECT * FROM STUDENTS WHERE AGE>=10 AND AGE<20;

DELETE FROM STUDENTS WHERE HAKBEON=12;

UPDATE STUDENTS SET AGE=20 WHERE NAME='����ȣ';

COMMIT;

SELECT * FROM STUDENTS;

INSERT INTO LIBRARY (BOOKNUMBER,BOOKNAME,BOOKWRITER) VALUES (1,'å�ϳ�','��������');

SELECT * FROM LIBRARY;

UPDATE LIBRARY SET BOOKWRITER='��������' WHERE BOOKNUMBER=1;
COMMIT;


UPDATE LIBRARY SET BOOKWRITER='������' WHERE BOOKWRITER='��������';
INSERT INTO LIBRARY (BOOKNUMBER, BOOKNAME, BOOKWRITER) VALUES (2,'å��','�輺��');
DELETE LIBRARY WHERE BOOKNUMBER=1;
commit;
SELECT * FROM LIBRARY;

create table stu (
name varchar2(20),
age number,
hakbeon varchar2(20) primary key);

insert into stu (hakbeon, name, age) values ('11','�ȼ���',19);
insert into stu (hakbeon, name, age) values ('10','�̵���',17);
insert into stu (hakbeon, name, age) values ('12','������',15);
insert into stu (hakbeon, name, age) values ('13','�̹���',16);
insert into stu (hakbeon, name, age) values ('14','������',33);
commit;
select * from stu;
select * from stu where age>=10 and age<20;
select name from stu where age>9 and age<20;
--name �׸��� "�� ��" ���� �ٲ�
select name as "�� ��" from stu where age>9 and age<20; 
select name "�� ��" from stu where age>9 and age<20;

insert into stu (hakbeon, name, age) values ('15','��ȣ��',40);
commit;

select * from stu;

delete from stu where name='��ȣ��';
commit;
select * from stu;
insert into stu (hakbeon, name, age) values ('16','����ȣ',28);
commit;
update stu set age=20 where name='����ȣ';
commit;
select * from stu;

--���踦 ǥ���Կ� �־ �ſ� �߿��� ����� fk(�ܷ�Ű)�� �� ��
--2�� �̻��� ���̺��� �ϳ��� ���̰� ���ִ� join�� ���� �ٷﺼ ��

create table major (name varchar(20), code char(3) primary key);

insert into major values('�İ�','001');
insert into major values('ȭ��','301');
--�а��ڵ� �߰��� �� major ���̺��� code�� �ڷ���, ũ�Ⱑ ��� �¾ƾ���
alter table stu add (code char(3));
alter table stu add constraint fk_stu foreign key(code) references major(code);
select * from stu;

insert into stu values('�輺��',28,'17','001');
commit;

select * from stu;
select * from major;
select stu.name "�л���" ,major.name "�а���" ,hakbeon from stu join major on stu.code=major.code;

--char�� varchar �� �� ���ڿ�
--char�� ũ�Ⱑ ����, varchar�� ũ�Ⱑ ����
--char(20) : ������ 20����Ʈ ũ�� �Ҵ�, varchar(20) : �ִ� 20����Ʈ �Ҵ�

--2�� ����
insert into major values('�濵','005');
insert into stu values('�̰濵',60,'18','005');
insert into stu values('������',30,'19','005');
select * from stu;

--3�� ����
select stu.name "�л���", stu.age "����" from stu where stu.code='001';

--4�� ����
update stu set age=20 where code='301';
select stu.name"�л���", stu.age"����",stu.code from stu where stu.code='301';

--5�� ����
delete from stu where name like '��%';
select * from stu;

create table grade(hakjum varchar(20), grade_alpah varchar(20) primary key);

alter table stu add(sungjuk varchar(20));
alter table stu add constraint fk_stu foreign key(sungjuk) references grade_alpha(hakjum);

insert into grade values ('4.5','A+');
insert into grade values ('3.5','B+');
insert into grade values ('3.5','C+');
insert into grade values ('2.5','D+');
insert into grade values ('0.0','F');

select stu.name "�л��̸�", grade.sungjuk "����" from stu join grade on stu.sungjuk=grade.hakjum;



