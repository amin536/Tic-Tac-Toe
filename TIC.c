#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int i,j,ch1,ch2;
static int m,x,y,z,g,k,h,l1[10][10],l2[10][10],f[10],p;
static int userch,replaych;
 char b[3][3]={'\0'};
char player1[10],player2[10],enter[1],press;
void selectplayer1(int ch1);
void r();
void selectplayer2(int ch2);
void dis();
void lockplayer1choice();
void lockplayer2choice();
void lockcompchoice();
void winplayer1();
void winplayer2();
void selectch();
void player1win();
void player2win();
void replay();

void main()
{
 selectch();

}

void selectch()
{
system("clear");
printf("\t\t\t\t TIC-TAC-TOE");
printf("\n\t\t\t\t   MENU"); 
		printf("\n\t1.SINGLE PLAYER");
		printf("\n\t2.MULTI PLAYER");
		printf("\n\tENTER YOUR CHOICE 1 OR 2\n");
		redo:scanf("%d",&userch);

		system("clear");
		if(userch==1)
			{
					printf("\t\tSINGLE PLAYER\n");
			printf("\n ENTER PLAYER ONE'S NAME\n");
			scanf("%s",player1);
			gets(enter);
			}
		else if(userch==2)
{
		printf("MULTI PLAYER\n");
	
printf("\n ENTER PLAYER ONE'S NAME\n");
scanf("%s",player1);
gets(enter);
printf("\n\n");
printf(" ENTER PLAYER TWO'S NAME\n");
gets(player2);

		
}
else
{
printf("enter a valid choice\n");
enter[0]=getchar();
replay();
}


system("clear");
printf("\t\t\t\t HOW TO PLAY(Instructions) \n\n1.If the player wants to play his turn at 1st position  press 1 , position 2 press 2 and so on  (using  number pad).\n2.The object of Tic Tac Toe is to get three in a row.\n3. You play on a three by three game board.\n4.The first player is known as X and the second is O .\n5.Players alternate placing Xs and Os on the game board until either oppent has three in a row or all nine squares are filled.\n6. X always goes first, and in the event that no one has three in a row, the stalemate is called a cat game.\n");
sleep(2);
printf("\n\n\n\t\t\t\t\t\t\t\tPRESS ENTER TO CONTINUE ");
press=getchar();


system("clear");		
for(i=3;i>=1;i--)
{
		printf(" GAME STARTS IN %d \n" ,i);
		sleep(1);
if(i==3)
{

printf("\n\n\n\nTTTTTTTTTTTTTTTTTT   IIIIIIIIIIIIIIIIII   CCCCCCCCCCCCCCCCC\n");
printf("TTTTTTTTTTTTTTTTTT   IIIIIIIIIIIIIIIIII   CCCCCCCCCCCCCCCCC\n");
printf("TTTTTTTTTTTTTTTTTT   IIIIIIIIIIIIIIIIII   CCCCCCCCCCCCCCCCC\n");
printf("     TTTTTTT              IIIIIIII        CCC              \n");  
printf("     TTTTTTT              IIIIIIII        CCC              \n");    
printf("     TTTTTTT              IIIIIIII        CCC              \n");    
printf("     TTTTTTT              IIIIIIII        CCC              \n"); 
printf("     TTTTTTT              IIIIIIII        CCC              \n");    
printf("     TTTTTTT              IIIIIIII        CCC              \n");    
printf("     TTTTTTT              IIIIIIII        CCC              \n");    
printf("     TTTTTTT              IIIIIIII        CCCCCCCCCCCCCCCCC\n");   
printf("     TTTTTTT          IIIIIIIIIIIIIIIIII  CCCCCCCCCCCCCCCCC\n");
printf("     TTTTTTT          IIIIIIIIIIIIIIIIII  CCCCCCCCCCCCCCCCC\n");





sleep(.5);
system("clear");
}
else if(i==2)
{
printf("\n\n\n\nTTTTTTTTTTTTTT      AAAAAAAAAAAAAA   CCCCCCCCCCCCCCCCC\n");
printf("TTTTTTTTTTTTTT      AAAAAAAAAAAAAA   CCCCCCCCCCCCCCCCC\n");
printf("TTTTTTTTTTTTTT      AAAAAAAAAAAAAA   CCCCCCCCCCCCCCCCC\n");
printf("   TTTTTT           AAA        AAA   CCC              \n");
printf("   TTTTTT           AAA        AAA   CCC              \n");
printf("   TTTTTT           AAA        AAA   CCC              \n");
printf("   TTTTTT           AAA        AAA   CCC              \n");
printf("   TTTTTT           AAAAAAAAAAAAAA   CCC              \n");
printf("   TTTTTT           AAA        AAA   CCC              \n");
printf("   TTTTTT           AAA        AAA   CCCCCCCCCCCCCCCCC\n");
printf("   TTTTTT           AAA        AAA   CCCCCCCCCCCCCCCCC\n");
printf("   TTTTTT           AAA        AAA   CCCCCCCCCCCCCCCCC\n");

sleep(.5); 
system("clear");
}
else
{
printf("\n\n\nTTTTTTTTTTTTTTTTTTTTTT OOOOOOOOOOOOOOOOOOOOOOO EEEEEEEEEEEEEEEEEEEEEE\n");    
printf("TTTTTTTTTTTTTTTTTTTTTT OOOOOOOOOOOOOOOOOOOOOOO EEEEEEEEEEEEEEEEEEEEEE\n");    
printf("TTTTTTTTTTTTTTTTTTTTTT OOOOOOOOOOOOOOOOOOOOOOO EEEEEEEEEEEEEEEEEEEEEE\n");    
printf("     TTTTTTTT          OOOOOO           OOOOOO EEEEEEE\n");   
printf("     TTTTTTTT          OOOOOO           OOOOOO EEEEEEE\n");   
printf("     TTTTTTTT          OOOOOO           OOOOOO EEEEEEE\n");   
printf("     TTTTTTTT          OOOOOO           OOOOOO EEEEEEE\n");   
printf("     TTTTTTTT          OOOOOO           OOOOOO EEEEEEEEEEEEEEEEEEEEEE\n"); 
printf("     TTTTTTTT          OOOOOO           OOOOOO EEEEEEEEEEEEEEEEEEEEEE\n");   
printf("     TTTTTTTT          OOOOOO           OOOOOO EEEEEEE\n");   
printf("     TTTTTTTT          OOOOOO           OOOOOO EEEEEEE\n");
printf("     TTTTTTTT          OOOOOO           OOOOOO EEEEEEE\n"); 
printf("     TTTTTTTT          OOOOOO           OOOOOO EEEEEEE\n"); 
printf("     TTTTTTTT          OOOOOOOOOOOOOOOOOOOOOOO EEEEEEEEEEEEEEEEEEEEEEE\n"); 
printf("     TTTTTTTT          OOOOOOOOOOOOOOOOOOOOOOO EEEEEEEEEEEEEEEEEEEEEEE\n");
printf("     TTTTTTTT          OOOOOOOOOOOOOOOOOOOOOOO EEEEEEEEEEEEEEEEEEEEEEE\n"); 
sleep(.5);

}

		
}
		
system("clear");


switch(userch)
{

case 1:
		
                 dis();   
                      

		for(m=1;m<6;m++)
		{

rter:printf("\n\n\n%s's turn \n",player1);                //player1
	scanf("%d",&ch1);
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
{
if(l1[i][j]==ch1)
{
printf("\nInvalid position\nRe-enter\n");
sleep(3);
system("clear");
dis();
goto rter;
}
}

for(i=0;i<=9;i++)
 if(f[i]==ch1)
{

printf("\nInvalid position\nRe-enter\n");
sleep(2);
system("clear");
dis();
goto rter;


}



		selectplayer1(ch1);
		b[i][j]='x';
		winplayer1();
		lockplayer1choice();
                      if(m==5)
			{
			printf("\n\n DRAW !! \n GAME OVER \n\n");
sleep(2);
replay();
			}
else
{
		r();                                     //calling computer player 
		b[i][j]='o';
		winplayer2();
                lockcompchoice();
		system("clear");
            
		dis(); 
                      
}
  }
break;                       
case 2:
	dis();
	    
	for(m=1;m<6;m++)
	{

reenter:printf("\n\n\n%s's turn \n",player1);                //player1
	scanf("%d",&ch1);
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
{
if(l1[i][j]==ch1)
{

printf("\nInvalid position\nRe-enter\n");
sleep(2);
system("clear");
dis();
goto reenter;

}
else if(l2[i][j]==ch1)
{

printf("\nInvalid position\nRe-enter\n");
sleep(2);
system("clear");
dis();
goto reenter;


}
}
	selectplayer1(ch1);
	b[i][j]='x';
        system("clear");
        dis();
	winplayer1();
	lockplayer1choice();

	         //player2
			if(m==5)
			{
			printf("\n\n DRAW !! \n GAME OVER \n\n");
sleep(2);
                         replay();
			}

			else{
				renter:printf(" \n\n%s's turn \n\n",player2);
				scanf("%d",&ch2);
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
{
if(l2[i][j]==ch2)
{

printf("\nInvalid position\nRe-enter\n");
sleep(2);
system("clear");
dis();
goto renter;

}
else if(l1[i][j]==ch2)
{

printf("\nInvalid position\nRe-enter\n");
sleep(2);
system("clear");
dis();
goto renter;


}
}
				selectplayer2(ch2);
				b[i][j]='o';
				lockplayer2choice();
				winplayer2();
				
				system("clear");

				dis();
				}
}
	break;
	default : printf("enter a valid choice ");
                  exit(0);
   }

}

void selectplayer1(int ch1)                                         //player1
{
		switch(ch1)
		{
		case 1:i=0;j=0;
		

		x=i;y=j;
		break;
		case 2:i=0;j=1;
		

		x=i;y=j;
		break;
		case 3:i=0;j=2;
		

		x=i;y=j;
		break;
		case 4:i=1;j=0;
		

		x=i;y=j;
		break;
		case 5:i=1;j=1;
		
		x=i;y=j;
		break;
		case 6:i=1;j=2;
		
		x=i;y=j;
		break;
		case 7:i=2;j=0;
		
		x=i;y=j;
		break;
		case 8:i=2;j=1;
		

		x=i;y=j;
		break;
		case 9:i=2;j=2;
		

		x=i;y=j;
		break;
		default: printf("retry \n");

exit(0);
		}
}
void selectplayer2(int ch2)                     // player 2
{
		switch(ch2)
		{
		case 1:i=0;j=0;
	
	
		x=i;y=j;
		break;
		case 2:i=0;j=1;
		
		x=i;y=j;
		break;
		case 3:i=0;j=2;
		

		x=i;y=j;
		break;
		case 4:i=1;j=0;
		
		x=i;y=j;
		break;
		case 5:i=1;j=1;
		
		x=i;y=j;
		break;
		case 6:i=1;j=2;
		
		x=i;y=j;
		break;
		case 7:i=2;j=0;
		
		x=i;y=j;
		break;
		case 8:i=2;j=1;
		
		x=i;y=j;break;
		case 9:i=2;j=2;
		
		x=i;y=j;
		break;
		default: printf("\n\n\nretry");
		}
}
void r()                          //computer player
{
		srand(time(0));
		label:z=rand()%9+1;
		for(i=0;i<=10;i++)
		if(z==f[i])
		goto label;
		for(i=0;i<=2;i++)
		for(j=0;j<=2;j++)
		{
		if(z==l1[i][j])
		goto label;
		}
       selectplayer2(z);
}

void dis()
{

for(i=0;i<=2;i++)
{
printf("\n");
printf("\t\t\t\t");

for(j=0;j<=2;j++)
{

printf("  %c|",b[i][j]);

}
printf("\n\t\t\t\t __________");
}
}
void lockplayer1choice()
{
l1[x][y]=ch1;

}
void lockplayer2choice()
{
l2[x][y]=ch2;

}
void lockcompchoice()
{
p++;
f[p]=z;
}
void winplayer2()
{

if(b[0][0]=='o' && b[0][1]=='o' && b[0][2]=='o'  )
{ 
player2win();
replay();
}
else if(b[0][0]=='o' && b[1][1]=='o' && b[2][2]=='o' )
{
player2win();
}
else if(b[1][0]=='o' && b[1][1]=='o' && b[1][2]=='o'  )
{player2win();
}
else if(b[2][0]=='o' && b[2][1]=='o' && b[2][2]=='o')
{player2win();
}
else if(b[0][0]=='o' && b[1][0]=='o' && b[2][0]=='o'  )
{player2win();
}
else if(b[0][1]=='o' && b[1][1]=='o' && b[2][1]=='o' )
{player2win();

exit(0);
}
else if(b[0][2]=='o' && b[1][1]=='o' && b[2][0]=='o')
{
player2win();
}
else if(b[0][2]=='o' && b[1][2]=='o' && b[2][2]=='o'  )
{
player2win();
}
}
void winplayer1()
{

if(b[0][0]=='x' && b[0][1]=='x' && b[0][2]=='x')
{ 
player1win();


}
else if(b[0][0]=='x' && b[1][1]=='x' && b[2][2]=='x' )
{
player1win();

}
else if(b[1][0]=='x' && b[1][1]=='x' && b[1][2]=='x'   )
{player1win();

}
else if(b[2][0]=='x' && b[2][1]=='x' && b[2][2]=='x'  )
{player1win();

}
else if(b[0][0]=='x' && b[1][0]=='x' && b[2][0]=='x'  )
{
player1win();

}
else if(b[0][1]=='x' && b[1][1]=='x' && b[2][1]=='x' )
{
player1win();

}
else if(b[0][2]=='x' && b[1][1]=='x' && b[2][0]=='x')
{
player1win();

}
else if(b[0][2]=='x' && b[1][2]=='x' && b[2][2]=='x'   )
{
player1win();

}
}
void player1win()
{
system("clear");
dis();
printf("\n\n %s WINS \n",player1);
sleep(3);
replay();

}
void player2win()
{
system("clear");dis();
if(userch==1)
printf("\n \n%s loose!!\n",player1);
else
printf("\n\n %s  wins!! \n",player2 );
sleep(3);
replay();

}
void replay()
{
if(userch!=1 || userch!=2)
goto wrong;
else
{

wrong :system("clear");
printf("1.PLAY AGAIN!!\n2.EXIT\n\nENTER YOUR CHOICE\n");
scanf("%d",&replaych);
if(replaych==1)
{
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
b[i][j]='\0';
selectch();
}
else
{
printf("\n HOPE YOU ENJOYED!!\n");
exit(0);
}
}
}

