#include "Graph.h"
Graph::Graph(vector<int> &starts,vector<int> &ends){
    for(int i = 0; i<(starts.size()-1); i++){
        if(starts[i]==ends[i+1]){
            nodos.push_back(ends[i]);
        }else{
            nodos.push_back(ends[i]);
            g[starts[i]]=nodos;
            nodos.clear();
        }
    }
    nodos.push_back(ends[ends.size()-1]);
    g[starts[starts.size()-1]] = nodos;
    nodos.clear();
}

int Graph::numOutgoing(const int nodeID){
    map<int, vector<int> >::iterator it;
    it = g.find(nodeID);
    int res = 0;
    if(it != g.end()){
        res = it->second.size();
        return res;
    }else{
        cout<<"No existe el objeto"<<endl;
        return 0;
    }
}
const vector<int> &Graph::adjacent(const int nodeID){
    map<int, vector<int> >::iterator it;
    it = g.find(nodeID);
    int res = 0;
    if(it != g.end()){
        return it->second;
    }else{
        cout<<"No existe el objeto"<<endl;
    }
}
