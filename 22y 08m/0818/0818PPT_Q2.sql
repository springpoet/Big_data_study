create table samsungpeople (
i_d integer primary key,
name varchar(20),
boss_id integer);

insert into samsungpeople values (1,'�̰���',1);
insert into samsungpeople values (2,'ȫ����',2);
insert into samsungpeople values (3,'�̺���',1);
insert into samsungpeople values (4,'�����',1);
insert into samsungpeople values (5,'�Ŷ�ȣ��',3);
insert into samsungpeople values (6,'�Ｚ����',4);
insert into samsungpeople values (7,'�����Ｚ',4);
insert into samsungpeople values (8,'�Ｚ���̿���',4);

select * from samsungpeople;

select a.name as "NAME", b.name as "BOSS" 
from samsungpeople a 
join samsungpeople b on a.boss_id=b.i_d;
--inner join �ᵵ ��

select a.name as "NAME", b.name as "BOSS" 
from samsungpeople a 
join samsungpeople b on a.i_d=b.boss_id;