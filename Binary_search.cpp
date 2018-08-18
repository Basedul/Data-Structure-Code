#include<iostream>//Header file
using namespace std;
void binary_search(int A[], int l)//function defenition
{
    int ele, le, ri, mi, f = 0;/*ele is element that you search from array,
    le is left index of array, ri is right index of array &
    mi use for got middle index of array,
    f is flag*/

    le = 0;//le is initialize by 0
    ri = l-1;//ri is initialize by last index of array

    cout << "Enter an element that you search from Array"<<endl;
    cin >> ele;//user input
    while(le <= ri)//while loop
    {
        mi = (le + ri) / (2);// count mid index of array
        if(ele == A[mi]){//if condition for element check in array
            cout << ele << " is found in "<<le << "th index"<<endl;
            f = 1;
            break;
        }else if(ele > A[mi]){// if condition is true go to right of array
            le = mi + 1;
        }else{// in else condtion, search element in left side of array
            ri = mi - 1;
        }
    }
    if(f==0){//not found element
        cout << "Not found"<<endl;
    }
}

int main(){//main function
    cout << "Enter size of array" <<endl;//show in console: Enter size of array
    int size;//size is varriable that is not initialized
    cin >> size;//input form user

    int Array[size];//Array is an array and it's size is n

    cout << "Eneter array element"<<endl;
    for(int i = 0; i < size; i++){//for loop
        cin >> Array[i];//get element of array form user
    }
    binary_search(Array, size);//function that have two parameter one is Array another is size of array
    return 0;
}
