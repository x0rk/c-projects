#include <stdio.h>

struct createNode{
    int val;
    struct createNode* addr;
};


int main()
{
    int *n = (struct createNode*) malloc(100*sizeof(struct createNode));
    struct createNode node[100];
    for(int i = 0; i < 100; i++)
    {
        node[i] -> addr = n;
        n = node[i] -> addr;
    }    



}