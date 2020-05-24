--선박
CREATE TABLE CRUISESHIP( 
  SHIP_NUMBER       NUMBER(4) PRIMARY KEY not null, 
  SHIP_NAME         VARCHAR2(30), 
  SHIP_SCALE        VARCHAR2(30));

-- 운행
CREATE TABLE SAIL ( 
  SAIL_NUMBER       NUMBER(4) PRIMARY KEY, 
  SHIP_NUMBER       NUMBER(4) not null, 
  DEPARTURE         VARCHAR2(20), 
  DESRINATION       VARCHAR2(20), 
  SAILING_DAY       NUMBER(3), 
  SAILING_START_DAYS    DATE,
  foreign key (SHIP_NUMBER) references CRUISESHIP(SHIP_NUMBER));

--정박지  
CREATE TABLE BERTH ( 
  BERTH_NUMBER       NUMBER(4) PRIMARY KEY  not null, 
  SAIL_NUMBER       NUMBER(4)  not null, 
  AREA_NAME         VARCHAR2(20), 
  BERTH_DATE        DATE,
  PORT_ORDER        NUMBER(2), 
  foreign key (SAIL_NUMBER) references SAIL(SAIL_NUMBER));

--항해사
create table seafarer(
   seafarer_number NUMBER(4) PRIMARY KEY  not null,
   sail_number NUMBER(4),
   seafarer_poisition VARCHAR2(10),
   seafarer_name VARCHAR2(20),
   seafarer_address VARCHAR2(40),
   seafarer_jumin_number VARCHAR(20),
   seafarer_phone_number VARCHAR(20),
   seafarer_pay NUMBER(8),
   foreign key (sail_number) references sail(sail_number)
);

--승무원
create table crew(
   crew_number NUMBER(4)PRIMARY KEY not null,
   sail_number NUMBER(4),
   crew_poisition VARCHAR2(11),
   crew_name VARCHAR2(20),
   crew_address VARCHAR2(40),
   crew_jumin_number VARCHAR(20),
   crew_phone_number VARCHAR(20),
   crew_pay NUMBER(8),
   foreign key (sail_number) references sail(sail_number)
);

--부대시설
create table convenienceFacility(
   facility_number NUMBER(4) PRIMARY KEY not null,
   ship_number NUMBER(4),
   restaurant_count NUMBER(2),
   store_count NUMBER(2),
   cinema_count NUMBER(2),
   foreign key (ship_number) references cruiseship(Ship_number)
);

--승객
create table customer(
   customer_number NUMBER(4) PRIMARY KEY not null,
   customer_name VARCHAR(10),
   customer_phone_number VARCHAR(20),
   customer_jumin_number VARCHAR(20),
   passport_number VARCHAR(2)
);

--객실
create table room(
   room_number VARCHAR(8) PRIMARY KEY not null,
   room_grade VARCHAR2(11),
   room_headcount number(4),
   room_cost number(7)
);

--숙박
create table accommodation(
   customer_number NUMBER(4) not null,
   room_number VARCHAR(8) not null,
   boarding_area NUMBER(4),
   sailing_area NUMBER(4),
   sail_number NUMBER(4),
   foreign key (sail_number) references sail(sail_number),
   foreign key (customer_number) references customer(customer_number),
   foreign key (room_number) references room(room_number),
   foreign key (boarding_area) references BERTH(BERTH_NUMBER),
   foreign key (sailing_area) references BERTH(BERTH_NUMBER)
);

insert into CRUISESHIP values (3201,'HIGO1','CASUAL');
insert into CRUISESHIP values (3202,'HIGO2','PREMIUM');
insert into CRUISESHIP values (3203,'HIGO3','CASUAL');
insert into CRUISESHIP values (3204,'HIGO4','PREMIUM');
insert into CRUISESHIP values (3205,'HIGO5','LUXURY');
insert into CRUISESHIP values (3206,'HIGO6','CASUAL');

select *
from CRUISESHIP;

-- 운행기간을 어떻게??? 출발일을 넣으면 되나???
insert into SAIL values (4601,3201,'INCHEON','SYDNEY',30, '2019-12-21'); -- 호주
insert into SAIL values (4602,3202,'BUSAN','LAEMCHABANG',7,'2019-12-22'); -- 태국
insert into SAIL values (4603,3203,'ULSAN','NEWYORK',7, '2019-12-23'); -- 미국
insert into SAIL values (4604,3203,'PYEONGTAEK','HANOI',7,'2019-12-24'); -- 베트남
insert into SAIL values (4605,3202,'YEOSU','VANCOUVER',4,'2019-12-25'); -- 캐나다
insert into SAIL values (4606,3204,'BUSAN','DUBAI',8,'2019-12-26'); -- 아랍에미리트

select *
from sail;

insert into BERTH values (8307,4603,'ULSAN', '2019-12-23', 1);
insert into BERTH values (8301,4603,'HONGKONG','2019-12-25', 2);
insert into BERTH values (8304,4603,'LAPAZ', '2019-12-27',3);
insert into BERTH values (8310,4603,'NEWYORK', '2019-12-29' ,4);

insert into BERTH values (8308,4606,'BUSAN', '2019-12-26', 1);
insert into BERTH values (8302,4606,'BARCELONA','2019-12-29', 2);
insert into BERTH values (8303,4606,'NAPLES','2019-12-31', 3);
insert into BERTH values (8311,4606,'DUBAI', '2020-01-02', 4);

insert into BERTH values (8309,4602,'BUSAN', '2019-12-22', 1);
insert into BERTH values (8305,4602,'SINGAPORE', '2019-12-24', 2);
insert into BERTH values (8306,4602,'PORTKLANG','2019-12-26', 3);
insert into BERTH values (8312,4602,'LAEMCHABANG','2019-12-28', 4);

select *
from BERTH;

insert into seafarer values(1001, 4601, '3등 항해사','김해사','seoul','961219-2904896','010-5246-4666',5000000);
insert into seafarer values(1002, 4602,'2등 항해사','이해사','busan','620219-1914643','010-1931-9146',6000000);
insert into seafarer values(1003, 4603,'3등 항해사','주해사','gangwon','790410-2537047','010-7384-6179',5000000);
insert into seafarer values(1004, 4604,'2등 항해사','고해사','daejeon','880312-2531881','010-7177-0988',6000000);
insert into seafarer values(1005, 4605,'1등 항해사','하해사','changwon','931123-2590921','010-5226-2166',7000000);

select *
from seafarer;

insert into crew values(1001, 4601,'신입 승무원','김무원','gangwon','6290197-1050240','010-1155-5026',3000000);
insert into crew values(1002,4602,'부사무장','이무원','jinju','720118-2624444','010-0808-5606',4000000);
insert into crew values(1003,4603,'사무장','주무원','daegu','930506-1509183','010-9097-8259',5000000);
insert into crew values(1004,4604,'선임 사무장','고무원','busan','720601-1654671','010-3762-6485',6000000);
insert into crew values(1005,4605, '수석 사무장','하무원','seoul','600713-1528591','010-9762-3794',7000000);

select *
from crew;

insert into convenienceFacility values(1001,3201,10,5,2);
insert into convenienceFacility values(1002,3202,13,6,3);
insert into convenienceFacility values(1003,3203,8,4,2);
insert into convenienceFacility values(1004,3204,17,8,4);
insert into convenienceFacility values(1005,3205,14,7,3);

select *
from convenienceFacility;



insert into customer values (1901, '장희숙', '010-1234-5678', '900312-1111111', 'A1');
insert into customer values (1902, '박유현', '010-9876-5432', '900609-2222222', 'A2');
insert into customer values (1903, '김성우', '010-2323-4545', '900416-2222222', 'A3');
insert into customer values (1904, '이종민', '010-9898-6565', '901225-1111111', 'A4');
insert into customer values (1906, '권오준', '010-4556-7889', '900101-1111111', 'A5');
insert into customer values (1907, '이주빈', '010-1235-8359', '980609-2222222', 'A6');
insert into customer values (1908, '김노인', '010-4685-7459', '530101-1111111', 'A7');
insert into customer values (1909, '어린이', '010-1633-5799', '130609-3333333', 'A8');

select *
from CUSTOMER;

--H2-01 > HIGO2호의 01번 방
insert into room values ('HIGO2-01', 'sweetroom', 2, 150000);
insert into room values ('HIGO2-02', 'balconyroom', 3, 130000);
insert into room values ('HIGO2-03', 'oceanivew', 4, 110000);
insert into room values ('HIGO2-04', 'inside', 6, 90000);

--H3-01 > HIGO3호의 01번 방
insert into room values ('HIGO3-01', 'sweetroom', 2, 130000);
insert into room values ('HIGO3-02', 'balconyroom', 3, 110000);
insert into room values ('HIGO3-03', 'oceanivew', 4, 90000);
insert into room values ('HIGO3-04', 'inside', 6, 70000);

insert into room values ('HIGO6-01', 'sweetroom', 2, 130000);
insert into room values ('HIGO6-02', 'balconyroom', 3, 110000);
insert into room values ('HIGO6-03', 'oceanivew', 4, 90000);
insert into room values ('HIGO6-04', 'inside', 6, 70000);

select *
from room;

insert into accommodation values (1901, 'HIGO3-01', 8307 , 8310, 4603);
insert into accommodation values (1907, 'HIGO3-01', 8307 , 8310, 4603);
insert into accommodation values (1902, 'HIGO3-02', 8301, 8310, 4603);
insert into accommodation values (1903, 'HIGO6-01', 8308, 8311, 4606);
insert into accommodation values (1904, 'HIGO2-01', 8309 ,8306, 4602);
insert into accommodation values (1906, 'HIGO2-02', 8305, 8312, 4602);
insert into accommodation values (1908, 'HIGO6-02', 8308, 8303, 4606);
insert into accommodation values (1908, 'HIGO3-02', 8301, 8310, 4603);


