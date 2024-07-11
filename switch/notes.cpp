#include<iostream>
using namespace std;

void printNumberOFNotes(int amount){
    int deno =0 ;
    int count100 =0, count50 = 0, count20 =0,count1 =0 ;
    if(amount >=100){
        deno = 100;
    }else if (amount >= 50)
    {
        deno = 50;
    }else if(amount >= 20){
        deno = 20;
    }else if(amount >= 10){
        deno = 10;
    }


    switch (deno)
    {
    case 100:
        count100 = amount / 100;
        amount %= 100;
    
    case 50:
        count50 = amount / 50;
        amount %= 50;
    case 20:
        count20 = amount / 20;
        amount %= 20;
    case 1:
        count1 = amount / 1;
        amount %= 1;
    default:
        cout <<"Bhosdike Sahi Sahi Aount Daal na!"<<endl;
        return;
    }
    
cout << "No. of 100 notes: " << count100 << endl;
  cout << "No. of 50 notes: " << count50 << endl;
  cout << "No. of 20 notes: " << count20 << endl;
  cout << "No. of 1 notes: " << count1 << endl;
}

int main(){
    int n = -1;
    printNumberOFNotes(n);

    return 0;
}