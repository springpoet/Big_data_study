create table samsungpeople (
i_d integer primary key,
name varchar(20),
boss_id integer);

insert into samsungpeople values (1,'이건희',1);
insert into samsungpeople values (2,'홍라희',2);
insert into samsungpeople values (3,'이부진',1);
insert into samsungpeople values (4,'이재용',1);
insert into samsungpeople values (5,'신라호텔',3);
insert into samsungpeople values (6,'삼성전자',4);
insert into samsungpeople values (7,'수원삼성',4);
insert into samsungpeople values (8,'삼성라이온즈',4);

select * from samsungpeople;

select a.name as "NAME", b.name as "BOSS" 
from samsungpeople a 
join samsungpeople b on a.boss_id=b.i_d;
--inner join 써도 됨

select a.name as "NAME", b.name as "BOSS" 
from samsungpeople a 
join samsungpeople b on a.i_d=b.boss_id;