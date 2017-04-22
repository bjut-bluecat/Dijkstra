// 地界斯特拉.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <tuple>
#include <map>
#include <array>
using namespace std;

map<int, vector<tuple<int, int, double>>> EWD;
class _edge
{
public:
	int v;
	int w;
	double weight;
};
int main()
{
	/*
	int V, E;
	cin >> V >> E;
	for (int i = 0; i < E; i++)
	{
		int v, w;
		double weight;
		cin >> v >> w >> weight;
		EWD[v].push_back(make_tuple(v, w, weight));
	}
	*/
	/*
	array<_edge,41> e;
	e[0].v = 0;
	e[0].w = 1;
	e[0].weight = 3;
	e[1].v = 0;
	e[1].w = 1;
	e[1].weight = 3;
	e[2].v = 0;
	e[2].w = 1;
	e[2].weight = 3;
	e[3].v = 0;
	e[3].w = 1;
	e[3].weight = 3;
	e[4].v = 0;
	e[4].w = 1;
	e[4].weight = 3;
	e[5].v = 0;
	e[5].w = 1;
	e[5].weight = 3;
	e[6].v = 0;
	e[6].w = 1;
	e[6].weight = 3;
	e[7].v = 0;
	e[7].w = 1;
	e[7].weight = 3;
	e[8].v = 0;
	e[8].w = 1;
	e[8].weight = 3;
	e[9].v = 0;
	e[9].w = 1;
	e[9].weight = 3;
	e[10].v = 0;
	e[10].w = 1;
	e[10].weight = 3;
	e[11].v = 0;
	e[11].w = 1;
	e[11].weight = 3;
	e[12].v = 0;
	e[12].w = 1;
	e[12].weight = 3;
	e[13].v = 0;
	e[13].w = 1;
	e[13].weight = 3;
	e[14].v = 0;
	e[14].w = 1;
	e[14].weight = 3;
	*/
	int V = 18, E = 41;
	vector<_edge> e;
	_edge temp;
	temp.v = 0;
	temp.w = 1;
	temp.weight = 3;
	e.push_back(temp);
	temp.v = 0;
	temp.w = 2;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 0;
	temp.w = 3;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 1;
	temp.w = 2;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 1;
	temp.w = 4;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 1;
	temp.w = 9;
	temp.weight = 4;
	e.push_back(temp);
	temp.v = 2;
	temp.w = 3;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 2;
	temp.w = 4;
	temp.weight = 2;
	e.push_back(temp);
	temp.v = 2;
	temp.w = 5;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 3;
	temp.w = 5;
	temp.weight = 2;
	e.push_back(temp);
	temp.v = 3;
	temp.w = 6;
	temp.weight = 2;
	e.push_back(temp);
	temp.v = 3;
	temp.w = 7;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 4;
	temp.w = 5;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 4;
	temp.w = 9;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 5;
	temp.w = 6;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 5;
	temp.w = 9;
	temp.weight = 3;
	e.push_back(temp);
	temp.v = 5;
	temp.w = 10;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 5;
	temp.w = 12;
	temp.weight = 3;
	e.push_back(temp);
	temp.v = 6;
	temp.w = 7;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 6;
	temp.w = 8;
	temp.weight = 2;
	e.push_back(temp);
	temp.v = 6;
	temp.w = 12;
	temp.weight = 2;
	e.push_back(temp);
	temp.v = 6;
	temp.w = 13;
	temp.weight = 4;
	e.push_back(temp);
	temp.v = 6;
	temp.w = 14;
	temp.weight = 3;
	e.push_back(temp);
	temp.v = 7;
	temp.w = 8;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 8;
	temp.w = 14;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 8;
	temp.w = 15;
	temp.weight = 3;
	e.push_back(temp);
	temp.v = 9;
	temp.w = 10;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 9;
	temp.w = 11;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 10;
	temp.w = 11;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 10;
	temp.w = 12;
	temp.weight = 2;
	e.push_back(temp);
	temp.v = 11;
	temp.w = 12;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 11;
	temp.w = 16;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 12;
	temp.w = 13;
	temp.weight = 2;
	e.push_back(temp);
	temp.v = 12;
	temp.w = 16;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 13;
	temp.w = 14;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 13;
	temp.w = 15;
	temp.weight = 2;
	e.push_back(temp);
	temp.v = 13;
	temp.w = 16;
	temp.weight = 2;
	e.push_back(temp);
	temp.v = 13;
	temp.w = 17;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 14;
	temp.w = 15;
	temp.weight = 1;
	e.push_back(temp);
	temp.v = 15;
	temp.w = 17;
	temp.weight = 4;
	e.push_back(temp);
	temp.v = 16;
	temp.w = 17;
	temp.weight = 1;
	e.push_back(temp);
	for (int i = 0; i < E; i++)
	{
		EWD[e[i].v].push_back(make_tuple(e[i].v, e[i].w, e[i].weight));
	}
	cout << "EdgeWeightedDigraph : " << endl;
	for (int v = 0; v < V; v++)
	{
		cout << v << " : ";
		for (vector<tuple<int, int, double>>::iterator ii = EWD[v].begin(); ii != EWD[v].end(); ii++)
			cout << get<0>(*ii) << "->" << get<1>(*ii) << " " << get<2>(*ii) << "  ";
		cout << endl;
	}

	system("pause");
}

