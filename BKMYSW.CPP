 // MAKING BOOK MY SHOW CLONE //
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void fnCinema();
void fnMovies1();
void fnMovies2();
void fnMovies3();
void fnMovies4();
void Timing();
void fnseats();
void PaymentMethod();
void Receipt();

char CinemaHall[4][20] = {"INOX CINEMA","HIND CINEMA","SONALI CINEMA","MATRI CINEMA"};
char movies1[4][20]={"BAHUBALI","TERE NAAM","MERI JUNG","AVENGERS"};
char movies2[4][20]={"ANT MAN","KICK","DRISHYAM","3 IDIOTS"};
char movies3[4][20]={"IRON MAN","BRAMHASTER","THOR","KANCHANA"};
char movies4[4][20]={"ROBOT","RA ONE","SHIVAJI","KANCHANA"};
char Time[4][20] = {"11:00 AM TO 2:00 PM","3:00 PM TO 5:00 PM","5:30 PM TO 8:00 PM","8:30 PM TO 11:00 PM"};
char Seats[4][25] = {"BALCONY SEAT - Rs.200","FRONT SEAT - Rs.150","MIDDLE SEAT - RS.125","BACK SEAT - RS.100"};
char PayMethod[4][15]={"UPI","NET BANKING","CREDIT CARD","DEBIT CARD"};
int Amount[4] = {200,150,125,100};
int i=0,j=0,NoofPerson=0,SelectTime=0;
int SelectCinema=0,SelectedMovie=0,Seat=0,SelectPayMethod=0;



void main()
{
    clrscr();

    fnCinema();
    getch();
}

void fnCinema()
{
   printf("-----------------------*******  BOOK MY SHOW  *******------------------------\n\n");
   int count=1;
   int NoOfCinemaHall= sizeof(CinemaHall)/sizeof(CinemaHall[0]);
   for(i=0;i<NoOfCinemaHall;i++){
    printf("%d.%s\n",count,CinemaHall[i]);
    count++;
   }
   printf("\t\t100.EXIT\n");
   printf("\nChoose Your Option : ");
   scanf("%d",&SelectCinema);
   printf("\n");
   if(SelectCinema==1)
   {
     clrscr();
     printf("---------------------------------------------------------------\n\n");
     fnMovies1();
   }
   else if(SelectCinema==2)
   {
     clrscr();
     printf("---------------------------------------------------------------\n\n");
     fnMovies2();
    }
     else if(SelectCinema==3)
   {
     clrscr();
     printf("---------------------------------------------------------------\n\n");
     fnMovies3();
   }
     else if(SelectCinema==4)
   {
     clrscr();
     printf("---------------------------------------------------------------\n");
     fnMovies4();
   }
   else if(SelectCinema>4&&99>=SelectCinema)
   {
   printf("wrong input\n\n");
     printf("\nDo You Want To Continue\n1.YES\n2.NO");
     int option=0;
     printf("\n\nChoose : ");
     scanf("%d",&option);
       if (option==1)
       {
       clrscr();
       fnCinema();
       }
       else
       {
	 exit(0);
       }

   }
   else if(SelectCinema==100)
   {
    exit(0);
   }
}

void fnMovies1(){
   int NoOfMovies= sizeof(movies1)/sizeof(movies1[0]);
   int count=1;
   for(i=0;i<NoOfMovies;i++){
    printf("%d %s\n",count,movies1[i]);
    count++;
   }
   printf("\t\t 100.EXIT\t 101.RETURN TO PREVIOUS STEP");
   printf("\nChoose Your Option : ");
   scanf("%d",&SelectedMovie);
   printf("\n");
   printf("----------------------------------------------------------\n");
   if(SelectedMovie<=4)
   {
   clrscr();
   Timing();
   }
   else if(SelectedMovie>4&&SelectedMovie<=99)
   {
   printf("wrong input");
   printf("\nDo You Want To Continue\n1.YES\n2.NO");
     int option=0;
     printf("\n\nChoose : ");
     scanf("%d",&option);
       if (option==1)
       {
       clrscr();
       fnMovies1();
       }
       else
       {
	 exit(0);
       }
   }
   else if(SelectedMovie==100)
   {
    exit(0);
   }
   else if(SelectedMovie==101)
   {
    clrscr();
    fnCinema();
   }
}

 void fnMovies2(){
   int NoOfMovies= sizeof(movies2)/sizeof(movies2[0]);
   int count=1;
   for(i=0;i<NoOfMovies;i++){
    printf("%d %s\n",count,movies2[i]);
    count++;
   }
   printf("\t\t 100.EXIT\t 101.RETURN TO PREVIOUS STEP");
   printf("\nChoose Your Movie : ");
   scanf("%d",&SelectedMovie);
   printf("------------------------------------------------------------\n");
   printf("\n");
   if(SelectedMovie<=4)
   {
   clrscr();
   Timing();
   }
   else if(SelectedMovie>4&&SelectedMovie<=99)
   {
   printf("wrong input");
   printf("\nDo You Want To Continue\n1.YES\n2.NO");
     int option=0;
     printf("\n\nChoose : ");
     scanf("%d",&option);
       if (option==1)
       {
       clrscr();
       fnMovies2();
       }
       else
       {
	 exit(0);
       }
   }
   else if(SelectedMovie==100)
   {
    exit(0);
   }
   else if(SelectedMovie==101)
   {
    clrscr();
    fnCinema();
   }
}

void fnMovies3(){
   int NoOfMovies= sizeof(movies3)/sizeof(movies3[0]);
   int count=1;
   for(i=0;i<NoOfMovies;i++){
    printf("%d %s\n",count,movies3[i]);
    count++;
   }
   printf("\t\t 100.EXIT\t 101.RETURN TO PREVIOUS STEP");
   printf("\nChoose Your Option : ");
   scanf("%d",&SelectedMovie);
   printf("------------------------------------------------------------\n");
   printf("\n");
   if(SelectedMovie<=4)
   {
   clrscr();
   Timing();
   }
   else if(SelectedMovie>4&&SelectedMovie<=99)
   {
   printf("wrong input");
   printf("\nDo You Want To Continue\n1.YES\n2.NO");
     int option=0;
     printf("\n\nChoose : ");
     scanf("%d",&option);
       if (option==1)
       {
       clrscr();
       fnMovies3();
       }
       else
       {
	 exit(0);
       }
   }
   else if(SelectedMovie==100)
   {
    exit(0);
   }
   else if(SelectedMovie==101)
   {
    clrscr();
    fnCinema();
   }
}

void fnMovies4(){
   int NoOfMovies= sizeof(movies4)/sizeof(movies4[0]);
   int count=1;
   for(i=0;i<NoOfMovies;i++){
    printf("%d %s\n",count,movies4[i]);
    count++;
   }
   printf("\t\t 100.EXIT\t 101.RETURN TO PREVIOUS STEP");
   printf("\nChoose Your Option : ");
   scanf("%d",&SelectedMovie);
   printf("------------------------------------------------------------\n");
   printf("\n");
   if(SelectedMovie<=4)
   {
   clrscr();
   Timing();
   }
   else if(SelectedMovie>4&&SelectedMovie<=99)
   {
   printf("wrong input");
   printf("\nDo You Want To Continue\n1.YES\n2.NO");
     int option=0;
     printf("\n\nChoose : ");
     scanf("%d",&option);
       if (option==1)
       {
       clrscr();
       fnMovies4();
       }
       else
       {
	 exit(0);
       }
   }
   else if(SelectedMovie==100)
   {
    exit(0);
   }
   else if(SelectedMovie==101)
   {
    clrscr();
    fnCinema();
   }
}

void Timing()
{

 int count=1;
 int Size=sizeof(Time)/sizeof(Time[0]);
 printf("------------------------------------------------------------------------\n\n");
 for(i=0;i<Size;i++)
 {
   printf("%d.%s\n",count,Time[i]);
   count++;
 }
  printf("\t\t 100.EXIT\t 101.RETURN TO PREVIOUS STEP");
  printf("\nChoose Your Option : ");
  scanf("%d",&SelectTime);

  if(SelectTime<=4)
  {
   clrscr();
   fnseats();
  }
  else if(SelectTime>4&&SelectTime<=99)
   {
   printf("wrong input");
   printf("\nDo You Want To Continue\n1.YES\n2.NO");
     int option=0;
     printf("\n\nChoose : ");
     scanf("%d",&option);
       if (option==1)
       {
       clrscr();
       Timing();
       }
       else
       {
	 exit(0);
       }
   }
   else if(SelectTime==100)
   {
    exit(0);
   }
   else if(SelectTime==101)
   {
    clrscr();
    if(SelectCinema==1)
   {
     printf("\n------------------------------------------------------------\n");
     fnMovies1();
   }
   else if(SelectCinema==2)
   {
     printf("\n------------------------------------------------------------\n");
     fnMovies2();
    }
     else if(SelectCinema==3)
   {
     printf("\n------------------------------------------------------------\n");
     fnMovies3();
   }
     else if(SelectCinema==4)
   {
     printf("\n------------------------------------------------------------\n");
     fnMovies4();
   }
  }
}
void fnseats()
{
   printf("\n----------------------------------------------------------------\n\n");
   int NoofSeats=sizeof(Seats)/sizeof(Seats[0]);
   int count=1;
   for(i=0;i<NoofSeats;i++)
   {
     printf("%d.%s\n",count,Seats[i]);
     count++;
   }
     printf("\n\t\t     100.EXIT\t 101.RETURN TO PREVIOUS STEP");
   printf("\nChoose Your Option :");
   scanf("%d",&Seat);
   printf("\n");
   clrscr();
   printf("------------------------------------------------------------\n");

    if(Seat<=4)
    {
   printf("\nNumber of Seats you want to book:");
   scanf("%d",&NoofPerson);
   printf("\n\n");
    }

 if(Seat<=4)
 {
    if(Seat==1)
   {
     printf("\n%s\n\n",Seats[0]);
     printf("Your Total Amount=%d",Amount[0]*NoofPerson);

   }
   else if(Seat==2)
   {
     printf("\n%s\n",Seats[1]);
     printf("Your Total Amount=%d",Amount[1]*NoofPerson);

   }
   else if(Seat==3)
   {
     printf("\n%s\n",Seats[2]);
     printf("Your Total Amount=%d",Amount[2]*NoofPerson);

   }
   else if(Seat==4)
   {
     printf("\n%s\n",Seats[3]);
     printf("Your Total Amount=%d",Amount[3]*NoofPerson);
   }
   clrscr();
   PaymentMethod();
 }
 else if(Seat>4&&Seat<=99)
 {
  printf("WRONG INPUT");
  printf("Do You Want To Continue\n1.YES\n2.NO");
     int option=0;
     printf("\n\nChoose : ");
     scanf("%d",&option);
       if (option==1)
       {
       clrscr();
       fnseats();
       }
       else
       {
	 exit(0);
       }
 }
 else if(Seat==100)
 {
  exit(0);
 }
 else if(Seat==101)
 {
  clrscr();
  Timing();
 }
}

void PaymentMethod()
{
 printf("\n--------------------------------------------------------------------\n\n");
 int size=sizeof(PayMethod)/sizeof(PayMethod[0]);
 int count=1;
 int a=0;
 for(i=0;i<size;i++)
 {
   printf("%d.%s\n",count,PayMethod[i]);
   count++;
 }
  printf("\t\t100.EXIT\t 101.RETURN TO PREVIOUS STEP\n");
  printf("\nSelect Payment Method: ");
  scanf("%d",&SelectPayMethod);
  if(SelectPayMethod<=4)
  {
  clrscr();
  printf("\n--------------------------------------------------------------------\n");
  printf("\nDo You want to Pay\n1.YES\n2.NO");
  printf("\n\nPlease select= ");
  scanf("%d",&a);
  }
      if(a==1)
     {
     clrscr();
     Receipt();
     }
 else if(a==2)
  {
   printf("\n\t\tYou canceled your transaction\n\t\tThank you for your Valuable time");
  }
  else if(SelectPayMethod>2&&SelectPayMethod<99)
   {
      printf("\nWRONG INPUT");
      printf("\nDo You Want To Continue\n1.YES\n2.NO");
     int option=0;
     printf("\n\nChoose : ");
     scanf("%d",&option);
       if (option==1)
       {
       clrscr();
       PaymentMethod();
       }
       else
       {
	 exit(0);
       }
   }
   if(SelectPayMethod==100)
   {
     exit(0);
   }
   if(SelectPayMethod==101)
   {
     clrscr();
     fnseats();
   }

}
  void Receipt()
  {
    clrscr();
    printf("\n--------------------------------------------------------------------------------\n");
    printf("\t\t\t--------%s--------\n\n",CinemaHall[SelectCinema-1]);

    int movie=SelectedMovie-1;
    if(SelectCinema==1)
    {
    printf("Movie=%s\n",movies1[movie]);
    }

     if(SelectCinema==2)
    {
    printf("Movie=%s\n",movies2[movie]);
    }
     if(SelectCinema==3)
    {
    printf("\nMovie=%s\n",movies3[movie]);
    }
     if(SelectCinema==4)
    {
    printf("\nMovie=%s\n",movies4[movie]);
    }

    printf("\nMovie Time=(%s)\n",Time[SelectTime-1]);
    printf("\nSeat=%s\n",Seats[Seat-1]);
    printf("\nNumber Of Persons=%d\n",NoofPerson);
    if(Seat==1)
    {
    printf("\nAmount=%d\n",Amount[0]*NoofPerson);
    }
    if(Seat==2)

    {
    printf("\nAmount=%d\n",Amount[1]*NoofPerson);
    }
    if(Seat==3)
    {
    printf("\nAmount=%d\n",Amount[2]*NoofPerson);
    }
    if(Seat==4)
    {
    printf("\nAmount=%d\n",Amount[3]*NoofPerson);
    }
    printf("\nPayment Method=%s",PayMethod[SelectPayMethod-1]);
    printf("\n\n\t\t\t\t  THANK YOU");


    printf("\n--------------------------------------------------------------------------------\n");
  }