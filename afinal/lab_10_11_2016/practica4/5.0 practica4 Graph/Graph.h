#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <cmath>
#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

class Graph {
protected:
    map<int, vector<int> > outgoing;
public:
    Graph(const vector<int> &startPoints, const vector<int> & endPoints);
    int numOutgoing(const int nodeID) const;
    const vector<int> &adjacent(const int nodeID) const;    //nodos de adjacencia
};

#endif // GRAPH_H_INCLUDED
