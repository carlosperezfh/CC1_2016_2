#include <iostream>
#include <vector>
#include "Graph.h"
using namespace std;

main()
{
    vector<int> starts;
    starts.push_back(1);
    starts.push_back(1);
    starts.push_back(1);
    starts.push_back(5);
    starts.push_back(5);
    starts.push_back(4);
    vector<int> ends;
    ends.push_back(2);
    ends.push_back(3);
    ends.push_back(4);
    ends.push_back(4);
    ends.push_back(2);
    ends.push_back(2);

    Graph g1(starts,ends);
    cout<<g1.numOutgoing(5)<<endl;

}
