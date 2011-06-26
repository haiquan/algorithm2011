#include "traversal.h"

TreeNode *createTree(int length)
{
    TreeNode *data=new TreeNode[10];
    for (int i=0;i<length;++i)
    {
        data[i+1].nodeValue='A'+i;
    }
    buildRelationship(data,1,1,2);
    buildRelationship(data,1,2,3);
    buildRelationship(data,2,1,4);
    buildRelationship(data,2,2,5);
    buildRelationship(data,3,1,6);
    buildRelationship(data,5,1,7);
    buildRelationship(data,5,2,8);
    buildRelationship(data,6,2,9);



    return data;
}

void buildRelationship(TreeNode *data,int parent,int leftorright,int child)
{
    if (leftorright==1)//×óº¢×Ó
    {
        data[parent].leftchild=child;
    } 
    else//ÓÒº¢×Ó
    {
        data[parent].rightchild=child;
    }
}

void inorderTraversal(TreeNode const *data,stack &s)
{
    int vertex=1;
    int parent=1;
    while(1)
    {
        while(vertex!=-1)
        {
            s.push(vertex);
            vertex=data[vertex].leftchild;
        }

        if (s.isEmpty())
        {
            break;
        } 
        else
        {
            vertex=s.pop();
            cout<<data[vertex].nodeValue<<' ';
            vertex=data[vertex].rightchild;
        }
    }
}