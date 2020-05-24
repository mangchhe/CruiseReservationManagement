
/* Result Sets Interface */
#ifndef SQL_CRSR
#  define SQL_CRSR
  struct sql_cursor
  {
    unsigned int curocn;
    void *ptr1;
    void *ptr2;
    unsigned int magic;
  };
  typedef struct sql_cursor sql_cursor;
  typedef struct sql_cursor SQL_CURSOR;
#endif /* SQL_CRSR */

/* Thread Safety */
typedef void * sql_context;
typedef void * SQL_CONTEXT;

/* Object support */
struct sqltvn
{
  unsigned char *tvnvsn; 
  unsigned short tvnvsnl; 
  unsigned char *tvnnm;
  unsigned short tvnnml; 
  unsigned char *tvnsnm;
  unsigned short tvnsnml;
};
typedef struct sqltvn sqltvn;

struct sqladts
{
  unsigned int adtvsn; 
  unsigned short adtmode; 
  unsigned short adtnum;  
  sqltvn adttvn[1];       
};
typedef struct sqladts sqladts;

static struct sqladts sqladt = {
  1,1,0,
};

/* Binding to PL/SQL Records */
struct sqltdss
{
  unsigned int tdsvsn; 
  unsigned short tdsnum; 
  unsigned char *tdsval[1]; 
};
typedef struct sqltdss sqltdss;
static struct sqltdss sqltds =
{
  1,
  0,
};

/* File name & Package Name */
struct sqlcxp
{
  unsigned short fillen;
           char  filnam[50];
};
static const struct sqlcxp sqlfpn =
{
    49,
    "C:\\Users\\myeongju\\source\\repos\\Proc2\\Proc\\Proc.pc"
};


static unsigned int sqlctx = 1066189341;


static struct sqlexd {
   unsigned int   sqlvsn;
   unsigned int   arrsiz;
   unsigned int   iters;
   unsigned int   offset;
   unsigned short selerr;
   unsigned short sqlety;
   unsigned int   occurs;
      const short *cud;
   unsigned char  *sqlest;
      const char  *stmt;
   sqladts *sqladtp;
   sqltdss *sqltdsp;
            void  **sqphsv;
   unsigned int   *sqphsl;
            int   *sqphss;
            void  **sqpind;
            int   *sqpins;
   unsigned int   *sqparm;
   unsigned int   **sqparc;
   unsigned short  *sqpadto;
   unsigned short  *sqptdso;
   unsigned int   sqlcmax;
   unsigned int   sqlcmin;
   unsigned int   sqlcincr;
   unsigned int   sqlctimeout;
   unsigned int   sqlcnowait;
              int   sqfoff;
   unsigned int   sqcmod;
   unsigned int   sqfmod;
   unsigned int   sqlpfmem;
            void  *sqhstv[5];
   unsigned int   sqhstl[5];
            int   sqhsts[5];
            void  *sqindv[5];
            int   sqinds[5];
   unsigned int   sqharm[5];
   unsigned int   *sqharc[5];
   unsigned short  sqadto[5];
   unsigned short  sqtdso[5];
} sqlstm = {13,5};

/* SQLLIB Prototypes */
extern void sqlcxt (void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlcx2t(void **, unsigned int *,
                    struct sqlexd *, const struct sqlcxp *);
extern void sqlbuft(void **, char *);
extern void sqlgs2t(void **, char *);
extern void sqlorat(void **, unsigned int *, void *);

/* Forms Interface */
static const int IAPSUCC = 0;
static const int IAPFAIL = 1403;
static const int IAPFTL  = 535;
extern void sqliem(unsigned char *, signed int *);

 static const char *sq0027 = 
"select r.room_number ,room_grade ,room_headcount ,room_cost  from cruiseship\
 c ,sail s ,accommodation a ,room r where ((((c.ship_number=s.ship_number and \
s.SAIL_NUMBER=a.SAIL_NUMBER) and a.room_number=r.room_number) and ship_scale l\
ike :b0) and room_grade like :b1)           ";

 static const char *sq0030 = 
"select cost ,s.sail_number ,s.sailing_period  from (select sum(total_cost) c\
ost ,sail_number  from accommodation  group by SAIL_NUMBER) a ,sail s where s.\
SAIL_NUMBER=a.sail_number           ";

 static const char *sq0031 = 
"select facility_number ,ship_number ,restaurant_count ,store_count ,cinema_c\
ount  from conveniencefacility            ";

typedef struct { unsigned short len; unsigned char arr[1]; } VARCHAR;
typedef struct { unsigned short len; unsigned char arr[1]; } varchar;

/* cud (compilation unit data) array */
static const short sqlcud0[] =
{13,4130,1,0,0,
5,0,0,0,0,0,27,201,0,0,4,4,0,1,0,1,9,0,0,1,9,0,0,1,10,0,0,1,10,0,0,
36,0,0,2,0,0,31,218,0,0,0,0,0,1,0,
51,0,0,3,116,0,4,453,0,0,5,1,0,1,0,2,97,0,0,2,97,0,0,2,3,0,0,2,3,0,0,1,97,0,0,
86,0,0,4,85,0,4,456,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
109,0,0,5,163,0,4,459,0,0,4,3,0,1,0,2,3,0,0,1,3,0,0,1,3,0,0,1,97,0,0,
140,0,0,6,123,0,3,468,0,0,5,5,0,1,0,1,3,0,0,1,97,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
175,0,0,7,0,0,29,469,0,0,0,0,0,1,0,
190,0,0,8,82,0,4,502,0,0,2,1,0,1,0,2,3,0,0,1,97,0,0,
213,0,0,9,64,0,2,503,0,0,1,1,0,1,0,1,97,0,0,
232,0,0,10,0,0,29,504,0,0,0,0,0,1,0,
247,0,0,11,109,0,4,533,0,0,2,1,0,1,0,2,97,0,0,1,3,0,0,
270,0,0,12,67,0,4,534,0,0,2,1,0,1,0,2,3,0,0,1,3,0,0,
293,0,0,13,200,0,4,581,0,0,3,2,0,1,0,2,3,0,0,1,3,0,0,1,3,0,0,
320,0,0,14,199,0,4,585,0,0,3,2,0,1,0,2,3,0,0,1,3,0,0,1,3,0,0,
347,0,0,15,128,0,4,589,0,0,2,1,0,1,0,2,3,0,0,1,3,0,0,
370,0,0,16,101,0,4,595,0,0,2,1,0,1,0,2,3,0,0,1,3,0,0,
393,0,0,17,101,0,4,599,0,0,2,1,0,1,0,2,3,0,0,1,3,0,0,
416,0,0,18,61,0,3,671,0,0,5,5,0,1,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,1,3,0,0,
451,0,0,19,0,0,29,672,0,0,0,0,0,1,0,
466,0,0,20,78,0,5,711,0,0,2,2,0,1,0,1,3,0,0,1,3,0,0,
489,0,0,21,73,0,5,714,0,0,2,2,0,1,0,1,3,0,0,1,3,0,0,
512,0,0,22,74,0,5,717,0,0,2,2,0,1,0,1,3,0,0,1,3,0,0,
535,0,0,23,0,0,29,720,0,0,0,0,0,1,0,
550,0,0,24,59,0,2,744,0,0,1,1,0,1,0,1,3,0,0,
569,0,0,25,0,0,29,745,0,0,0,0,0,1,0,
584,0,0,26,242,0,4,786,0,0,3,2,0,1,0,2,3,0,0,1,97,0,0,1,97,0,0,
611,0,0,27,276,0,9,792,0,0,2,2,0,1,0,1,97,0,0,1,97,0,0,
634,0,0,27,0,0,13,802,0,0,4,0,0,1,0,2,97,0,0,2,97,0,0,2,3,0,0,2,3,0,0,
665,0,0,28,57,0,5,810,0,0,2,2,0,1,0,1,3,0,0,1,97,0,0,
688,0,0,29,0,0,29,811,0,0,0,0,0,1,0,
703,0,0,27,0,0,15,817,0,0,0,0,0,1,0,
718,0,0,30,190,0,9,839,0,0,0,0,0,1,0,
733,0,0,30,0,0,13,845,0,0,3,0,0,1,0,2,3,0,0,2,3,0,0,2,97,0,0,
760,0,0,30,0,0,15,851,0,0,0,0,0,1,0,
775,0,0,31,118,0,9,865,0,0,0,0,0,1,0,
790,0,0,31,0,0,13,871,0,0,5,0,0,1,0,2,3,0,0,2,3,0,0,2,3,0,0,2,3,0,0,2,3,0,0,
825,0,0,31,0,0,15,876,0,0,0,0,0,1,0,
};


// win32 Visual C 컴파일시 추가
// 프로그램 가장 첫 줄에 추가할 것
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

/* for oracle */
#include <sqlda.h>
#include <sqlca.h>
#include <sqlcpr.h>

#define CLS system("cls")
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4

BOOL is_err = FALSE;

void DB_connect();
void sql_error(char *msg);
void readFileIOput(char *path);

void init(); // DOS 창 크기
void titleDraw(); // 타이틀
void textcolor(int foreground, int background); // 글씨 색
int menuDraw(int num, int outNum); // 메뉴
void gotoxy(int, int); // 텍스트 위치
int keyControl(); // 키보드 이동

void enrollReservation(); // 예약자 등록
void adjustRoomPrice();   // 객실 가격 조정
void residualSeat();   // 정원 확인
void deleteSchedule();   // 일정 동기화
void refundPrice();      // 환불 가격 조회
void receipt();         // 정산내역

void selectConvenience();   // 조회
void insertConvenience();   // 삽입
void updateConvenience();   // 수정
void deleteConvenience();   // 삭제

void handle_insert_error();   // 에러처리
void handle_delect_error();   // 에러처리

/* EXEC SQL BEGIN DECLARE SECTION; */ 

   //로그인
   /* VARCHAR uid[80]; */ 
struct { unsigned short len; unsigned char arr[80]; } uid;

   /* VARCHAR pwd[20]; */ 
struct { unsigned short len; unsigned char arr[20]; } pwd;


   //1
   int facility_num;
   int ship_num;
   int rest_count;
   int store_count;
   int cinema_count;
   int v_cost;
   int v_sail_number;

   //2
   int v_ship_number;
   char v_ship_name[30];
   char v_ship_scale[30];

   // 숙박(accommodation) 테이블 속성
   int vf_customer_number;
   char vf_room_number[9];
   int v_boarding_area;
   int v_sailing_area;

   // 객실(room) 테이블 속성
   char v_room_number[9];
   char v_room_grade[12];
   int v_room_headcount;
   int v_room_cost;

   //객실 당 현재 인원수 
   int v_room_count;

   //운행(sail) 테이블 속성
   int v_sail_number;
   int vf_ship_number;
   char v_departure[20];
   char v_desrination[20];
   int v_sailing_day;
   char v_sailing_period[10];

   //운행 정보당 예약 인원 수
   int v_customer_count;
   short v_ship_number_ind;
   short v_ship_name_ind;
   short v_ship_scale_ind;
   short vf_customer_number_ind;
   short vf_room_number_ind;
   short v_boarding_area_ind;
   short v_sailing_area_ind;
   short v_room_number_ind;
   short v_room_grade_ind;
   short v_room_headcount_ind;

   //고객(customer) 테이블 속성
   char v_customer_name[10];
   char v_customer_phone_number[20];
   int i_customer_number;

   int v_date_count;
   int v_sail_num;
   int vf_sail_number;

   //go

   int i_customer_number;
    int i_sail_number;
    char v_departure[20];
    char v_desrination [20];
    int choice_sail_number;
    int choice_customer_number;
    int boarding_date;
    int sailing_date;
    int total_cost;
    int room_cost;
    int jumin_f;
    int jumin_b;
   

   //환불 요청 날짜
    int refund_date;

   // 변경 값
   int value;
   
   int v_room_number_count;



/* EXEC SQL END DECLARE SECTION; */ 


#define getch()  _getch()

void main() {

   DB_connect();
   init();

   while(1){
      titleDraw();
      int menuNum = menuDraw(5,1);
      if(menuNum == 0){         // 1. 숙박 관리
         menuNum = menuDraw(2,2);
         if(menuNum == 0){      // 2. 예약자 등록
            enrollReservation();
         }else if(menuNum == 2){   // 2. 환불 가격 조회
            refundPrice();
         }
      }else if(menuNum == 2){      // 1. 객실 관리
         menuNum = menuDraw(1,3);
         if(menuNum == 0){      // 2. 객실 가격 조정
            adjustRoomPrice();
         }
      }else if(menuNum == 4){      // 1. 운행 관리
         menuNum = menuDraw(3,4);
         if(menuNum == 0){      // 2. 운행 동기화
            deleteSchedule();
         }else if(menuNum == 2){   // 2. 정원 확인
            residualSeat();
         }else if(menuNum == 4){   // 2. 정산 내역
            receipt();
         }
      }else if(menuNum == 6){      // 1. 부대시설
         menuNum = menuDraw(4,5);
         if(menuNum == 0){      // 2. 조회
            selectConvenience();
         }else if(menuNum == 2){   // 2. 삽입
            insertConvenience();
         }else if(menuNum == 4){   // 2. 수정
            updateConvenience();
         }else if(menuNum == 6){   // 2. 삭제
            deleteConvenience();
         }
      }else if(menuNum == 8){      // 1. 종료
         return 0;
      }
   }
   getch();
}

void DB_connect() {
   strcpy((char *)uid.arr, "zstA4@//sedb.deu.ac.kr:1521/orcl");
   uid.len = (short) strlen((char *)uid.arr);
   strcpy((char *)pwd.arr, "password");
   pwd.len = (short) strlen((char *)pwd.arr);
   
   /* EXEC SQL CONNECT :uid IDENTIFIED BY :pwd; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )10;
   sqlstm.offset = (unsigned int  )5;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&uid;
   sqlstm.sqhstl[0] = (unsigned int  )82;
   sqlstm.sqhsts[0] = (         int  )82;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&pwd;
   sqlstm.sqhstl[1] = (unsigned int  )22;
   sqlstm.sqhsts[1] = (         int  )22;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlstm.sqlcmax = (unsigned int )100;
   sqlstm.sqlcmin = (unsigned int )2;
   sqlstm.sqlcincr = (unsigned int )1;
   sqlstm.sqlctimeout = (unsigned int )0;
   sqlstm.sqlcnowait = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   if(sqlca.sqlcode != 0 && sqlca.sqlcode != -1405) { //connect
      printf("\7Connect error: %s ",sqlca.sqlerrm.sqlerrmc);
      getch(); 
      exit(-1);
   }
}

void sql_error(char *msg) {
   char err_msg[128];      size_t buf_len, msg_len;
   /* EXEC SQL WHENEVER SQLERROR CONTINUE; */ 

   printf("\n%s\n",msg);      
   buf_len = sizeof(err_msg);
   sqlglm(err_msg, &buf_len, &msg_len);   
   printf("%.*s\n",msg_len,err_msg);
   getch();
   /* EXEC SQL ROLLBACK WORK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 4;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )36;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   exit(-1);
}

void readFileIOput(char *path)
{
   FILE *pFile = NULL;
   char abPath[100] = "";
   strcat(abPath,"description/");
   strcat(abPath,path);
   strcat(abPath,".txt");
   pFile = fopen(abPath,"r");

   if(pFile != NULL)
   {
   char strTemp[255];
   char *pStr;

   while(!feof(pFile))
   {
      pStr = fgets(strTemp, sizeof(strTemp), pFile);
      printf("%s",pStr);
   }
   fclose(pFile);
   }
}

void init()
{
   system("mode con:cols=79 lines=36"); // 해상도 설정
   system("title 하이고");             // 제목 설정

   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE); // 커서 숨기기
   CONSOLE_CURSOR_INFO ConsoleCursor;
   ConsoleCursor.bVisible = 0;
   ConsoleCursor.dwSize = 1;
   SetConsoleCursorInfo(consoleHandle, &ConsoleCursor);
}

void titleDraw()
{
   gotoxy(0,0);
   textcolor(15, 0);
   readFileIOput("wall");
   gotoxy(0,9);
   textcolor(15, 0);
   readFileIOput("wall2");
   gotoxy(0,2);
   textcolor(1, 0);
   readFileIOput("higo");
   gotoxy(0,28);
   textcolor(15, 0);
   readFileIOput("lighthouse");
   gotoxy(0,28);
   textcolor(6, 0);
   readFileIOput("light");
    gotoxy(0,30);
   textcolor(15, 0);
   readFileIOput("ship");
   gotoxy(0,35);
   textcolor(1, 0);
   readFileIOput("water");
   gotoxy(0,26);
   textcolor(8,0);
   readFileIOput("smoke");

   textcolor(9, 0);

}

int menuDraw(int num, int outNum) // 출력문 개수, 출력문 번호
{
   titleDraw();
   int x = 35;
   int y = 14;
   int yPos = 14;
   textcolor(9, 0);

   if(outNum == 1){
      gotoxy(x-2, y);
      printf("> 숙박 관리");
      gotoxy(x, y+2);
      printf("객실 관리");
      gotoxy(x, y+4);
      printf("운행 관리");
      gotoxy(x, y+6);
      printf("부대시설 관리");
      gotoxy(x, y+8);
      printf("종료");
   }else if(outNum == 2){
      gotoxy(x-2, y);
      printf("> 예약자 등록");
      gotoxy(x, y+2);
      printf("환불 가격 조회");
   }else if(outNum == 3){
      gotoxy(x-2, y);
      printf("> 객실 가격 조정");
   }else if(outNum == 4){
      gotoxy(x-2, y);
      printf("> 운행 동기화");
      gotoxy(x, y+2);
      printf("정원 확인");
      gotoxy(x, y+4);
      printf("정산 내역");
      gotoxy(x, y+6);
   }else if(outNum == 5){
      gotoxy(x-2, y);
      printf("> 조회");
      gotoxy(x, y+2);
      printf("삽입");
      gotoxy(x, y+4);
      printf("수정");
      gotoxy(x, y+6);
      printf("삭제");
   }


   while(1){
      int n = keyControl();
      switch(n){
         case UP:{
            if(y > yPos){
               gotoxy(x-2,y);
               printf(" ");
               y-=2;
               gotoxy(x-2,y);
               printf(">");
            }
            break;
         }
         case DOWN:{
            if(y < yPos + 2 * (num - 1)){
               gotoxy(x-2,y);
               printf(" ");
               y+=2;
               gotoxy(x-2,y);
               printf(">");
            }
            break;
         }
         case SUBMIT:{
            return y - yPos;
         }
      }
   }

}

void textcolor(int foreground, int background) 
{ 
   int color=foreground+background*16; 
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color); 
}

void gotoxy(int x, int y)
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   COORD pos;
   pos.X = x;
   pos.Y = y;
   SetConsoleCursorPosition(consoleHandle, pos);
}

int keyControl()
{
   char temp = getch();

   if(temp == 'w' || temp == 'W'){
      return UP;
   }else if(temp == 'a' || temp == 'w'){
      return LEFT;
   }else if(temp == 's' || temp == 'S'){
      return DOWN;
   }else if(temp == 'd' || temp == 'D'){
      return RIGHT;
   }else if(temp == ' '){
      return SUBMIT;
   }
}

void handle_insert_error() {
   gotoxy(25, 17);
   is_err = TRUE;
   printf("데이터 무결성에 위배됩니다.");
}

void handle_delect_error() {
   gotoxy(25, 17);
   is_err = TRUE;
   printf("데이터 삭제시 오류가 발생합니다.");
}

void enrollReservation()
{
   titleDraw();
   int x = 30;
   int y = 13;
   textcolor(9, 0);

   gotoxy(x, y);
   printf("승객 번호 : ");
   gotoxy(x, y+2);
   printf("객실 번호 : ");
   gotoxy(x, y+4);
   printf("운행 번호 : ");
   gotoxy(x, y+6);
   printf("출발지 : ");
   gotoxy(x, y+8);
   printf("도착지 : ");

   int customerNum = 0;
   int sailNum = 0;
   char roomNum[100] = "";
   int start = 0;
   int end = 0;

   gotoxy(x+12,y);
   scanf("%d",&customerNum);
   gotoxy(x+12,y+2);
   scanf("%s",&roomNum);
   gotoxy(x+10,y+4);
   scanf("%d",&sailNum);
   gotoxy(x+10,y+6);
   scanf("%d",&start);
   gotoxy(x+10,y+8);
   scanf("%d",&end);
   
   vf_customer_number = customerNum;
   strcpy(v_room_number, roomNum);
   strcpy(vf_room_number, roomNum);
   vf_sail_number = sailNum;
   v_boarding_area = start;
   v_sailing_area = end;

   // 객실에서 최대인원수 가져오기
   /* EXEC SQL SELECT ROOM_NUMBER, ROOM_GRADE, ROOM_HEADCOUNT, ROOM_COST INTO :v_room_number, :v_room_grade, :v_room_headcount, :v_room_cost FROM room WHERE ROOM_NUMBER like :v_room_number; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select ROOM_NUMBER ,ROOM_GRADE ,ROOM_HEADCOUNT ,ROOM_COST \
into :b0,:b1,:b2,:b3  from room where ROOM_NUMBER like :b0";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )51;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)v_room_number;
   sqlstm.sqhstl[0] = (unsigned int  )9;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)v_room_grade;
   sqlstm.sqhstl[1] = (unsigned int  )12;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&v_room_headcount;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&v_room_cost;
   sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)v_room_number;
   sqlstm.sqhstl[4] = (unsigned int  )9;
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)0;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   // 숙박에서 현재 인원수 가져오기
   /* EXEC SQL SELECT count(CUSTOMER_NUMBER) INTO :v_room_count FROM accommodation WHERE ROOM_NUMBER like :vf_room_number; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select count(CUSTOMER_NUMBER) into :b0  from accommodation\
 where ROOM_NUMBER like :b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )86;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&v_room_count;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)vf_room_number;
   sqlstm.sqhstl[1] = (unsigned int  )9;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}



   // 존재 하지 않는 데이터 구별
   /* EXEC SQL SELECT a.sail_number INTO :v_sail_num from accommodation a, Berth b Where a.sail_number = b.sail_number and boarding_area = :v_boarding_area and sailing_area = :v_sailing_area and room_number = :vf_room_number; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select a.sail_number into :b0  from accommodation a ,Berth\
 b where (((a.sail_number=b.sail_number and boarding_area=:b1) and sailing_are\
a=:b2) and room_number=:b3)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )109;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&v_sail_num;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&v_boarding_area;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&v_sailing_area;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)vf_room_number;
   sqlstm.sqhstl[3] = (unsigned int  )9;
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
}


   if(v_room_count >= v_room_headcount) {
      titleDraw();
      gotoxy(14, 17);
      printf("해당 객실에 인원 수가 초과되어서 삽입할 수 없습니다.");
   }
   else {
      titleDraw();
      /* EXEC SQL WHENEVER SQLERROR DO handle_insert_error(); */ 

      /* EXEC SQL INSERT INTO accommodation(CUSTOMER_NUMBER, ROOM_NUMBER, BOARDING_AREA, SAILING_AREA, SAIL_NUMBER) VALUES (:vf_customer_number, :vf_room_number, :v_boarding_area, :v_sailing_area, :vf_sail_number); */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "insert into accommodation (CUSTOMER_NUMBER,ROOM_NUMBER,\
BOARDING_AREA,SAILING_AREA,SAIL_NUMBER) values (:b0,:b1,:b2,:b3,:b4)";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )140;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&vf_customer_number;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)vf_room_number;
      sqlstm.sqhstl[1] = (unsigned int  )9;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&v_boarding_area;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&v_sailing_area;
      sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&vf_sail_number;
      sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[4] = (         int  )0;
      sqlstm.sqindv[4] = (         void  *)0;
      sqlstm.sqinds[4] = (         int  )0;
      sqlstm.sqharm[4] = (unsigned int  )0;
      sqlstm.sqadto[4] = (unsigned short )0;
      sqlstm.sqtdso[4] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) handle_insert_error();
}

 
      /* EXEC SQL COMMIT WORK; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )175;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) handle_insert_error();
}


      if(!is_err){
         gotoxy(25, 17);
         printf("삽입이 정상 완료되었습니다.");
      }   
   }

   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }
}

void deleteSchedule()
{
   titleDraw();
   int x = 30;
   int y = 14;
   textcolor(9, 0);

   gotoxy(x-5, y);
   printf("몇일 기준으로 삭제를 원하시나요? ");

   gotoxy(x, y+4);
   printf("날짜 : ");

   char date[100] = "";

   gotoxy(x+12,y+4);
   scanf("%s",date);

   strcpy(v_sailing_period, date);
   /* EXEC SQL SELECT COUNT(*) INTO :v_date_count FROM SAIL WHERE SAILING_PERIOD <= TO_DATE(:v_sailing_period,'YY/MM/DD'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select count(*)  into :b0  from SAIL where SAILING_PERIOD<\
=TO_DATE(:b1,'YY/MM/DD')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )190;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&v_date_count;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)v_sailing_period;
   sqlstm.sqhstl[1] = (unsigned int  )10;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}


   /* EXEC SQL DELETE FROM sail WHERE SAILING_PERIOD <= TO_DATE(:v_sailing_period,'YY/MM/DD'); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "delete  from sail  where SAILING_PERIOD<=TO_DATE(:b0,'YY/M\
M/DD')";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )213;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)v_sailing_period;
   sqlstm.sqhstl[0] = (unsigned int  )10;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}


   /* EXEC SQL COMMIT WORK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )232;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}


   titleDraw();
   gotoxy(x-5,y+3);
   printf("%d개의 데이터가 삭제되었습니다.", v_date_count);

   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }
}

void residualSeat()
{
   titleDraw();
   int x = 30;
   int y = 14;
   textcolor(9, 0);

   gotoxy(x, y);
   printf("운행 번호 : ");

   int sailNum = 0;
   
   gotoxy(x+12,y);
   scanf("%d",&sailNum);

   v_sail_number = sailNum;

   /* EXEC SQL SELECT SHIP_SCALE INTO :v_ship_scale FROM cruiseship c, sail s WHERE c.SHIP_NUMBER = s.SHIP_NUMBER and SAIL_NUMBER = :v_sail_number; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select SHIP_SCALE into :b0  from cruiseship c ,sail s wher\
e (c.SHIP_NUMBER=s.SHIP_NUMBER and SAIL_NUMBER=:b1)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )247;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)v_ship_scale;
   sqlstm.sqhstl[0] = (unsigned int  )30;
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&v_sail_number;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}


   /* EXEC SQL SELECT COUNT(*) INTO :v_customer_count FROM accommodation WHERE SAIL_NUMBER = :v_sail_number; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select count(*)  into :b0  from accommodation where SAIL_N\
UMBER=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )270;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&v_customer_count;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&v_sail_number;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}


   char *ptr = strtok(v_ship_scale, " "); 
      titleDraw();
   gotoxy(25,17);
   if(!strcmp(ptr, "CASUAL")) {
      printf("탑승인원 50명 중 %d명 예약 됨",v_customer_count);
   }
   else if(!strcmp(ptr, "PREMIUM")) {
      printf("탑승인원 100명 중 %d명 예약 됨",v_customer_count);
   }
   else if(!strcmp(ptr, "LUXURY")) {
      printf("탑승인원 150명 중 %d명 예약 됨",v_customer_count);
   }
   else {
      printf("검색 결과가 없음");
   }

   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }

}

void refundPrice()
{
   titleDraw();
   int x = 30;
   int y = 14;
   textcolor(9, 0);

   gotoxy(x, y);
   printf("고객 번호 : ");
   gotoxy(x, y+2);
   printf("운행 번호 : ");

   int choice_customer_number = 0;
   int choice_sail_number = 0;
   
   gotoxy(x+12,y);
   scanf("%d",&choice_customer_number);
   gotoxy(x+12,y+2);
   scanf("%d",&choice_sail_number);

   titleDraw();

   /* EXEC SQL SELECT substr(BERTH_DATE,1,2) INTO :boarding_date 
   from BERTH b, SAIL s, accommodation a 
   where b.SAIL_NUMBER  = s.SAIL_NUMBER and s.sail_number =:choice_sail_number and b.BERTH_NUMBER = a.boarding_area and a.customer_number = :choice_customer_number; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select substr(BERTH_DATE,1,2) into :b0  from BERTH b ,SAIL\
 s ,accommodation a where (((b.SAIL_NUMBER=s.SAIL_NUMBER and s.sail_number=:b1\
) and b.BERTH_NUMBER=a.boarding_area) and a.customer_number=:b2)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )293;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&boarding_date;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&choice_sail_number;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&choice_customer_number;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}



   /* EXEC SQL SELECT substr(BERTH_DATE,1,2) INTO :sailing_date 
   from BERTH b, SAIL s, accommodation a 
   where b.SAIL_NUMBER  = s.SAIL_NUMBER and s.sail_number =:choice_sail_number and b.BERTH_NUMBER = a.sailing_area and a.customer_number = :choice_customer_number; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select substr(BERTH_DATE,1,2) into :b0  from BERTH b ,SAIL\
 s ,accommodation a where (((b.SAIL_NUMBER=s.SAIL_NUMBER and s.sail_number=:b1\
) and b.BERTH_NUMBER=a.sailing_area) and a.customer_number=:b2)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )320;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&sailing_date;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&choice_sail_number;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&choice_customer_number;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}



   /* EXEC SQL SELECT room_cost INTO :room_cost
   from room 
   where room_number in (select room_number from accommodation a where a.customer_number = :choice_customer_number); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select room_cost into :b0  from room where room_number in \
(select room_number  from accommodation a where a.customer_number=:b1)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )347;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&room_cost;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&choice_customer_number;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}



   total_cost = room_cost *(sailing_date-boarding_date);

   /* EXEC SQL SELECT to_number(substr(customer_jumin_number, 1, 2)) INTO :jumin_f
   from customer
   where customer_number = :choice_customer_number; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select to_number(substr(customer_jumin_number,1,2)) into :\
b0  from customer where customer_number=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )370;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&jumin_f;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&choice_customer_number;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}


      
   /* EXEC SQL SELECT to_number(substr(customer_jumin_number, 8,1)) INTO :jumin_b
   from customer
   where customer_number = :choice_customer_number; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select to_number(substr(customer_jumin_number,8,1)) into :\
b0  from customer where customer_number=:b1";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )393;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&jumin_b;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&choice_customer_number;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}



   if(jumin_f < 54 && jumin_b < 3){
      total_cost = room_cost *(sailing_date-boarding_date) * 0.9;
      gotoxy(16,15);
      printf("  %d원 X %d일 우대 고객 10퍼센트 할인 적용\n", room_cost, sailing_date-boarding_date);
   }else{
      total_cost = room_cost *(sailing_date-boarding_date);
      gotoxy(24,15);
      printf("  %d원 X %d일 일반 고객\n", room_cost, sailing_date-boarding_date);
   }

   time_t t = time(NULL);
   struct tm tm = *localtime(&t);

   refund_date = tm.tm_mday - boarding_date;
    gotoxy(6,17);
   printf("오늘 날짜(%d-%d-%d)를 기준으로 %d 일 전에 환불을 요청하셨습니다. \n", tm.tm_year+1900, tm.tm_mon+1, tm.tm_mday, abs(refund_date));
   if(abs(refund_date)>7){
      gotoxy(28,20);
      printf("전액 환불 : %d원 \n", total_cost);
   }
   else if(4<abs(refund_date)<8){
      gotoxy(28,19);
      printf("60% 환불 : %d원 \n", total_cost*0.6);
   }else if(2<abs(refund_date)<6 ){
      gotoxy(28,19);
      printf("30 환불 : %d원 \n", total_cost*0.6);
   }else{
      gotoxy(28,19);
      printf("환불 불가 입니다. \n");
   }

   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }
}

void insertConvenience()
{

   titleDraw();
   int x = 30;
   int y = 14;
   textcolor(9, 0);

   gotoxy(x, y);
   printf("시설 번호 : ");
   gotoxy(x, y+2);
   printf("배 번호 : ");
   gotoxy(x, y+4);
   printf("음식 개수 : ");
   gotoxy(x, y+6);
   printf("편의점 개수 : ");
   gotoxy(x, y+8);
   printf("영화관 개수 : ");

   gotoxy(x+16,y);
   scanf("%d",&facility_num);
   gotoxy(x+16,y+2);
   scanf("%d",&ship_num);
   gotoxy(x+16,y+4);
   scanf("%d",&rest_count);
   gotoxy(x+16,y+6);
   scanf("%d",&store_count);
   gotoxy(x+16,y+8);
   scanf("%d",&cinema_count);

   /* EXEC SQL INSERT INTO conveniencefacility VALUES(:facility_num,:ship_num,:rest_count,:store_count,:cinema_count); */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "insert into conveniencefacility  values (:b0,:b1,:b2,:b3,:\
b4)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )416;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&facility_num;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)&ship_num;
   sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)&rest_count;
   sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqhstv[3] = (         void  *)&store_count;
   sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[3] = (         int  )0;
   sqlstm.sqindv[3] = (         void  *)0;
   sqlstm.sqinds[3] = (         int  )0;
   sqlstm.sqharm[3] = (unsigned int  )0;
   sqlstm.sqadto[3] = (unsigned short )0;
   sqlstm.sqtdso[3] = (unsigned short )0;
   sqlstm.sqhstv[4] = (         void  *)&cinema_count;
   sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[4] = (         int  )0;
   sqlstm.sqindv[4] = (         void  *)0;
   sqlstm.sqinds[4] = (         int  )0;
   sqlstm.sqharm[4] = (unsigned int  )0;
   sqlstm.sqadto[4] = (unsigned short )0;
   sqlstm.sqtdso[4] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}


   /* EXEC SQL COMMIT WORK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )451;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}



   selectConvenience();

   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }

}

void updateConvenience()
{

   titleDraw();
   int x = 30;
   int y = 16;
   textcolor(9, 0);

   gotoxy(x, y-1);
   printf("시설 번호 : ");

   int category = 0;

   gotoxy(x-23, y+1);
   printf("음식점 (1) 편의점 (2) 영화관 (3) : ");

   gotoxy(x, y+3);
   printf("변경 값 : ");

   gotoxy(x+16,y-1);
   scanf("%d",&facility_num);
   gotoxy(x+16,y+1);
   scanf("%d",&category);
   gotoxy(x+16,y+3);
   scanf("%d",&value);

   if(category == 1){
      /* EXEC SQL UPDATE conveniencefacility SET restaurant_count = :value WHERE facility_number = :facility_num; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update conveniencefacility  set restaurant_count=:b0 wh\
ere facility_number=:b1";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )466;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&value;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&facility_num;
      sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) handle_insert_error();
}


   }
   else if(category == 2){
      /* EXEC SQL UPDATE conveniencefacility SET store_count = :value WHERE facility_number = :facility_num; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update conveniencefacility  set store_count=:b0 where f\
acility_number=:b1";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )489;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&value;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&facility_num;
      sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) handle_insert_error();
}


   }
   else if(category == 3){
      /* EXEC SQL UPDATE conveniencefacility SET cinema_count = :value WHERE facility_number = :facility_num; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = "update conveniencefacility  set cinema_count=:b0 where \
facility_number=:b1";
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )512;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqhstv[0] = (         void  *)&value;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&facility_num;
      sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) handle_insert_error();
}


   }

   /* EXEC SQL COMMIT WORK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )535;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}



   selectConvenience();

   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }
}

void deleteConvenience()
{
   titleDraw();
   int x = 30;
   int y = 16;
   textcolor(9, 0);

   gotoxy(x, y);
   printf("시설 번호 : ");

   gotoxy(x+16,y);
   scanf("%d",&facility_num);
   
   /* EXEC SQL DELETE conveniencefacility WHERE facility_number = :facility_num; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "delete  from conveniencefacility  where facility_number=:b\
0";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )550;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&facility_num;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}


   /* EXEC SQL COMMIT WORK; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )569;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}



   selectConvenience();

   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }
}

void adjustRoomPrice()
{
   int count = 2;
   int pre_cost;
   titleDraw();
   int x = 30;
   int y = 14;
   textcolor(9, 0);

   gotoxy(x, y);
   printf("선박 규모 : ");
   gotoxy(x, y+2);
   printf("객실 등급 : ");
   gotoxy(x, y+4);
   printf("조정 값 : ");

   char shipSize[100] = "";
   char roomRank[100] = "";
   int adjustValue = 0;

   gotoxy(x+12,y);
   scanf("%s",&shipSize);
   gotoxy(x+12,y+2);
   scanf("%s",&roomRank);
   gotoxy(x+10,y+4);
   scanf("%d",&adjustValue);

   strcpy(v_ship_scale, shipSize);
   strcpy(v_room_grade, roomRank);

   /* EXEC SQL Select COUNT(r.room_number) INTO :v_room_number_count FROM cruiseship c, sail s, accommodation a, room r WHERE c.ship_number = s.ship_number and s.SAIL_NUMBER = a.SAIL_NUMBER and a.room_number=r.room_number and ship_scale like :v_ship_scale and room_grade like :v_room_grade; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = "select count(r.room_number) into :b0  from cruiseship c ,s\
ail s ,accommodation a ,room r where ((((c.ship_number=s.ship_number and s.SAI\
L_NUMBER=a.SAIL_NUMBER) and a.room_number=r.room_number) and ship_scale like :\
b1) and room_grade like :b2)";
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )584;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqhstv[0] = (         void  *)&v_room_number_count;
   sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
   sqlstm.sqhsts[0] = (         int  )0;
   sqlstm.sqindv[0] = (         void  *)0;
   sqlstm.sqinds[0] = (         int  )0;
   sqlstm.sqharm[0] = (unsigned int  )0;
   sqlstm.sqadto[0] = (unsigned short )0;
   sqlstm.sqtdso[0] = (unsigned short )0;
   sqlstm.sqhstv[1] = (         void  *)v_ship_scale;
   sqlstm.sqhstl[1] = (unsigned int  )30;
   sqlstm.sqhsts[1] = (         int  )0;
   sqlstm.sqindv[1] = (         void  *)0;
   sqlstm.sqinds[1] = (         int  )0;
   sqlstm.sqharm[1] = (unsigned int  )0;
   sqlstm.sqadto[1] = (unsigned short )0;
   sqlstm.sqtdso[1] = (unsigned short )0;
   sqlstm.sqhstv[2] = (         void  *)v_room_grade;
   sqlstm.sqhstl[2] = (unsigned int  )12;
   sqlstm.sqhsts[2] = (         int  )0;
   sqlstm.sqindv[2] = (         void  *)0;
   sqlstm.sqinds[2] = (         int  )0;
   sqlstm.sqharm[2] = (unsigned int  )0;
   sqlstm.sqadto[2] = (unsigned short )0;
   sqlstm.sqtdso[2] = (unsigned short )0;
   sqlstm.sqphsv = sqlstm.sqhstv;
   sqlstm.sqphsl = sqlstm.sqhstl;
   sqlstm.sqphss = sqlstm.sqhsts;
   sqlstm.sqpind = sqlstm.sqindv;
   sqlstm.sqpins = sqlstm.sqinds;
   sqlstm.sqparm = sqlstm.sqharm;
   sqlstm.sqparc = sqlstm.sqharc;
   sqlstm.sqpadto = sqlstm.sqadto;
   sqlstm.sqptdso = sqlstm.sqtdso;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}



   if(v_room_number_count > 0 ){
      /* EXEC SQL DECLARE room CURSOR FOR
      Select r.room_number, room_grade, room_headcount, room_cost FROM cruiseship c, sail s, accommodation a, room r WHERE c.ship_number = s.ship_number and s.SAIL_NUMBER = a.SAIL_NUMBER and a.room_number=r.room_number and ship_scale like :v_ship_scale and room_grade like :v_room_grade; */ 


      /* EXEC SQL OPEN room; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.stmt = sq0027;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )611;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqcmod = (unsigned int )0;
      sqlstm.sqhstv[0] = (         void  *)v_ship_scale;
      sqlstm.sqhstl[0] = (unsigned int  )30;
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)v_room_grade;
      sqlstm.sqhstl[1] = (unsigned int  )12;
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) handle_insert_error();
}



      /* EXEC SQL WHENEVER NOT FOUND DO BREAK; */ 


      titleDraw();
      gotoxy(2,12);
      printf("|   배 규모   |   방 번호   |   방 등급   |   이전 가격   |   현재 가격   |");

      int pre_cost;
      for(;;){
         /* EXEC SQL FETCH room into 
         :v_room_number,
         :v_room_grade,
         :v_room_headcount,
         :v_room_cost; */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 13;
         sqlstm.arrsiz = 5;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )634;
         sqlstm.selerr = (unsigned short)1;
         sqlstm.sqlpfmem = (unsigned int  )0;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqfoff = (           int )0;
         sqlstm.sqfmod = (unsigned int )2;
         sqlstm.sqhstv[0] = (         void  *)v_room_number;
         sqlstm.sqhstl[0] = (unsigned int  )9;
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)v_room_grade;
         sqlstm.sqhstl[1] = (unsigned int  )12;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqhstv[2] = (         void  *)&v_room_headcount;
         sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
         sqlstm.sqhsts[2] = (         int  )0;
         sqlstm.sqindv[2] = (         void  *)0;
         sqlstm.sqinds[2] = (         int  )0;
         sqlstm.sqharm[2] = (unsigned int  )0;
         sqlstm.sqadto[2] = (unsigned short )0;
         sqlstm.sqtdso[2] = (unsigned short )0;
         sqlstm.sqhstv[3] = (         void  *)&v_room_cost;
         sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
         sqlstm.sqhsts[3] = (         int  )0;
         sqlstm.sqindv[3] = (         void  *)0;
         sqlstm.sqinds[3] = (         int  )0;
         sqlstm.sqharm[3] = (unsigned int  )0;
         sqlstm.sqadto[3] = (unsigned short )0;
         sqlstm.sqtdso[3] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
         if (sqlca.sqlcode == 1403) break;
         if (sqlca.sqlcode < 0) handle_insert_error();
}

 
   
         pre_cost = v_room_cost;
         v_room_cost = v_room_cost + (v_room_cost * adjustValue/100);
         /* EXEC SQL UPDATE room SET ROOM_COST = :v_room_cost WHERE ROOM_NUMBER like :v_room_number; */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 13;
         sqlstm.arrsiz = 5;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.stmt = "update room  set ROOM_COST=:b0 where ROOM_NUMBER lik\
e :b1";
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )665;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlstm.sqhstv[0] = (         void  *)&v_room_cost;
         sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
         sqlstm.sqhsts[0] = (         int  )0;
         sqlstm.sqindv[0] = (         void  *)0;
         sqlstm.sqinds[0] = (         int  )0;
         sqlstm.sqharm[0] = (unsigned int  )0;
         sqlstm.sqadto[0] = (unsigned short )0;
         sqlstm.sqtdso[0] = (unsigned short )0;
         sqlstm.sqhstv[1] = (         void  *)v_room_number;
         sqlstm.sqhstl[1] = (unsigned int  )9;
         sqlstm.sqhsts[1] = (         int  )0;
         sqlstm.sqindv[1] = (         void  *)0;
         sqlstm.sqinds[1] = (         int  )0;
         sqlstm.sqharm[1] = (unsigned int  )0;
         sqlstm.sqadto[1] = (unsigned short )0;
         sqlstm.sqtdso[1] = (unsigned short )0;
         sqlstm.sqphsv = sqlstm.sqhstv;
         sqlstm.sqphsl = sqlstm.sqhstl;
         sqlstm.sqphss = sqlstm.sqhsts;
         sqlstm.sqpind = sqlstm.sqindv;
         sqlstm.sqpins = sqlstm.sqinds;
         sqlstm.sqparm = sqlstm.sqharm;
         sqlstm.sqparc = sqlstm.sqharc;
         sqlstm.sqpadto = sqlstm.sqadto;
         sqlstm.sqptdso = sqlstm.sqtdso;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
         if (sqlca.sqlcode == 1403) break;
         if (sqlca.sqlcode < 0) handle_insert_error();
}


         /* EXEC SQL COMMIT WORK; */ 

{
         struct sqlexd sqlstm;
         sqlstm.sqlvsn = 13;
         sqlstm.arrsiz = 5;
         sqlstm.sqladtp = &sqladt;
         sqlstm.sqltdsp = &sqltds;
         sqlstm.iters = (unsigned int  )1;
         sqlstm.offset = (unsigned int  )688;
         sqlstm.cud = sqlcud0;
         sqlstm.sqlest = (unsigned char  *)&sqlca;
         sqlstm.sqlety = (unsigned short)4352;
         sqlstm.occurs = (unsigned int  )0;
         sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
         if (sqlca.sqlcode < 0) handle_insert_error();
}


         gotoxy(2,13+count);
         count++;
         printf("     %s       %s     %s      %d         %d\n", v_ship_scale,v_room_number,v_room_grade,pre_cost,v_room_cost);

      }
      /* EXEC SQL CLOSE room; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )703;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode < 0) handle_insert_error();
}


   }
   else {
      titleDraw();
      gotoxy(26, 17);
      printf("존재하는 데이터가 없습니다.");
   }

   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }

}

void receipt()
{
   int count = 2;

   /* EXEC SQL DECLARE cur2 CURSOR FOR
      select cost, s.sail_number, s.sailing_period from (select sum(total_cost) cost, sail_number from accommodation group by SAIL_NUMBER) a, sail s where s.SAIL_NUMBER = a.sail_number; */ 

   /* EXEC SQL OPEN cur2; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = sq0030;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )718;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}



   titleDraw();
   gotoxy(2,12);
   printf("  |       총 수입금        |        배넘버        |        기간        |");
   while(1){
      /* EXEC SQL FETCH cur2 into :v_cost, :v_sail_number, :v_sailing_period; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )733;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqfoff = (           int )0;
      sqlstm.sqfmod = (unsigned int )2;
      sqlstm.sqhstv[0] = (         void  *)&v_cost;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&v_sail_number;
      sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)v_sailing_period;
      sqlstm.sqhstl[2] = (unsigned int  )10;
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
      if (sqlca.sqlcode < 0) handle_insert_error();
}


      if(sqlca.sqlcode == 1403) break;
      gotoxy(2, 12+count);
      printf("           %d                   %d               %s \n",v_cost, v_sail_number, v_sailing_period);
      count++;
   }
   /* EXEC SQL CLOSE cur2; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )760;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}


   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }
}

void selectConvenience()
{
   int count = 2;

   /* EXEC SQL DECLARE cur CURSOR FOR
      select facility_number, ship_number, restaurant_count, store_count, cinema_count from conveniencefacility; */ 

   /* EXEC SQL OPEN cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.stmt = sq0031;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )775;
   sqlstm.selerr = (unsigned short)1;
   sqlstm.sqlpfmem = (unsigned int  )0;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlstm.sqcmod = (unsigned int )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}


   /* EXEC SQL WHENEVER NOT FOUND DO break; */ 

   titleDraw();
   gotoxy(2,12);
   printf("| 배 번호  |  시설 번호  |  레스토랑 개수  |  편의점 개수  |  영화관 개수 | ");
   while(1){
      /* EXEC SQL FETCH cur into :facility_num, :ship_num, :rest_count, :store_count, :cinema_count; */ 

{
      struct sqlexd sqlstm;
      sqlstm.sqlvsn = 13;
      sqlstm.arrsiz = 5;
      sqlstm.sqladtp = &sqladt;
      sqlstm.sqltdsp = &sqltds;
      sqlstm.iters = (unsigned int  )1;
      sqlstm.offset = (unsigned int  )790;
      sqlstm.selerr = (unsigned short)1;
      sqlstm.sqlpfmem = (unsigned int  )0;
      sqlstm.cud = sqlcud0;
      sqlstm.sqlest = (unsigned char  *)&sqlca;
      sqlstm.sqlety = (unsigned short)4352;
      sqlstm.occurs = (unsigned int  )0;
      sqlstm.sqfoff = (           int )0;
      sqlstm.sqfmod = (unsigned int )2;
      sqlstm.sqhstv[0] = (         void  *)&facility_num;
      sqlstm.sqhstl[0] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[0] = (         int  )0;
      sqlstm.sqindv[0] = (         void  *)0;
      sqlstm.sqinds[0] = (         int  )0;
      sqlstm.sqharm[0] = (unsigned int  )0;
      sqlstm.sqadto[0] = (unsigned short )0;
      sqlstm.sqtdso[0] = (unsigned short )0;
      sqlstm.sqhstv[1] = (         void  *)&ship_num;
      sqlstm.sqhstl[1] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[1] = (         int  )0;
      sqlstm.sqindv[1] = (         void  *)0;
      sqlstm.sqinds[1] = (         int  )0;
      sqlstm.sqharm[1] = (unsigned int  )0;
      sqlstm.sqadto[1] = (unsigned short )0;
      sqlstm.sqtdso[1] = (unsigned short )0;
      sqlstm.sqhstv[2] = (         void  *)&rest_count;
      sqlstm.sqhstl[2] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[2] = (         int  )0;
      sqlstm.sqindv[2] = (         void  *)0;
      sqlstm.sqinds[2] = (         int  )0;
      sqlstm.sqharm[2] = (unsigned int  )0;
      sqlstm.sqadto[2] = (unsigned short )0;
      sqlstm.sqtdso[2] = (unsigned short )0;
      sqlstm.sqhstv[3] = (         void  *)&store_count;
      sqlstm.sqhstl[3] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[3] = (         int  )0;
      sqlstm.sqindv[3] = (         void  *)0;
      sqlstm.sqinds[3] = (         int  )0;
      sqlstm.sqharm[3] = (unsigned int  )0;
      sqlstm.sqadto[3] = (unsigned short )0;
      sqlstm.sqtdso[3] = (unsigned short )0;
      sqlstm.sqhstv[4] = (         void  *)&cinema_count;
      sqlstm.sqhstl[4] = (unsigned int  )sizeof(int);
      sqlstm.sqhsts[4] = (         int  )0;
      sqlstm.sqindv[4] = (         void  *)0;
      sqlstm.sqinds[4] = (         int  )0;
      sqlstm.sqharm[4] = (unsigned int  )0;
      sqlstm.sqadto[4] = (unsigned short )0;
      sqlstm.sqtdso[4] = (unsigned short )0;
      sqlstm.sqphsv = sqlstm.sqhstv;
      sqlstm.sqphsl = sqlstm.sqhstl;
      sqlstm.sqphss = sqlstm.sqhsts;
      sqlstm.sqpind = sqlstm.sqindv;
      sqlstm.sqpins = sqlstm.sqinds;
      sqlstm.sqparm = sqlstm.sqharm;
      sqlstm.sqparc = sqlstm.sqharc;
      sqlstm.sqpadto = sqlstm.sqadto;
      sqlstm.sqptdso = sqlstm.sqtdso;
      sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
      if (sqlca.sqlcode == 1403) break;
      if (sqlca.sqlcode < 0) handle_insert_error();
}


      gotoxy(2, 12+count);
      printf("%8d%12d%15d%17d%16d \n",ship_num,facility_num, rest_count, store_count, cinema_count);
      count++;
   }
   /* EXEC SQL CLOSE cur; */ 

{
   struct sqlexd sqlstm;
   sqlstm.sqlvsn = 13;
   sqlstm.arrsiz = 5;
   sqlstm.sqladtp = &sqladt;
   sqlstm.sqltdsp = &sqltds;
   sqlstm.iters = (unsigned int  )1;
   sqlstm.offset = (unsigned int  )825;
   sqlstm.cud = sqlcud0;
   sqlstm.sqlest = (unsigned char  *)&sqlca;
   sqlstm.sqlety = (unsigned short)4352;
   sqlstm.occurs = (unsigned int  )0;
   sqlcxt((void **)0, &sqlctx, &sqlstm, &sqlfpn);
   if (sqlca.sqlcode < 0) handle_insert_error();
}


   while(1){
      int n = keyControl();
      if(n == SUBMIT)
         break;
   }

}