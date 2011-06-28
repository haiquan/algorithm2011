#include <iostream>
#include <ctime>
using namespace std;

//生成随机数数组
void createArray(int data[],int length);
//划分规则区域
int partition(int data[],int low, int high);
//快速排序
void quickSort(int data[],int low, int high);
//打印数组
void print(int data[],int length);