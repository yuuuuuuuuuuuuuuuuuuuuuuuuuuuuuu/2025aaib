//week09-3.cpp
#include<stdio.h>
int main()
{
    printf("�п�J�j�p:");
    int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){\
			printf("*");
		}
		printf("\n",i);
	}
}
