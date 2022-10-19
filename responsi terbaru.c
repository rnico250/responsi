#include<iostream>
#include<conio.h>
#include<string.h>
#define max 5
using namespace std;

string stackk[max];
char ch;
int top = 0;

bool isAlpabet(){
     if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            return true;
        } else {
            return false;
        }
}



void pop(){

        top--;
        }

void push(){

        top++;

}





int main(){

    char ch;




    cout<<"Input Huruf : ";
   cin>>ch;
    if(ch=isAlpabet()){
        push();
    } else{
        pop();
          }


    return 0;
}

