#include <stdio.h>
#include <stdlib.h>
#include <stack>
using namespace std;
/*
	TK题库答案
*/
#define INFINITY INT_MAX  
#define MAX_VERTEX_NUM 15
#pragma warning(disable:4996)

/****   图的邻接表存储表示   ****/
typedef struct ArcNode
{
	int adjvex; //该弧所指向的顶点的位置
	struct ArcNode *nextarc; //指向下一条弧的指针
	int w;//权值
}ArcNode;
typedef struct VNode
{
	char data; //顶点信息
	ArcNode *firstarc; //指向第一条依附该点的弧的指针
}VNode, AdjList[MAX_VERTEX_NUM];
typedef struct
{
	AdjList vertices;
	int vexnum, arcnum; //图的当前顶点数和弧数
}ALGraph;
int LocateVex_biao(ALGraph G, char v)
{
	for (int i = 0; i < G.vexnum; i++)
	{
		if (G.vertices[i].data == v) return i;
	}
}
int CreateDN_biao(ALGraph &G)
{
	//采用数组（邻接表）表示法，构造有向网G
	char v1, v2;//一条边所依附的两个顶点
	int w;//边的权值
	int i, j;
	scanf("%d%d", &G.vexnum, &G.arcnum);
	getchar();
	for (i = 0; i < G.vexnum; i++)
	{
		scanf("%c", &G.vertices[i].data);//构造顶点向量
		G.vertices[i].firstarc = NULL;
	}
	for (int k = 0; k < G.arcnum; k++)
	{
		getchar();
		scanf("%c", &v1);
		getchar();
		scanf("%c", &v2);
		getchar();
		scanf("%d", &w);
		i = LocateVex_biao(G, v1);
		j = LocateVex_biao(G, v2);
		if (G.vertices[i].firstarc == NULL)
		{
			G.vertices[i].firstarc = (ArcNode*)malloc(sizeof(ArcNode));
			G.vertices[i].firstarc->adjvex = j;
			G.vertices[i].firstarc->nextarc = NULL;
			G.vertices[i].firstarc->w = w;
		}
		else
		{
			ArcNode* p = G.vertices[i].firstarc;
			ArcNode* q;
			while (p->nextarc != NULL)
				p = p->nextarc;
			q = (ArcNode*)malloc(sizeof(ArcNode));
			q->adjvex = j;
			q->nextarc = NULL;
			q->w = w;
			p->nextarc = q;
		}
	}
	return 1;
}

/********  关键路径  *******/
int vl[MAX_VERTEX_NUM];
int ve[MAX_VERTEX_NUM];
void FindInDegree(ALGraph G, int *indegree)
{
	for (int j = 0; j < G.vexnum; j++)
	{
		indegree[j] = 0;//初始化
	}
	for (int i = 0; i < G.vexnum; i++)
	{
		ArcNode* p = G.vertices[i].firstarc;
		while (p != NULL)
		{
			indegree[p->adjvex]++;
			p = p->nextarc;
		}
	}
}
int TopologicalOrder(ALGraph G, stack<int> &T)
{
	int indegree[MAX_VERTEX_NUM];
	int i, j, k;
	stack<int> S;
	ArcNode* p;

	FindInDegree(G, indegree); //对个顶点求入度

	for (i = 0; i < G.vexnum; i++)
	{
		if (indegree[i] == 0)  S.push(i);//将入度为0的顶点入S栈
	}
	int count = 0;
	for (i = 0; i < G.vexnum; i++)  ve[i] = 0;

	while (!S.empty())
	{
		j = S.top(); S.pop();
		T.push(j); ++count;//j号顶点出S栈，入T栈，并计数
		for (p = G.vertices[j].firstarc; p; p = p->nextarc)
		{
			k = p->adjvex; //对j号顶点的每个邻接点的入度减1
			if (--indegree[k] == 0) S.push(k);//若入度为0，则入S栈
			if ((ve[j] + p->w) > ve[k]) ve[k] = ve[j] + p->w;
		}//for
	}//while
	if (count < G.vexnum)  return 0;
	else return 1;
}
int CriticalPath(ALGraph G)
{
	stack<int> T;
	int i, j, k, dut;
	ArcNode *p, *q;

	int ee, el;
	char tag;

	if (!TopologicalOrder(G, T)) return 0;
	for (i = 0; i < G.vexnum; i++) vl[i] = ve[G.vexnum - 1];
	while (!T.empty())
	{
		for (j = T.top(), T.pop(), p = G.vertices[j].firstarc; p; p = p->nextarc)
		{
			k = p->adjvex;
			dut = p->w;
			if (vl[k] - dut < vl[j]) vl[j] = vl[k] - dut;
		}//for
	}//while
	k = 0;
	for (q = G.vertices[0].firstarc; q; )
	{
		int temp = k;
		for (p = q; p; p = p->nextarc)
		{
			k = p->adjvex;
			dut = p->w;
			ee = ve[temp];
			el = vl[k] - dut;
			tag = (ee == el) ? '*' : ' ';
			if (tag == '*')
			{
				printf("(%c,%c) ", G.vertices[temp].data, G.vertices[k].data);
				q = G.vertices[k].firstarc;
				break;
			}
		}//for
	}//for
	printf("%d\n", ve[G.vexnum - 1]);
}//CriticalPath
int main()
{
	int n;
	ALGraph G1;

	scanf("%d", &n);
	while (n--)
	{
		CreateDN_biao(G1);
		CriticalPath(G1);
	}
	return 0;
}