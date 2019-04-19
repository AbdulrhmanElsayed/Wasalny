#pragma once
#include<iostream>
#include<fstream>
#include"Graph.h"
#include<fstream>
#include"Shape.h"
#include<string>
#include<stdio.h>
#include<conio.h>
#include<cstring>
#include<cstringt.h>
#include <list>
#include <queue>
#include <map>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<set>
#include<iomanip>
#include<utility>
#include<stack>
#include <vector>
void displayMaps();
void addGraph();
vector<string> displayGraph(string GraphName, map<string, vector<Edge>> &mp);
void deleteMap();

void Loading(string s, int);
void EditGraph();
void DeleteEdge(string NodeName1, string NodeName2, vector<string> s, string fileName);
void DeleteNode(string NodeName, vector<string>, string fileName);
void AddCity(string City1, map<string, vector<Edge>> mp, string fileName);
void EditNode(string NodeName, vector<string>, string fileName);
void AddEdge(string NodeName1, string NodeName2, vector<string> s, string fileName);
void polymerization();
void floydwarshall();
void Bellmanford();
string findParent(string city);
void join(string a, string b);
map <string, vector<pair<string, double> > >kruskalQs(int num_of_city);
void Kuriskal();