#include<stdio.h>
    /* Created a structure here. The name of the structure is
 * employee.
 */
 struct employee{
    int id;
   char  name[30];
    int salary;
 };
 int main(){
    int i;
    struct employee emp[2];
    printf("Enter your employee id,name,salary\n");
        for(i=0;i<2;i++){     //using for loop to store data
            printf("Enter Id\n");
            scanf("%d",&emp[i].id);
             printf("Enter Name\n");
            scanf("%s",&emp[i].name);
             printf("Enter Salary\n");
            scanf("%d",&emp[i].salary);
        }
        printf("\nNow see your employee details\n");
        for(i=0;i<2;i++){
printf("Records of employee : %d \n", i+1);
              printf("Id:%d\n",emp[i].id);
               printf("Name:%s\n",emp[i].name);
                printf("Salary:%d\n",emp[i].salary);
        }
        return 0;

 }
