--프로시저
--drop procedure add_person;
--add_person이 없으면 create하고 없으면 replace(덮어쓰기) 함
--컬럼 뒤에 in을 붙여줘야함 (안적을 경우 in 이 디폴트 값)
create or replace procedure add_person(
mynum in integer,
myname varchar2,
mypn varchar2)
is begin 
--begin 뒤에 띄어쓰기 한번 해야 함
--insert 문 다수 입력 가능
insert into simple_test_table values(mynum,myname,mypn);
end add_person;
/
exec add_person(3,'김보규','010-7777-7777');

select * from simple_test_table;

--삭제
create or replace procedure delete_person(
mynum in integer)
is begin delete from simple_test_table where num=mynum;
end delete_person;

--num=3인 데이터 삭제
exec delete_person(3);

/

--update
--drop procedure update_person;
create procedure update_person(
mynum in integer,
changename varchar2)
is tempvar varchar2(20):='학생';
begin tempvar := changename || tempvar;
update simple_test_table set name=tempvar 
where num=mynum;
end update_person;
--오라클의 ||는 앞뒤 두 문장을 이어붙인다는 뜻
/
select * from simple_test_table;

exec update_person(1,'최호준');
--트랜젝션 : db의 상태를 변화시키는 작업 단위 , insert, update, delete. drop은 해당 안됨
/
--select procedure는 cursor라는 걸 반환함
--cursor를 통해 결과를 출력
--cursor : sql 결과를 저장하는 메모리의 위치를 가리키는 포인터
create or replace procedure person_select(
myname in varchar2,
o_cursor out sys_refcursor )
is 
begin open o_cursor
for
select num,name,phone_number 
from simple_test_table
where name=myname;
exception when others then dbms_output.put_line('sql error : '|| sqlerrm);
end person_select;
--dbms_output.put_line에서 에러가 뜰 경우
--새 sql창에서 set serveroutput on; 을 해야함
/

select * from simple_test_table;

exec add_person(5,'오성근','010-5242-4439');
exec add_person(6,'육성근','010-6242-4439');
exec add_person(7,'칠성근','010-7242-4439');

--select 프로시저 호출
var o_cursor refcursor 
exec person_select('육성근', :o_cursor)
print o_cursor;

/

--아주 심플한 함수
--djlee라는 텍스트 반환하느 함수
create or replace function mytest_func return varchar is
v_test varchar2(100);
begin v_test :='djlee';
return v_test;
end;

/
select mytest_func() from dual; --임시테이블, 함수 기능 테스트 시 쓰임

--djlee의 이름을 가진 사람을 찾는 쿼리
select * from simple_test_table where name=mytest_func();

select * from simple_test_table;

/
--drop function func_getperson;
create or replace function func_getperson(v_num int)
return varchar 
is 
v_name varchar(100);
begin
select name into v_name 
from simple_test_table 
where num=v_num;
return v_name;
exception when others then
dbms_output.put_line('exception occurred!('||sqlcode||'):'||sqlerrm);
return '';
end;

/
select func_getperson(1)from dual;
select mytest_func() from dual;

--프로시저 안에 반환값 있는 함수 넣을 수 있음
exec add_person(50,func_getperson(1),'010-9999-9999');
exec add_person(100,mytest_func(),'010-2299-2929');

select * from simple_test_table;
