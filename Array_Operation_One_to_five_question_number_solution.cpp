#include<iostream>
using namespace std;

int LargestElement(int Array[], int l)//these function return a integer value
{
    int max = Array[0]; //suppose our maximum value is index of zero
    for(int i = 0; i < l; i++){
        if(max <= Array[i]){
            max = Array[i];
        }
    }
    return max;//here max is maximum value of the array
}
void Sorting(int Array[], int l)//this function cant anything return
{
    for(int i = 0; i < l; i++){
        for(int j = 0; j < l-i-1; j++){
            if(Array[j]>=Array[j+1]){
                int t = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = t;
            }
        }
    }
    cout << "Sorted array = ";
    for(int i = 0; i < l; i++){
        cout << Array[i] << " ";
    }//print this array
    cout << endl;
}
void SearchInArray(int Array[], int l)//This is function for searching element
{
    cout << "Enter an element which you search = ";
    int b = 0;
    int element;
    cin >>element;//given input
    for(int i = 0; i < l; i++){
        if(element == Array[i]){//element is found then condition is true
            cout << "Got the element "<< element << "in index " << i+1 << endl;
            b = 1;
            break;
        }
    }
    if(b==0){
        cout << "Not found your element" <<endl;
    }
}
int main()
{
    cout << "Array operation"<<endl;

    cout << "Enter the size of array"<<endl;
    int n;
    cin >> n;//input a number

    int Array[n];//array declration
    cout << "Enter element of array"<<endl;
    for(int i = 0; i < n; i++){
    cin >> Array[i];
    }//input of array element

    cout << "Element of array" <<endl;
    for(int i = 0; i < n; i++){
    cout << Array[i] << " ";
    }//output of array
    cout << endl;

    /*Search the largest element from above array*/
    cout << "Largest element is " << LargestElement(Array, n)<<endl;
    /*LargestElement is a function which is take two parameter.
    *one is array and another is length of array
    */
    //***Reverse an array***
    cout << "Reverse the array = " ;
    for(int i = n-1; i >= 0; i--){
        cout << Array[i] << " ";
    }//Reverse this array
    cout <<endl;

    //***Sort this array***
    Sorting(Array, n);/*Sorting is a function that perform sorted operation,
    which have two paremeter, one is Array and another is size*/

    SearchInArray(Array, n);/*SearchInArray function search a given element
    from the array, which take two parameter, one is Array and another is size of
    array*/
    return 0;
}
