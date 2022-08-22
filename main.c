/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,i,j,k;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the input sum:");
    int input;
    scanf("%d",&input);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++)
        { 
        if (arr[i]+arr[j]==input){
            printf("%d %d\n",arr[i],arr[j]);
        }
        for(k=j+1;k<n;k++)
            {
                
           if (arr[i]+arr[j]+arr[k]==input){
               printf("%d %d %d\n",arr[i],arr[j],arr[k]);
           }
        }
    }
}
}
