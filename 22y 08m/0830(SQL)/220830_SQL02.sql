--프로시저
--drop procedure add_person;
create or replace procedure add_person(
mynum in integer,
myname varchar2,
mypn varchar2)
is begin 
--insert 문 다수 입력 가능
insert into simple_test_table values(mynum,myname,mypn);
end add_person;