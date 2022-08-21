#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int main(){
 	int n;
 	int sum=0;
 	printf("Nhap gia tri cua n: ");
 	scanf("%d",&n);
 	for(int i=1 ;i<n;i++ ){
 	    sum=sum + i*(i+1);
    }
    printf("%d",sum);
 	return 0;	
}
