///week05-1.cpp
///�}�C Array
#include <stdio.h>
int main()
{///�}�C�ŧi���|�� �̭���l����k��j�A��
    int a[4]={10,20,30,40};
    for(int i=0;i<4;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    a[0]=99;///�Y�@���L����
    for(int i=0;i<4;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
