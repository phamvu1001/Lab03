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
void Copy_Array(int* a, int* b, int n);
//command
int line_order(int argv, char* argv2[]);
void Command_line(int argv, char* argv2[]);
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
long long heapConstruct(int a[], int n);
long long heapSort(int a[], int n);
long long merge(int a[], int first, int mid, int last);
long long mergeSort(int a[], int first, int last);
int partition(int a[], int i, int j, long long& comp);
long long quickSort(int a[], int first, int last);
long long ShakerSort(int* a, int n);
long long RadixSort(int* arr, int n);
long long ShellSort(int arr[], int n);
long long countingSort(int a[], int n);
long long flashSort(int a[], int n);
long long Calculate_Complexity(char* argv[], int pos, double& time, int arr[], int size);
#endif // !HEADER_H


