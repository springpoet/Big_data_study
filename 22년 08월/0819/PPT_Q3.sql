--drop table book;
create table book (
bookid integer primary key,
bookname varchar2(40),
publisher varchar2(40),
price integer);

--drop table customer;
create table customer (
custid integer primary key,
name varchar2(40),
address varchar2(50),
phone varchar2(20));

insert into book values(1,'축구의 역사','굿스포츠',7000);
insert into book values(2,'축구아는 여자','나무수',13000);
insert into book values(3,'축구의 이해','대하미디어',22000);
insert into book values(4,'골프 바이블','대한미디어',35000);
insert into book values(5,'피겨 교본','굿스포츠',8000);
insert into book values(6,'역도 단계별기술','굿스포츠',6000);
insert into book values(7,'야구의 추억','이상미디어',20000);
insert into book values(8,'야구를 부탁해','이상미디어',13000);
insert into book values(9,'올림픽이야기','삼성당',7500);
insert into book values(10,'Olympic Champions','pearson',13000);

insert into customer values(1,'박지성','영국 맨체스타','000-5000-0001');
insert into customer values(2,'김연아','대한민국 서울','000-6000-0001');
insert into customer values(3,'장미란','대한민국 강원도','000-7000-0001');
insert into customer values(4,'추신수','미국 클리블랜드','000-8000-0001');
insert into customer values(5,'박세리','대한민국 대전','');

--drop table orders;
create table orders (
orderid integer primary key,
custid integer,
bookid integer,
saleprice integer,
orderdate date);

alter table orders add constraint fk_order foreign key(custid) 
references customer(custid);

alter table orders add constraint fk_order2 foreign key(bookid) 
references book(bookid);

insert into orders values(1,1,1,7000,'2014-07-01');
insert into orders values(2,1,3,22000,'2014-07-03');
insert into orders values(3,2,5,8000,'2014-07-03');
insert into orders values(4,3,6,6000,'2014-07-04');
insert into orders values(5,4,7,20000,'2014-07-05');
insert into orders values(6,1,2,13000,'2014-07-07');
insert into orders values(7,4,8,13000,'2014-07-07');
insert into orders values(8,3,10,13000,'2014-07-08');
insert into orders values(9,2,10,13000,'2014-07-09');
insert into orders values(10,3,8,13000,'2014-07-10');


select * from orders;

select orders.orderid as 주문번호, customer.name as 주문자명, 
        book.bookname as 책이름,orders.saleprice as 책가격, orderdate
from orders 
join book on orders.bookid=book.bookid 
join customer on orders.custid=customer.custid
order by orders.orderid;
--order by를 쓰면 기본 오름차순으로 정렬.
--orders.orderid로 적어서 5개만 출력됐음.
--원래는 아래처럼이었다.
select orders.orderid as 주문번호, customer.name as 주문자명, 
        book.bookname as 책이름,orders.saleprice as 책가격, orderdate
from orders 
join book on orders.bookid=book.bookid 
join customer on orders.orderid=customer.custid
order by orders.orderid;
