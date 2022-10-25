#include<iostream> 
using namespace std;

void toh(int n, char A, char B, char C){
    if(n == 0){
        return;
    }

    toh(n - 1, A, C, B);
    cout << n <<" "<<"from"<<" "<<A<<"->"<<B<<endl;
    toh(n - 1, C, B, A);
}

int main(){
    int n;
    cin >> n;
    toh(n, 'A', 'B', 'C');  // n slides feed from A to B by help of C
    /* 
    1. move one dist at a time
    2. never place small disk under a larger disk
    3. only move disk at  the top
    */
    return 0;
} 