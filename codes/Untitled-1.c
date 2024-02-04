#include<stdio.h>
#include<math.h>
int search(int a[],int x)
{   int flag,siz;
    siz=sizeof(a);
    for(int i=0;i<siz;i++)
    {
        if (a[i]==x)
        {
            flag=1;  
            printf("elment is present in array at %d",i);
            break;
        }
    }
    if(flag==0)
         printf("element is not found in the array\n");
}

int main()
{     int n;
    printf("enter no.of elements in array\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        printf("array elements is:");
     for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
   int x;
   printf("enter a element from array for search:");
   scanf("%d",&x);
   
   search(a,x);
   
}
