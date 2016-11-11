#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Graph{
private:
    map<int, vector<int> > g;
    vector<int> nodos;
public:
    Graph(vector<int> &starts, vector<int> &ends);
    int numOutgoing(const int nodeID);
    const vector<int> &adjacent(const int nodeID);
};


#endif // GRAPH_H_INCLUDED
