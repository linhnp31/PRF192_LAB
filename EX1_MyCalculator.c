#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
    int choice;
    int n,x;
    int res;
    do{
        printf(" Calculator|Choose action to do with 2 numbers :\n");
        printf("1. Sum\n");
        printf("2. Subtraction\n");
        printf("3. Multiply\n");
        printf("4. Division Multiply\n");
        printf("0. Exit\n");
        printf("---------------------------\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        // su dung switch case
        switch(choice){
            case 1: 
				printf("How many intergers? ");
				scanf("%d",&n);
				for(int i=1;i<n+1;i++){
					printf("Enter num ber %d : ",i);
					scanf("%d",&x);
					res=res+x;
				}
				printf("Result is : %d\n",res);
				break;
            case 2: 
				printf("How many intergers? ");
				scanf("%d",&n);
				printf("Enter num ber 1 : ");
				scanf("%d",&res);
				for(int i=2;i<n+1;i++){
					printf("Enter num ber %d : ",i);
					scanf("%d",&x);
					res=res-x;
				}
				printf("Result is : %d\n",res);
				break;
            case 3: 
            	printf("How many intergers? ");
				scanf("%d",&n);
				res=1;
				for(int i=1;i<n+1;i++){
					printf("Enter num ber %d : ",i);
					scanf("%d",&x);
					res=res*x;
				}
				printf("Result is : %d\n",res);
				break;
            case 4: 
            	printf("How many intergers? ");
				scanf("%d",&n);
				printf("Enter num ber 1 : ");
				scanf("%d",&res);
				for(int i=2;i<n+1;i++){
					printf("Enter num ber %d : ",i);
					scanf("%d",&x);
					res=res/x;
				}
				printf("Result is : %d\n",res);
				break;
            case 0: printf("See you again !");break;
            default: printf("Invalid value\n");break;
        }        
    }while(choice!=0);

    return 0;
}
