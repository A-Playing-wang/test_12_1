#include"stdio.h"
#include<string.h>

#define N 3 
//#pragma warning(suppress : 4996)
#pragma warning(disable : 4996)//关闭4996提示
struct candidate//建立结构体
{
	char name[20];
	int count;

};
void who(struct candidate chair[], int n) //int 需要返回值，void 不需要
{
	for (int i = 0; i < n; i++)
		scanf("%s%d", chair[i].name, &chair[i].count);
		return;

}
void polling(struct candidate chair[], int n, int votes)
{
	char name[20];
	for (int i = 0; i < votes; i++) 
	{
		scanf("%s", name);
		return 0;
        for(int j = 0; j < n; j++)
			if (strcmp(chair[j].name, name) == 0)
			{
				chair[j].count++;
				break;
			}
	}
}
int publishing(struct candidate chair[], int n)
{
	int max = 0, who =0;
	for (int i=0;i<n;i++)
		if (chair [i].count > max)
		{
			max = chair [i].count;
			who = i;
		}
	return who;
}
void main()
{
	int votes = 10;
	struct candidate st_chair[N];
	printf("please apply %d candidate:\n", N);
	who(st_chair, N);
	printf("please vote vy input the candidate's ma,e within %d times:\n", votes);
	polling(st_chair, N, votes);
	int id = publishing(st_chair, N);
	printf("the chair is %s,the count of his vote is %d\n", st_chair[id].name, st_chair[id].count);
}