#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int length=100;

void linear_search(int a[],int num){
    int flag=0,i;
    
    for(i=0;i<(int)sizeof(a);i++)
    {
        for(int j=0; j<100000 ;j++)
        {
            int l=0;
        }
        if(a[i] == num)
        {
            flag = 1;
        }
    }

    if(flag==1)
        printf("Number found...");
    else
        printf("Number not found...");
        
}

void binary_search(int a[],int num)
{
    
    int i, low, high, mid, n, key, array[100];
    n = (int)sizeof(a);
    low = 0;
    high = n - 1;
    mid = (low+high)/2;
    while (low <= high) {
    if(array[mid] < key)
    low = mid + 1;
    else if (array[mid] == key) {
    printf("%d found at location %d\n", key, mid+1);
    return;
    }
    else
    high = mid - 1;
    mid = (low + high)/2;
    }
    if(low > high)
    {
    printf("Not found! %d isn't present in the list.n", key);
    return;
    }
}



int main() {
    int num,choice,i;
    clock_t start,end;
    double d;
    
    int a[100];
    for(int t=0;t<100;t++){
        a[i] =  rand()%100;
    }
    
    printf("Enter the number to be searched  : ");
    scanf("%d",&num);
    printf("1 - LinearSearch   and  2 - Binarysearch ");
    scanf("%d",&choice);
    if(choice==1){
        start = clock();
        linear_search(a,num);
        end = clock();
    }
    else{
        start = clock();
        binary_search(a,num);
        end = clock();
    }
    d = (end-start)/((double)CLOCKS_PER_SEC);
    printf("\n%f",d);
    return 0;
}

