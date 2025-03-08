#include<iostream>
using namespace std;

int main(){
    int row=5 ; 
    int **arr = new int*[row];
    int *cols = new int[row];

    // Allcate the memory to jagged array 
    for(int i=0; i < row ; i++){
        cout <<"How Many Column for "<<i<<" "; 
        cin >> cols[i];
        arr[i] = new int[cols[i]];
    }

    // Taking input for the jagged array 
    for(int i=0; i < row ; i++){
        cout << "Enter " << cols[i] << " elements for row " << i << ": ";
        for(int j=0; j < cols[i]; j++){
            cin >> arr[i][j];
        }
    }

    // Printing input for the jagged array 
    for(int i=0; i < row ; i++){
        for(int j=0; j < cols[i]; j++){
            cout << arr[i][j]<< " ";
        }

        cout << endl;
    }

    // Release the memory 
    for(int i=0; i < row ; i++){
        delete [] arr[i];
    }

    delete [] cols; 
    delete [] arr;
}