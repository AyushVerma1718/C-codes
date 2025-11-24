#include<stdio.h>
int main()
{
    
    int num;

    printf("Enter your marks: ");
    scanf("%d",&num);

    if(num>50){
        printf("Marks Invalid");
    }
    else if(num>=45){
        printf("Result: Grade A");
    }
    else if(num>=40){
        printf("Result: Grade B");
    }
    else if(num>=30){
        printf("Result: Grade C");
    }
    else{  //this means num<30 
        printf("Result: FAIL");
    }

    return 0;
}

/*this is a multiline comment
yes it is and it works
*/
