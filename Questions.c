


// Question no 2 source code
#include<stdio.h>
int collatz(int number){
 int maxseries=0;

while (number != 1)
{
     if (number % 2 == 0 )
     {
      number /= 2;
     }
     else {
      number = number *3 + 1;
      maxseries++;
     }
maxseries++;


}
return maxseries;

}



int main(){
    int seriesNum,serieslength;

    printf("Enter a number untill which to find collatz series \n");
    scanf("%d",&seriesNum);
    collatz(seriesNum);
    serieslength=collatz(seriesNum);
    printf("The colatz series for %d is  \n",seriesNum);
    printf("The length of colatz series is %d \n",serieslength);
    return 0;
}
