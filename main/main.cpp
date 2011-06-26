//主函数中的代码
#include "traversal.h"


int main()
{
    cout<<"1"<<endl;
    int length=10;
    TreeNode *root=createTree(length);
    cout<<"1"<<endl;
    stack s(length);
    cout<<"1"<<endl;
    cout<<"inorder traversal."<<endl;
    inorderTraversal(root,s);
    return 0;
}

