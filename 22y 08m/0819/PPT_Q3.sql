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

insert into book values(1,'�౸�� ����','�½�����',7000);
insert into book values(2,'�౸�ƴ� ����','������',13000);
insert into book values(3,'�౸�� ����','���Ϲ̵��',22000);
insert into book values(4,'���� ���̺�','���ѹ̵��',35000);
insert into book values(5,'�ǰ� ����','�½�����',8000);
insert into book values(6,'���� �ܰ躰���','�½�����',6000);
insert into book values(7,'�߱��� �߾�','�̻�̵��',20000);
insert into book values(8,'�߱��� ��Ź��','�̻�̵��',13000);
insert into book values(9,'�ø����̾߱�','�Ｚ��',7500);
insert into book values(10,'Olympic Champions','pearson',13000);

insert into customer values(1,'������','���� ��ü��Ÿ','000-5000-0001');
insert into customer values(2,'�迬��','���ѹα� ����','000-6000-0001');
insert into customer values(3,'��̶�','���ѹα� ������','000-7000-0001');
insert into customer values(4,'�߽ż�','�̱� Ŭ������','000-8000-0001');
insert into customer values(5,'�ڼ���','���ѹα� ����','');

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

select orders.orderid as �ֹ���ȣ, customer.name as �ֹ��ڸ�, 
        book.bookname as å�̸�,orders.saleprice as å����, orderdate
from orders 
join book on orders.bookid=book.bookid 
join customer on orders.custid=customer.custid
order by orders.orderid;
--order by�� ���� �⺻ ������������ ����.
--orders.orderid�� ��� 5���� ��µ���.
--������ �Ʒ�ó���̾���.
select orders.orderid as �ֹ���ȣ, customer.name as �ֹ��ڸ�, 
        book.bookname as å�̸�,orders.saleprice as å����, orderdate
from orders 
join book on orders.bookid=book.bookid 
join customer on orders.orderid=customer.custid
order by orders.orderid;
