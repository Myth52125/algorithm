#include "Graph.h"
#include <algorithm>
#include <stdio.h>

Graph::Graph()
{
}
Graph::~Graph()
{
}

Graph::Graph(std::vector<std::vector<int>> &p)
{
    int len = p.size();
    for(int i = 0;i<len;i++)
    {
        Edge e(new Vertex(p[i][0]),new Vertex(p[i][1]));
        addEdge(e);
    }
}



void Graph::addEdge(Edge& e)
{
    addVertex(e.start(),e.end());
}

void Graph::addVertex(Vsp &start,
    Vsp &end)
{
    
    Vsp vspTmp(start);
    Vsp tmp = _list[start->key()];
        if(tmp == NULL)
        {
            vspTmp->next(vspTmp);
            _list[start->key()]=end;            
        }else{
            _list[start->key()]->next(end);
        }
}


size_t  Graph::size() const
{
    return _list.size();
}
