create table Employee (
sabeon number primary key,
name varchar2(20) not null,
age int,
JikGeup varchar2(30),
HP varchar2(13) unique);

insert into Employee values(1,'��ȣ��',30,'����',null);
insert into Employee values(001,'�̵���',34,'����',null);

--int=integer, number : �ε� �Ҽ����� ���� �Ҽ��� ���� ����
insert into Employee(sabeon,name,age,jikgeup) values(2,'����ȣ',50,'ȸ��');
update Employee set age=20,hp='010-xxxx-yyyy'where sabeon=2;
select *from Employee;

select *from Employee order by sabeon; --asc : ��������, ��������
select *from Employee order by age desc; --desc : ��������

commit;
set autocommit on; --�ڵ�Ŀ�Ա�� �ѱ�

select name, jikgeup as ���� from employee;

select * from dual; --dual, ���̵�����
