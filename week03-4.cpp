// week03-4.cpp
#include <stdio.h>
int main()
{
	int ans=0;///���ץ[��o�̭�
	///�j��e��ans�O0
	int N;///���@�Ӿ��N
	scanf("%d", &N);///Ū�JN
	///�H�����j�� �q1�}�l,<=
	for(int i=1; i<=N; i++){
	ans+=i;///�j�餤���ק�ans
	}
	printf("%d",ans);
}///�L�X����
