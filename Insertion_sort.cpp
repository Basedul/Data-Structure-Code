#include<iostream>//header file
using namespace std;

int* insertion_sort(int A[], int l){//function defenition that have two parameter one is array another is length of array
    for(int i = 1; i < l; i++){//for loop
        int item = A[i];
        int j = i - 1;
        while(j >= 0 && item < A[j]){//while loop
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = item;//item insert in the exact position
    }
    return A;//array return from that function
}
int main(){//main function
    cout << "Enter size of array" <<endl;
    int s;//s is a varriable that holds the size of array
    cin >> s;

    int A[s];
    cout << "Enter array element" <<endl;
    for(int i = 0; i < s; i++){//get array element from user
        cin >> A[i];
    }
    int* B = insertion_sort(A, s);//B is pointer that point to the returning array
    for(int i = 0; i < s; i++){//for loop, by this loop show the sorted array
        cout << B[i] << " ";
    }
    cout << endl;
    return 0;
}
