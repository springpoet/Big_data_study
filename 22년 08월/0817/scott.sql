--�� �ڵ尡 SQL���� ��~�� �⺻���� �ڵ�
--��� �����͸� ��ȸ�� �� �� �ִ� �ڵ�
--��Ʈ�� ����=�����ϱ�
SELECT * FROM STUDENT;

--where ���̰� ���� ���ϴ� ���ǵ��� ������ �ȴ�.
SELECT * FROM STUDENT WHERE AGE>27;

--SQL���� ���ǹ����� ������ üũ�� �� =���� �Ѵ�.
SELECT * FROM STUDENT WHERE AGE>25 AND HAKBEON='002';

INSERT INTO STUDENT (HAKBEON, NAME, AGE) VALUES ('1','�̵���',34);

--SQL�� �ٽ�
--CRUD
--select = read : ��ȸ
--insert = create : ����
--update = update : ����
--delete = delete : ����

--��ȸ
SELECT * FROM STUDENT;

--�й� 1�� ���� ����� �̸��� ���¿����� �ٲ�
UPDATE STUDENT SET NAME='���¿�' WHERE HAKBEON='1';

--��ȸ
SELECT * FROM STUDENT;

--�� ����
--delete form student;

--30�� �ʰ��ϴ� ����� �� ����
DELETE FROM STUDENT WHERE AGE>30;

COMMIT; --�߰� ���� �Ҷ����� �� ������ ������ �ִ� ��

--���� ���������� Ŀ���� �������� ���ư� �� �ִ�.
ROLLBACK;

DELETE FROM STUDENT;

COMMIT;

SELECT * FROM STUDENTS WHERE AGE>=10 AND AGE<20;

DELETE FROM STUDENTS WHERE HAKBEON=12;

UPDATE STUDENTS SET AGE=20 WHERE NAME='����ȣ';

COMMIT;

SELECT * FROM STUDENTS;

INSERT INTO LIBRARY (BOOKNUMBER,BOOKNAME,BOOKWRITER) VALUES (1,'å�ϳ�','��������');

SELECT * FROM LIBRARY;

UPDATE LIBRARY SET BOOKWRITER='��������' WHERE BOOKNUMBER=1;
COMMIT;


UPDATE LIBRARY SET BOOKWRITER='������' WHERE BOOKWRITER='��������';
INSERT INTO LIBRARY (BOOKNUMBER, BOOKNAME, BOOKWRITER) VALUES (2,'å��','�輺��');
DELETE LIBRARY WHERE BOOKNUMBER=1;
commit;
SELECT * FROM LIBRARY;

