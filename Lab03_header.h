#ifndef LAB03_HEADER_H
#define LAB03_HEADER_H
#include <iostream>
#include <fstream>
#include <cmath>
#include <time.h>
#include <iomanip>
using namespace std;
//template <class T>
void swap(int & a, int & b);
//generate data
void GenerateRandomData(int a[], int n);
void GenerateSortedData(int a[], int n);
void GenerateReverseData(int a[], int n);
void GenerateNearlySortedData(int a[], int n);
void GenerateData(int a[], int n, int dataType);
int data_order(char* argv[], int pos, string &order);
//command
void Command_line(char* argv[], int argv2);
int line_order(char* argv[], int argv2);
void Command_line_1(char* argv[]);
void Command_line_2(char* argv[]);
void Command_line_3(char* argv[]);
void Command_line_4(char* argv[]);
void Command_line_5(char* argv[]);
void write_to_file(string file_name, int* arr, int size);
//sorting algorithm
long long Bubble_sort(int* a, int n);
long long Selection_sort(int* a, int n);
long long  Insertion_sort(int* a, int n);
int heapRebuild(int a[], int pos, int n);
int heapConstruct(int a[], int n);
int heapSort(int a[], int n);
int merge(int a[], int first, int mid, int last);
int mergeSort(int a[], int first, int last);
int partition(int a[], int i, int j, int& comp);
int quickSort(int a[], int first, int last);
int ShakerSort(int* a, int n);
int RadixSort(int* arr, int n);
int ShellSort(int arr[], int n);
int countingSort(int a[], int n);
int flashSort(int a[], int n);
int Calculate_Complexity(char* argv[], int pos, double& time, int arr[], int size);
#endif // !HEADER_H


