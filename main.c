#include <stdio.h>
#include <stdlib.h>


void play();
void show(char arr[][3]);
int check(char arr[][3]);

int main()
{
    play();
    return 0;
}

void play(){
    int a,b;
    char arr[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    show(arr);

    int player_no=1;
    while(1){
        player_input(arr,1);
        show(arr);
        if (check(arr)){
            printf("\nPlayer 1 wins\n");
            break;}
        player_input(arr,2);
        show(arr);
        if (check(arr)) {
            printf("\nPlayer 2 wins\n");
            break;
        }
    }
        }

void player_input(char arr[][3],int player_no){
    int input,r,c;

    while(1){
        printf("\nPlayer %d , enter a number : ",player_no);
        scanf("%d",&input);
        r=input/3;  // 1/3
        c=input%3;  // 1%3
        if(arr[r][c-1]=='X' || arr[r][c-1]=='O'||input<=0 || input>9){
            printf("Invalid input\n");
        }
        else break;}

    if(player_no==1){
        arr[r][c-1]='X';
        }
    else if(player_no==2){
        arr[r][c-1]='O';
        }
    }


void show(char arr[][3]){
    for(int i=0;i<3;++i){
        printf("\n");
        for(int j=0;j<3;++j){
            printf("\t%c\t",arr[i][j]);
            if(j==2){
            printf("\n");
            }
        }
    }
}

int check(char arr[][3]){
    for(int i=0;i<3;++i){
        if((arr[i][0]==arr[i][1])&&(arr[i][1]==arr[i][2]) ){
            return 1;
        }
        if(((arr[0][i]==arr[1][i])&&(arr[1][i]==arr[2][i]))){
            return 1;
        }
        if(i==0){
            if((arr[i][i]==arr[i+1][i+1])&&(arr[i+2][i+2]==arr[i+1][i+1])){
            return 1;
            }
        }
        if(i==2){
            if((arr[i-2][i]==arr[i-1][i-1]) && (arr[i-1][i-1]==arr[i][i-2])){
            return 1;
            }
        }

    }
    return 0;
}
