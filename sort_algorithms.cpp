#include <iostream>
using namespace std;
void sort (int a[] ,int n);

int main(){
    int s[] = { 5 , 4, 9, 7, 1 , 2 };
    int m = sizeof(s)/sizeof(s[0]);
    sort(s , m);
    // cout << s << endl;   
} 

//sort function
void sort (int a[] ,int n)  
{
    for (int i = 0; i < n; i++)
    {
        int j_min = i ;
        for (int j = i+1 ; j < n; j++)
        {
            if (a[j] < a[j_min])
            {
                j_min = j ;
            }

            swap(a[i] , a[j_min]); 
        }
            cout << a[i] << endl;
    }
    
}