#include <iostream>
using namespace std;

int dotProduct(int A[], int B[],int S);

int main()
{
 int A[] = { 3, -5, 4 };
 int B[] = { 2, 6, 5 };
 
 int ArrSize = sizeof(A)/sizeof(A[0]);
 // dotProduct function call
 cout << "Dot product:";
 cout << dotProduct(A, B, ArrSize) << endl;
 return 0 ; } 

int dotProduct(int A[], int B[],int S){
   int product = 0;
   for (int i = 0; i < S; i++)
   product = product + A[i] * B[i] ;
   return product;
}
