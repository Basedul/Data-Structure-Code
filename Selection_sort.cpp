#include<iostream>//Input output stream
using namespace std;
int* selection_sort(int A[], int l) //function defenition
{

    for(int i = 0; i < l-1; i++) //for operation
    {

        int item, in, f = 1;
        item = A[i];

        for(int j = i+1; j < l; j++)
        {
            if(item>A[j])
            {
                in = j;
                item = A[j];
                f = 0;
            }
        }
        if(f!=1)
        {
            A[in] = A[i];
            A[i] = item;
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
    int* getArray = selection_sort(A, s);//selection sort is a function that have
    //two parameter onw is Array another is size of array
    for(int i = 0; i < s; i++) //show the sorted array
    {
        cout << getArray[i] << " ";
    }
    cout << endl;
    return 0;//return zero frum main function
}
