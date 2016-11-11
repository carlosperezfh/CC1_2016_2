#include <cmath>
#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>

#include "Graph.h"
using namespace std;

main()
{
    vector<int> inicio;
    inicio.push_back(1);
    inicio.push_back(1);
    inicio.push_back(1);
    inicio.push_back(5);
    inicio.push_back(5);
    inicio.push_back(4);
    vector<int> final_;
    final_.push_back(2);
    final_.push_back(3);
    final_.push_back(4);
    final_.push_back(4);
    final_.push_back(2);
    final_.push_back(2);

    Graph resu(inicio,final_);
    cout<<resu.numOutgoing(5)<<endl;

}
