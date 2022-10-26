create sequence myrow;
create sequence mysqe;

create table song (id number primary key, title varchar2(100),price number);

create table singer (id number, name varchar2(100),hit_song_id number,
foreign key(hit_song_id) references song(id));

insert into song values (myrow.nextval,'dragon night', 10000);
insert into song values (myrow.nextval,'신호등', 9000);
insert into song values (myrow.nextval,'let it be', 8000);
insert into song values (myrow.nextval,'bad guy', 7000);
insert into song values (myrow.nextval,'분홍 신발', 5000);

select * from song;

insert into singer(id,name) values(mysqe.nextval,'이무진');
insert into singer(id,name) values(mysqe.nextval,'세카이노 오와리');
insert into singer(id,name) values(mysqe.nextval,'유희열');

select * from singer;

update singer set hit_song_id=2 where id=1;
update singer set hit_song_id=1 where id=2;

select name, title from song join singer on song.id=singer.hit_song_id;