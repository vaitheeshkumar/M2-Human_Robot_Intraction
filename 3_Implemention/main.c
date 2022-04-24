#include<stdio.h>

#include <stdlib.h> 
int left=0, right=0, up=0,down=0;

void fun(int r,int c,char arr[r][c], int i, int j.int L,int R, int U, int D)

{

if(i==r-1 && j==c-1){

left=L;

right=R;

up=U;

down=D;

return;

}

if(i<0 || j<0 || i>=r || j>=c || arr[i][j] == '*')return; 
if(arr[i][j]=='|'){
arr[i][j]='*'; 
fun(r,c,arr,i-1,j,L,R,U+1,0); 
fun(r,c,arr,i+1,j,L,R,U,D+1); 
arr[i][j]='|':
}

else if(arr[i][j]== '-'){
arr[i][j]='*';
func(r,c,arr,i,j-1,L+1,R,U,D); 
func(r,c,arr,i,j+1,L,R+1,U,D); 
arr[i][j]='-';

return;

}

int main()
{
int r,c:

scanf("%d %d\n",&r,&c);
char arr[r][c]:
for (int i=0;i<r;++i)
{
for(int j 0; j<c;++j)
{
scanf("%c",&arr[i][j]);
}
}
fun(r,c,arr,0,0,0,0,0,0);

printf("%d %d %d %d", left, right, up, down);

return 0;

}
