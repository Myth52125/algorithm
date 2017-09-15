#ifndef _GRAPH_H_M_
#define _GRAPH_H_M_

#include <vector>
#include "Vertex.h"
#include <map>
#include <vector>
#include <memory>

class Graph
{
public:
    typedef Vertex V;
    typedef std::map<int,std::shared_ptr<Vertex>> Vcontainer;
    typedef std::shared_ptr<Vertex> Vsp;
    Graph();
    Graph(std::vector<std::vector<int>> &);    
    ~Graph();
private:
    Vcontainer _vs;
    void printPath(std::map<int,int> father,int start,int end);
public:
    void addEdge(V *vstart,V* vend ,bool direction = false,int weight = 1);
    size_t size()  const;
    void addVertex(Vsp &v);
    void print();
    size_t dfs(int start,int end);
    size_t hfs(int start,int end);
};


#endif