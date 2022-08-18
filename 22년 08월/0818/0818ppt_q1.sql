
create table singer (
i_d integer primary KEY,
name varchar(50),
hit_song_id integer);

create table song (
i_d integer primary key,
title varchar(50),
price integer);

insert into singer(i_d,name) values (1,'이무진');
insert into singer(i_d,name) values (2,'세카이노오와리');
insert into singer(i_d,name) values (3,'유희열');

insert into song values(1,'dragon night',10000);
insert into song values(2,'신호등',9000);
insert into song values(3,'let it be',8000);
insert into song values(4,'bad guy',7000);
insert into song values(5,'분홍 신발',5000);

alter table singer add constraint fk_singer foreign key(hit_song_id) references song(i_d);

update singer set hit_song_id=2 where i_d=1;
update singer set hit_song_id=1 where i_d=2;

select * from singer;

select name, title from song join singer on song.i_d=singer.hit_song_id;
--join 기준 왼쪽인 song의 목록을 다 출력함
select name, title from song right join singer on song.i_d=singer.hit_song_id;
--joing 기준 오른쪽인 singer의 목록을 다 출력함
select name, title from song left join singer on song.i_d=singer.hit_song_id;