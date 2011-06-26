#ifndef __TRAVERSAL_H__
#define __TRAVERSAL_H__
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class TreeNode
{
public:
    TreeNode():nodeValue(' '),leftchild(-1),rightchild(-1){};
    TreeNode(char tvalue):nodeValue(tvalue),leftchild(-1),rightchild(-1){};
    int leftchild;
    int rightchild;
    char nodeValue;
};

class stack
{
public:
    //�ж�ջ�Ƿ�Ϊ��
    bool isEmpty()
    {
        if (top==0)
            return true;
        else return false;
    }
    //��ջ
    void push(int values)
    {
        if(top==stackSize)
            cout<<"The stack is full!"<<endl;
        else data[top++]=values;
    }
    //��ջ
    int pop()
    {
        if(top==0)
            cout<<"The stack is empty."<<endl;
        else return data[--top];
    }
    stack(int size):stackSize(size),top(0)
    {
        data=new int[stackSize];
    }
    ~stack()
    {
        delete []data;
    }
private:
    int top;
    int stackSize;
    int *data;
};

TreeNode *createTree(int length);
void buildRelationship(TreeNode *data,int parent,int leftorright,int child);
void inorderTraversal(TreeNode const root,stack &s);
#endif