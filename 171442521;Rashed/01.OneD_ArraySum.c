
#include<stdio.h>
int main(){
    int a[10];   //Array-declaration-length:0 to 9
     int i,n;
     int sum=0;  // At first sum initial value 0
       printf("How many element you want to save\n");
    scanf("%d",&n);

    printf("Enter your element please\n");
        for(i=0;i<n;i++){
            //We are using a for loop to storing element
             printf("Enter number %d\n",(i+1));
            scanf("%d",&a[i]);
        }
         printf("This is your array list\n");
       for(i=0;i<n;i++){
            //Using this for loop to print element
            sum = sum + a[i]; // One by One element added and store to sum
        printf("%d\t",a[i]);
       }

      printf("\nSum of this array= %d\n",sum);
}
