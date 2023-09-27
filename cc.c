/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,j,a[i],n=5,b[i];
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }    
    for(i=0;i<n;i++){
        b[i]=a[i];       
}
printf("the array copied is");
for(i=0;i<n;i++){
    
    printf("%d",b[i]);
}

    return 0;
}
