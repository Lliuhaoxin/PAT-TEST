#include <bits/stdc++.h>
using namespace std;
typedef struct BinNode
{
    struct BinNode *lchild, *rchild;
    int e;
} BinTree;

void PostAndInToPre(int *postorder, int *inorder, int lenth, BinTree **T)
{
    if (lenth == 0)
    {
        *T = NULL;
        return;
    }
    *T = (BinTree *)malloc(sizeof(BinTree));
    (*T)->e = *(postorder + lenth - 1);
    int rootindex = lenth - 1;
    while (postorder[lenth - 1] != inorder[rootindex] && rootindex >= 0)
        rootindex--;
    PostAndInToPre(postorder, inorder, rootindex, &(*T)->lchild);                                         //left
    PostAndInToPre(postorder + rootindex, inorder + rootindex + 1, lenth - rootindex - 1, &(*T)->rchild); //right
    return;
}
int LeverOrderTraversal(BinTree *T, int a[])
{
    BinTree *BT;
    BinTree *quene[100];
    int front = 0, rear = 0, n = 0;
    quene[rear++] = T;
    while (front != rear)
    {
        BT = quene[front++];
        a[n++] = BT->e;
        if (BT->lchild)
            quene[rear++] = BT->lchild;
        if (BT->rchild)
            quene[rear++] = BT->rchild;
    }
    return n;
}
int main()
{
    int *post, *in;
    int n, i;
    scanf("%d", &n);
    post = (int *)malloc(n * sizeof(int));
    in = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
        scanf("%d", &post[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &in[i]);
    BinTree *T = NULL;
    PostAndInToPre(post, in, n, &T);
    int a[31];
    LeverOrderTraversal(T, a);
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i != n - 1)
            printf(" ");
    }
    return 0;
}
