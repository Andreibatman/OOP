#include "NumberList.h"
#include <iostream>

void NumberList::Init()
{
    this->count=0;
}

bool NumberList::Add(int x)
{
    if(this->count==10)
        return false;
    this->numbers[this->count]=x;
    this->count++;
    return true;
}

void NumberList::Sort()
{
    int i,j;
    for(i=0;i<this->count;i++)
        for(j=i+1;j<this->count;j++)
            if(numbers[i]>numbers[j])
            {
                int aux=numbers[i];
                numbers[i]=numbers[j];
                numbers[j]=aux;
            }
}

void NumberList::Print()
{
    int i;
    for(i=0;i<this->count;i++)
        std::cout<<numbers[i]<<" ";
    std::cout<<'\n';
}