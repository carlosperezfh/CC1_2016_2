#include <stdexcept>
#include "Graph.h"
/*A graph is a mathematical data structure consisting of nodes and edges connecting them.
To help you visualize it, you can think of a graph as a map of “cities” (nodes) and “roads”
(edges) connecting them. In an directed graph, the direction of the edge matters – that is,
an edge from A to B is not also an edge from B to A. You can read more at Wikipedia:
http://en.wikipedia.org/wiki/Graph (mathematics).
One way to represent a graph is by assigning each node a unique ID number. Then, for
each node ID n, you can store a list of node ID’s to which n has an outgoing edge. This list
is called an adjacency list.
Write a Graph class that uses STL containers (vectors, maps, etc.) to represent a directed
graph. Each node should be represented by a unique integer (an int). Provide the following
member functions:
•	 Graph::Graph(const vector &starts, const vector &ends)

Constructs a Graph with the given set of edges, where starts and ends represent the

ordered list of edges’ start and endpoints. For instance, consider the following graph:

The vectors used to initialize a Graph object representing this graph would be:

start: 1 1 1 5 5 4

end: 2 3 4 4 2 2

•	 int Graph::numOutgoing(const int nodeID) const

Returns the number of outgoing edges from nodeID – that is, edges with nodeID as

the start point

•	 const vector<int> &Graph::adjacent(const int nodeID) const

Returns a reference to the list of nodes to which nodeID has outgoing edges

(Hint: Use the following data type to associate adjacency lists with node ID’s: map<int,
vector<int> >. This will also allow for easy lookup of the adjacency list for a given node
ID. Note that the [] operator for maps inserts the item if it isn’t already there.)
The constructor should throw an invalid argument exception of the two vectors are
not the same length. (This standard exception class is deﬁned in header ﬁle stdexcept.) The
other member functions should do likewise if the nodeID provided does not actually exist in
the graph. (Hint: Use the map::find, documented at
http://www.cplusplus.com/reference/stl/map/ﬁnd/.
*/
Graph::Graph(const vector <int> & startPoints , const vector <int> & endPoints ) {
    if(startPoints.size() != endPoints.size()) {
        throw invalid_argument(" Inicio y final son diferentes en longitud");
    }

    for(unsigned i = 0; i < startPoints.size(); i++) {
        int start = startPoints[i], end = endPoints[i];
        outgoing[start].push_back(end);
        outgoing[end]; // Just to indicate this node exists
    }
}

int Graph::numOutgoing(const int nodeID) const {
    return adjacent(nodeID).size();
}

const vector<int> & Graph::adjacent(const int nodeID) const {
    map <int, vector<int> >::const_iterator i = outgoing.find(nodeID)
        ;
    if(i == outgoing.end()) {
        throw invalid_argument("ID de nodo invalido");
    }
    return i-> second;
}
