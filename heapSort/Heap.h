#ifndef __HEAP_SORT_H__
#define __HEAP_SORT_H__
#include <iostream>
using namespace std;

//template<class T>
void modifyHeap(int data[],int location,int length);
//template<class T>
void buildHeap(int data[],int length);
//template<class T>
void HeapSort(int data[],int length);
//template<class T>
void swap(int &left,int &right);
//template<class T>
void print(int data[],int length);

void modifySmallHeap(int data[],int location,int length);
void buildSmallHeap(int data[],int length);
void HeapSortK(int data[],int length,int topk);

#endif