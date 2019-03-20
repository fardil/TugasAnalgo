/*
Nama	: Faradilla Azranur
NPM		: 140810170001
Program Merge Sort
*/

#include <iostream>
using namespace std;

void Sort(int A[], int p, int q, int r){
	int n1=q-p+1;
	int n2=r-q;
	
	//Create Arrays
	int L[n1],R[n2];
	
	int j;
	for (int i=1; i<=n1; i++){
		L[i]=A[p+i-j];
	}
	for (int j=1; j<=n2; j++){
		R[j]=A[q+j];
	}
	
	int i=1; j=1; 
	for(int k=p; k<r; k++){
		if(L[i]<=R[j]){
			A[k]=L[i];
			i++;
		}
		else{
			A[k]=R[j];
			j++;
		}
	}
}

void mergeSort(int p, int r, int q){
	int A[100];
	if (p < r) 
    { 
        int p = q+(A-q)/2; 
        mergeSort(A, p, q); 
        mergeSort(A, q+1, r); 
  
        Sort(A, p,q ,r); 
    } 
}

void printArray (int A[]){
	for (int i=0; i<7; i++){
		cout <<A[i]<<" ";
	}
}

main (){
	A[100]={1,3,2,5,4};
	
	printArray();
	mergeSort();
	printArray();
	
}
