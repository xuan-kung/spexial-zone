//�ڶ���T1��˳���Ľ���������   1901  20191003128  ����� 
#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;


#define MAXSIZE 100
typedef int ElemType;//ElemType ����Ϊint���͵��������� 

typedef struct{
	ElemType *elem;//�洢�ռ�Ļ���ַ 
	int length;//��ǰ���� 
	int listsize;
}SqList;

int n;

void creat(SqList &L,int n)
{
	L.elem=(ElemType*)malloc(sizeof(MAXSIZE));//
	L.length=0;
	ElemType q;
	for(int i=0;i<n;i++)
	{
		cin>>q;
		L.elem[L.length++]=q;
	} 
	for(int i=0;i<L.length;i++)
	   {
	   cout<<L.elem[i];
	   if(i==(L.length-1))cout<<endl;
	   else cout<<" ";
	 
	   }
	return;
}

int main()
{
	int n;
	SqList L;
	cin>>n;
	creat(L,n);
	return 0;
	
} 
