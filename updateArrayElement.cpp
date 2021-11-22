     
#include <iostream>
using namespace std;
void update_element(int array[], int num);

//main function
int main ()
{
    int old_arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(old_arr)/sizeof(old_arr[0]);
    
    cout << "old array : " ;
    for(int i= 0; i < n; i++)
        cout << old_arr[i] << " ";
    cout <<endl;
    
    
    update_element(old_arr, n);
    cout << "new array : ";
    for (int i=0; i < n; i++) 
      cout << old_arr[i] <<" ";
    
    return 0;
} 


/* function update every array element by multiplication of next and previous values of a given array of integers */
void update_element(int array[], int num){
            
    if (num <= 1)
    return ;
    
    int prev_element = array[0];
    array[0] = array[0] * array[1];
    
    for(int i =0; i < num-1; i++){
        int mediam_element = array[i];
        array[i] = prev_element * array[i+1];
        prev_element = mediam_element ; 
    }
    
    array[num-1] = prev_element * array[num-1];
}