#include<iostream>//Input output stream
using namespace std;
int* bubble_sort(int A[], int l) //function defenition
{
    for(int i = 0; i < l-1; i++){
        for(int j = 0; j < l-i; j++){
            if(A[j]>=A[j+1]){
                int t = A[j];
                A[j] = A[j+1];
                A[j+1] = t;
            }
        }
    }
    return A;
}
int main() //Main function
{
    cout << "Enter size of array" <<endl;
    int s;//s is a varriable that holds the size of array
    cin >> s;

    int A[s];
    cout << "Enter array element" <<endl;
    for(int i = 0; i < s; i++) //get array element from user
    {
        cin >> A[i];
    }
    int* getArray = bubble_sort(A, s);//selection sort is a function that have
    //two parameter onw is Array another is size of array
    for(int i = 0; i < s; i++) //show the sorted array
    {
        cout << getArray[i] << " ";
    }
    cout << endl;
    return 0;//return zero frum main function
}


