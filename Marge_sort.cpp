#include<iostream>//header file iostream mean input output stream

using namespace std;

void Marge(int A[], int l, int m, int r) //Marge function defenition
{
    /*Calculate size of array for left and right array*/
    int leftSize = m-l+1;
    int rightSize = r-m;

    int leftArray[leftSize], rightArray[rightSize];//array


    /*insert element form A into left and right array*/

    int indexOfLeft = 0;
    int indexOfRight = 0;
    for(int i = l; i <= m; i++) //for loop
    {

        leftArray[indexOfLeft++] = A[i];

    }

    for(int i = m+1; i <= r; i++) //for loop
    {

        rightArray[indexOfRight++] = A[i];

    }

    /* Merge the temp arrays back into arr[l..r]*/
    int i = 0; // Initial index of first subarray
    int j = 0; // Initial index of second subarray
    int k = l; // Initial index of merged subarray

    while (i < leftSize && j < rightSize)
    {
        if (leftArray[i] <= rightArray[j])
        {
            A[k] = leftArray[i];
            i++;
        }
        else
        {
            A[k] = rightArray[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < leftSize)
    {
        A[k] = leftArray[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < rightSize)
    {
        A[k] = rightArray[j];
        j++;
        k++;
    }

    /*Marge left and right array*/

    //int len = leftSize+rightSize;// l is total length of left array and right array
//    int leftArrayTrace = 0, rightArrayTrace = 0;// index trace into left and right array
//
//    for(int i = 0; i < rightSize; i++)
//    {
//
//        if(leftArray[leftArrayTrace] >= rightArray[rightArrayTrace])  // Element checking
//        {
//
//            A[i] = leftArray[leftArrayTrace];
//            leftArrayTrace++;
//
//        }
//        else
//        {
//
//            A[i] = rightArray[rightArrayTrace];
//            rightArrayTrace++;
//
//        }
//
//    }
//
//    cout << endl;
//    for(int i = 0; i < leftSize; i++){
//        cout << leftArray[i] << " ";
//    }
//    cout << endl;
//
//    cout << endl;
//    for(int i = 0; i < rightSize; i++){
//        cout << rightArray[i] << " ";
//    }
//    cout << endl;

//    cout << endl;
//    for(int i = l; i <= r; i++){
//        cout << A[i] << " ";
//    }
//    cout << endl;

}

void Marge_sort(int A[], int l, int r)  //function definition
{

    if(l >= r)
    {
        return;
    }

    int mid = l+(r-l)/2;

    /* Recursion call */

    Marge_sort(A, l, mid);
    Marge_sort(A, mid+1, r);

    /*Marge array*/
    Marge(A, l, mid, r);//function call from Marge sort function

}


int main() //Main function
{

    cout << "Enter size of array" <<endl;//print this string on console
    int size;
    cin >> size;//input the size value from user

    cout << "Enter the array element " <<endl;
    int Array[size]; //Array declaration whose size is user input size's value
    for(int i = 0; i < size; i++) //loop for input array elemnet from user
    {
        cin >> Array[i];
    }

    Marge_sort(Array, 0, size-1);//function call from main function

    for(int i = 0; i < size; i++){

        cout << Array[i] << " ";

    }
    cout << endl;

    return 0;
}
