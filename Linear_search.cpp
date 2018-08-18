#include<iostream>//input output stream header file
using namespace std;
void linear_search(int A[], int l){//function defenition
    int ele, f = 0;//ele is element that you search from array & f is flag
    cout << "Enter an element that you search from Array"<<endl;
    cin >> ele;//user input
    for(int i = 0; i < l; i++){//for loop, here i is index, l is size of array
        if(A[i]==ele){//condition
            cout << ele<<" is found on "<<i<<"th index"<<endl;
            f = 1;
            break;//break statement
        }
    }
    if(f==0){//condtion, that is true only when given element is not found
        cout << ele << " is not found"<<endl;
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
    linear_search(Array, size);//function that have two parameter one is Array another is size of array
    return 0;
}
