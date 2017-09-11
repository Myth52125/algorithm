#include "Vertex.h"
#include <iostream>
#include <stdio.h>
#include <iterator>
typedef std::map<int,int> Vrelation;

Vertex::Vertex(int key)
    :_key(key)
    {

    }


void Vertex::addRelation(int key ,int w)
{
    _relationList.insert({key,w});
}

int Vertex::key()
{
    return _key;
}

void Vertex::print()
{
    printf("%d (size %d):",_key,_relationList.size());
    for(Vrelation::iterator it = _relationList.begin();it != _relationList.end();it++)
    {
         printf("->%d ",it->first);
    }
    printf("\n");
    
}

Vrelation &Vertex::relation()
{
    return _relationList;
}