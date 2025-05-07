#include<stdio.h>
#include<conio.h>
void movies1(int mov);
void movies2(int mov);
void movies3(int mov);
void movies4(int mov);
void timing(int time);
void seat(int seat);
void main ()
{
  clrscr();


  printf("      -----------------****** BOOK MY SHOW *******-------------------      \n");
  printf("\n\nCINEMA HALL\n\n1.INOX CINEMA HALL\t\t\t\t 2. PVR\n3.HINDI CINEMA HALL\t\t\t\t 4.SONALI CINEMA HALL");
  int cinema=0,mov;
  printf("\n\nCHOOSE A CINEMA FROM 1 TO 4 = ");
  scanf("%d",&cinema);

  switch(cinema)       // choosing cinema//
  {
    case 1:
	    printf("\nINOX CINEMA HALL\n");
	    movies1(mov);
	    break;
    case 2:
	    printf("\nPVR\n");
	    movies2(mov);
	    break;
    case 3:
	    printf("\nHINDI CINEMA HALL\n");
	    movies3(mov);
	    break;
    case 4:
	   printf("\nSONALI CINEMA HALL\n");
	   movies4(mov);
	   break;
    default:
	    printf("enter valid number");
	    break;
  }

  getch();
}

void movies1(int mov)      //choosing movies//
{
  int time;
  printf("\n-------------------------------------------------------------------\n");
  printf("\nCHOOSING MOVIES\n\n1.BAHUBALI \t\t\t\t 2.AVENGERS ENDGAME\n3.ANT MAN \t\t\t\t 4.SUZUME\n");
  printf("\n\nCHOOSE A MOVIE FROM 1 TO 4 = ");
  scanf("%d",&mov);
  if(mov==1)
  {
    printf("\nBAHUBALI\n");
    timing(time);

  }
  else if(mov==2)
  {
    printf("\nAVENGERS ENDGAME");
    timing(time);
  }
  else if(mov==3)
  {
    printf("\nANT MAN");
    timing(time);
  }
 else if(mov==4)
  {
    printf("SUZUME\n");
    timing(time);
  }
else
  {
    printf("wrong input");
  }

}
void movies2(int mov)      //choosing movies//
{
  int time;
  printf("\n-------------------------------------------------------------------\n");
  printf("\nCHOOSING MOVIES\n\n1.JINE NAHI DUNGA \t\t\t\t 2.THOR\n3.TERE NAAM \t\t\t\t 4.BRAMHASTER\n");
  printf("\n\nCHOOSE A MOVIE FROM 1 TO 4 = ");
  scanf("%d",&mov);
  if(mov==1)
  {
    printf("\nJINE NAHI DUNGA\n");
    timing(time);

  }
  else if(mov==2)
  {
    printf("\nTHOR");
    timing(time);
  }
  else if(mov==3)
  {
    printf("\nTERE NAAM");
    timing(time);
  }
 else if(mov==4)
  {
    printf("BRAMHASTER\n");
    timing(time);
  }
else
  {
    printf("wrong input");
  }

}void movies3(int mov)      //choosing movies//
{
  int time;
  printf("\n-------------------------------------------------------------------\n");
  printf("\nCHOOSING MOVIES\n\n1.KANCHANA \t\t\t\t 2.ADIPURUSH\n3.MERI JUNG \t\t\t\t 4.AAHAT\n");
  printf("\n\nCHOOSE A MOVIE FROM 1 TO 4 = ");
  scanf("%d",&mov);
  if(mov==1)
  {
    printf("\nKANCHANA\n");
    timing(time);

  }
  else if(mov==2)
  {
    printf("\nADIPURUSH\n");
    timing(time);
  }
  else if(mov==3)
  {
    printf("\nMERI JUNG\n");
    timing(time);
  }
 else if(mov==4)
  {
    printf("AAHAT\n");
    timing(time);
  }
else
  {
    printf("wrong input");
  }

}
void movies3(int mov)      //choosing movies//
{
  int time;
  printf("\n-------------------------------------------------------------------\n");
  printf("\nCHOOSING MOVIES\n\n1.DRISHYAM \t\t\t\t 2.A SILENT VOICE\n3.IRON MAN \t\t\t\t 4.ROBOT 2.O\n");
  printf("\n\nCHOOSE A MOVIE FROM 1 TO 4 = ");
  scanf("%d",&mov);
  if(mov==1)
  {
    printf("\nDRISHYAM\n");
    timing(time);

  }
  else if(mov==2)
  {
    printf("\nA SILENT VOICE\n");
    timing(time);
  }
  else if(mov==3)
  {
    printf("\nIRON MAN\n");
    timing(time);
  }
 else if(mov==4)
  {
    printf("\nROBOT 2.0\n");
    timing(time);
  }
else
  {
    printf("wrong input");
  }

}

void timing(int time)
{
 printf("\n------------------------------------------------------------------");
 printf("\n1. 11.00 AM \t\t\t\t2. 2.00 PM\n3. 5.00 PM\t\t\t\t 4.8.00 PM\n");
 printf("\nCHOOSE A TIMING FROM 1 TO 4 = ");
 scanf("%d",&time);
 if(time==1)
 {
   printf("\n11.00 AM");
 }
 else if(time==2)
 {
  printf("\n2.00 PM");

 }
  else if(time==3)
 {
  printf("\n5.00 PM");
 }
  else if(time==4)
 {
  printf("\n8.00 PM");
 }
 else
 printf("wrong input");
}

void seat(int seat)
{
  printf("\n------------------------------------------------------------------");
  printf("");

}