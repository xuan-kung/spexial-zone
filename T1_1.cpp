//第二章T1：顺序表的建立及遍历   1901  20191003128  邝晓璇 
#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;


#define MAXSIZE 100
typedef int ElemType;//ElemType 定义为int类型的类型数据 

typedef struct{
	ElemType *elem;//存储空间的基地址 
	int length;//当前长度 
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
