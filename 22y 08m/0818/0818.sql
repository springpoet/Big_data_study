create sequence myrow;
create sequence mysqe;

create table song (id number primary key, title varchar2(100),price number);

create table singer (id number, name varchar2(100),hit_song_id number,
foreign key(hit_song_id) references song(id));

insert into song values (myrow.nextval,'dragon night', 10000);
insert into song values (myrow.nextval,'��ȣ��', 9000);
insert into song values (myrow.nextval,'let it be', 8000);
insert into song values (myrow.nextval,'bad guy', 7000);
insert into song values (myrow.nextval,'��ȫ �Ź�', 5000);

select * from song;

insert into singer(id,name) values(mysqe.nextval,'�̹���');
insert into singer(id,name) values(mysqe.nextval,'��ī�̳� ���͸�');
insert into singer(id,name) values(mysqe.nextval,'����');

select * from singer;

update singer set hit_song_id=2 where id=1;
update singer set hit_song_id=1 where id=2;

select name, title from song join singer on song.id=singer.hit_song_id;