#include<stdio.h>

int main(){
    int num,flag=0,i;
    int a[] = {1,2,3,4,5,6,7,8,9};
    //num = 5;
    printf("Enter the number to be searched  : ");
    scanf("%d",&num);

    for(i=0;i<10;i++)
    {
        if(a[i] == num)
        {
            flag = 1;
        }
    }

    if(flag==1)
        printf("Number found...");
    else
        printf("Number not found...");

    return 0;
}
