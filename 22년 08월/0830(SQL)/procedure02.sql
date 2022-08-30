--프로시저
--drop procedure add_person;
--add_person이 없으면 create하고 없으면 replace(덮어쓰기) 함
create or replace procedure add_person(
mynum in integer,
myname varchar2,
mypn varchar2)
is begin 
--begin 뒤에 띄어쓰기 한번 해야 함
--insert 문 다수 입력 가능
insert into simple_test_table values(mynum,myname,mypn);
end add_person;