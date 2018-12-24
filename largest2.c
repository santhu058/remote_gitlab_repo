/* C Program to Find Largest of Two numbers */ 
   
#include <stdio.h>  
   
void main() {  
    int a, b;  
    printf("Please Enter Two different numbers\n");  
    scanf("%d %d", &a, &b);  
    
    if(a > b) 
    {
        printf("%d is Largest\n", a);          
    } 
    else if (b > a)
    { 
        printf("%d is Largest\n", b);  
    } 
    else 
    {
	printf("Both are Equal\n");
    }
   
   // return 0;  
}
