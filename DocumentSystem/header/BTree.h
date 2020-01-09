#ifndef BTREE_H_INCLUDED
#define BTREE_H_INCLUDED
#include <stdio.h>


#endif
#define M 3
typedef int KeyType;

typedef enum Status{
    SUCCESS,
    ERROR
}Status;

typedef struct BTNode{
    int keynum;
    KeyType key[M+1];
    struct BTNode *parent;
    struct BTNode *ptr[M+1];
    void *record[M+1];
}BTNode,*BTree;

typedef struct{
    BTree pt;
    int i;//�ؼ���λ��
    int tag;//1�����ҳɹ� 0������ʧ��
}result,*resultptr;

typedef struct arr{
    int *thelast;
    int max;
    int n;
}*array;

array append(array a,int last);
array getArray();
resultptr searchBTree(BTree t,int k);
Status insertBTree(BTree *t,KeyType k,BTree q,int i,void *rec);
void deleteBTree(BTree *root,BTree *t,int i);
Status destroyBTree(BTree t);
void printBTree(BTree t);
array pop(array a);
BTree getBTree();
char *int2str(int num);
resultptr getResult(BTree t,int index,int tag);
