--프로시저 만들 때는 일반 sql 문과 다른 sql 파일에서 생성해야 함
--데이터에 접근하는 코드에 접근한다 라고 생각하면 됨
--굳~이 같은 sql파일에 넣고 싶다면 / 를 통해 구분

--drop table simple_test_table;
create table simple_test_table(
num integer primary key,
name varchar2(30) not null,
phone_number varchar2(20) unique);

insert into simple_test_table values(1,'이용희',null);
insert into simple_test_table values(2,'이동준','010-2940-1613');

select * from simple_test_table;
