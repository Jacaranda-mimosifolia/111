#include<stdio.h>
int arr[5] = {10,20,30,40,50};
int i = 0;

int main()
{
    printf("����:\n\n");
    printf("ʮ���Ʊ�ʾ�����ݣ�\n");
    for(i = 0 ; i < 5 ; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    printf("\n\nָ����ʽʮ�����Ʊ�ʾ�����ݣ�\n");
    for(i = 0 ; i < 5 ; i++)
    {
        printf("%p\t",arr[i]);

    }
    
    printf("\n\n��ͨʮ�����Ʊ�ʾ�����ݣ�\n");
    for(i = 0 ; i < 5 ; i++)
    {
        printf("%x\t",arr[i]);
    }

    printf("\n\n\n��ַ:\n");
    printf("\n\nʮ���Ʊ�ʾ�ĵ�ַ��\n");
    for(i = 0 ; i < 5 ; i++)
    {
        printf("%d\t",&arr[i]);
    }

    printf("\n\nָ����ʽʮ�����Ʊ�ʾ�ĵ�ַ��\n");
    for(i = 0 ; i < 5 ; i++)
    {    
        printf("%p\t",&arr[i]);
    }
    
    printf("\n\n��ͨʮ�����Ʊ�ʾ�ĵ�ַ��\n");
    for(i = 0 ; i < 5 ; i++)
    {
        printf("%x\t",&arr[i]);
    }
    printf("\n");
	return 0;
}
