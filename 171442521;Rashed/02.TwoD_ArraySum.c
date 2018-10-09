#include<stdio.h>
void main(){

int a[3][3];    //Array-declaration [row] [column]
int i,j,row,col,sum;
sum=0;      // At first sum initial value 0
printf("How many rows you want \n");
    scanf("%d", &row);
    printf("How many columns you want \n");
    scanf("%d", &col);

    printf("Enter your array Element one by one\n");
    for(i=0;i<row;i++){   //First for loop to storing row wise  element
        for(j=0;j<col;j++){    //Second for loop to storing column wise  element
            scanf("%d",&a[i][j]);
        }
    }
    printf("your array is\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
                if(i==j){    //When i index value and j index value same this condition work
                if(a[i][j]%2!=1){ //checking element is even or odd
                     sum = sum+a[i][j]; // even element added and store to sum

                    }
                }
        }
    }
    for(i=0;i<row;i++){  //For print using those for loop
        for(j=0;j<col;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("\nsum=%d",sum);


}
