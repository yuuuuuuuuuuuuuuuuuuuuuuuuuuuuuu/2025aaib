// week03-4.cpp
#include <stdio.h>
int main()
{
	int ans=0;///答案加到這裡面
	///迴圈前面ans是0
	int N;///有一個整數N
	scanf("%d", &N);///讀入N
	///人類的迴圈 從1開始,<=
	for(int i=1; i<=N; i++){
	ans+=i;///迴圈中間修改ans
	}
	printf("%d",ans);
}///印出答案
