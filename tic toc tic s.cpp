#include<stdio.h>
#include<string.h>
#include<math.h>

void chance(int);
void showTicTacToe( char arr[9])
{
system("cls");
printf("\n");
printf("\n");
printf("########################### Tic Tac Toe  ####################################");
printf("\n");
printf("\n");
printf("First Player = x \n");
printf("Second Player = 0 \n");
printf("\n");
printf("\n");

for(int i=0;i<9;)
{
    printf("     |      |      \n");
    printf(" %c   |  %c   |   %c  \n",arr[i],arr[i+1],arr[i+2]);
    printf("_____|______|______\n");
    i=i+3;
}
printf("\n");
printf("\n");
printf("#######################################################################");

//system("cls");
}
 void play(char num ,char arr[9],char sign)
{
 for(int i=0;i<9;i++)
 {
   if( arr[i]==num )
       arr[i]=sign;
 }
}

void showSquare( char arr[9])
{
  for(int i=0;i<9; )
  {
    printf("        |         |        \n");
    printf("  %c     |    %c    |    %c  \n",arr[i],arr[i+1],arr[i+2]);
    printf("________|_________|________\n");
    i=i+3;
  }

}
int winning( char arr[9])
{
if(arr[0]=='X'&& arr[1]=='X'&& arr[2]=='X'||arr[0]=='O'&& arr[1]=='O'&& arr[2]=='O')
    return 1;
else if(arr[3]=='X'&& arr[4]=='X'&& arr[5]=='X'||arr[3]=='O'&& arr[4]=='O'&& arr[5]=='O')
     return 1;
else if(arr[6]=='X'&& arr[7]=='X'&& arr[8]=='X'||arr[6]=='X'&& arr[7]=='X'&& arr[8]=='X')
     return 1;
else if(arr[0]=='X'&& arr[3]=='X'&& arr[6]=='X'||arr[0]=='O'&& arr[3]=='O'&& arr[6]=='O')
     return 1;
else if(arr[1]=='X'&& arr[4]=='X'&& arr[7]=='X'||arr[1]=='O'&& arr[4]=='O'&& arr[7]=='O')
     return 1;
else if(arr[2]=='X'&& arr[5]=='X'&& arr[8]=='X'||arr[2]=='O'&& arr[5]=='O'&& arr[8]=='O')
     return 1;
else if(arr[0]=='X'&& arr[4]=='X'&& arr[8]=='X'||arr[0]=='O'&& arr[4]=='O'&& arr[8]=='O')
     return 1;
else if(arr[2]=='X'&& arr[4]=='X'&& arr[6]=='X'||arr[2]=='O'&& arr[4]=='O'&& arr[6]=='O')
     return 1;
 else
    return 0;
}
int main()
{
char sign;
char i;
char m;
int key;
char arr[9]={'1','2','3','4','5','6','7','8','9'};

printf("\n Enter your choice \n");
printf("1.Wants to play with Smart Computer \n");
printf("2.Wants to play with Evil Computer \n");
printf("3.Wants to play with player \n");
printf("4.Exit\n");
scanf("%d",&key);
switch(key)
{
// case 1:
 //case 2:
 case 03:
     system("cls");
     fflush(stdin);
     showTicTacToe(arr);

     for(i=49;i<58;i++)
   {
       if(i==49)
        {
           sign=88;//x
           printf("\n Player 1, Enter the marking place: ");
           scanf("%c",&m);
           play(m,arr,sign);
           showTicTacToe(arr);
           fflush(stdin);
           if(winning(arr))
               break;
        }
       else if(i==50)
        {
           sign=79;//0
           printf("\n Player 2,Enter the marking place: ");
           scanf("%c",&m);
           play(m,arr,sign);
           showTicTacToe(arr);
           fflush(stdin);
           if(winning(arr))
             break;
        }
        else if(i==51)
        {
           sign=88;//x
           printf("\n Player 1, Enter the marking place: ");
           scanf("%c",&m);
           play(m,arr,sign);
           showTicTacToe(arr);
           fflush(stdin);
           if(winning(arr))
              break;
        }
        else if(i==52)
        {
           sign=79;//0
           printf("\n Player 2,Enter the marking place: ");
           scanf("%c",&m);
           play(m,arr,sign);
           showTicTacToe(arr);
           fflush(stdin);
           if(winning(arr))
             break;
        }
        else if(i==53)
        {
           sign=88;//x
           printf("\n Player 1, Enter the marking place: ");
           scanf("%c",&m);
           play(m,arr,sign);
           showTicTacToe(arr);
           fflush(stdin);
           if(winning(arr))
             break;
        }
        else if(i==54)
        {
           sign=79;//0
           printf("\n Player 2, Enter the marking place: ");
           scanf("%c",&m);
           play(m,arr,sign);
           showTicTacToe(arr);
           fflush(stdin);
           if(winning(arr))
              break;
        }
        else if (i==55)
        {
           sign=88;//x
           printf("\n Player 1, Enter the marking place: ");
           scanf("%c",&m);
           play(m,arr,sign);
           showTicTacToe(arr);
           fflush(stdin);
           if(winning(arr))
             break;
        }
       else if(i==56)
        {
           sign=79;//0
           printf("\n Player 2, Enter the marking place: ");
           scanf("%c",&m);
           play(m,arr,sign);
           showTicTacToe(arr);
           fflush(stdin);
           if(winning(arr))
             break;
        }
        else if(i==57)
        {
           sign=88;//x
           printf("\n Player 1, Enter the marking place: ");
           scanf("%c",&m);
           play(m,arr,sign);
           showTicTacToe(arr);
           fflush(stdin);
           if(winning(arr))
             break;
        }
        else if(i==58)
        {
           sign=79;//0
           printf("\n Player 2, Enter the marking place: ");
           scanf("%c",&m);
           play(m,arr,sign);
           showTicTacToe(arr);
           fflush(stdin);
           if(winning(arr))
             break;
        }
   }
   printf("\n");
   if(i<58)
     printf("you win");
   else
     printf("Match Draw");
}
return 0;
}



