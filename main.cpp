#include <iostream>
using namespace std;
int main (){
    
    //get size for array
    cout << "Enter array size: ";
    int size=0;
    cin >> size;
    //create a new array with given size
    int* ptrarray= new int[size];
    
    //for loop to input valuse into created array
    for (int i=0; i<size;i++){
        cout << "enter a number: ";
        cin >> ptrarray[i];
    }
    //for loop for adding the sum (used for averages)
    int sum=0;
    for (int i=0; i<size;i++){
       sum+=ptrarray[i];
    }
    //calculating the average
    double average=0;
    average=sum/size;
    cout << "The average is: " << average << endl;
    
    //for loop checking for numbers above the average
    int numabove=0;
    for (int i=0; i<size;i++){
        if (ptrarray[i]>average)
            numabove++;
    }
    //displaying the number above, if-statement for numbers/number
    if (numabove>1)
    cout << numabove <<  " numbers above the average" << endl;
    else     cout << numabove <<  " number above the average" << endl;

    //delete created array
    delete ptrarray;
    
    
    return 0;
    
}