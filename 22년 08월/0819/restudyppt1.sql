create mydbstudent2 (
hakbeon varchar(30) primary key,
name varchar(20),
age int,
hakgwacode char(3));

create mydbhakgwa2 (
code char(3),
name varchar(30));

alter mydbstudent2 add constraint fk_dbstu2 foreign key(hakgwacode) references mydbhakgwa2(code);

insert into mydbhakgwa2 values ('001