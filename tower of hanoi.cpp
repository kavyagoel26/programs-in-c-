#include<iostream>
using namespace std;
void towerofhanoi(int n, char src, char dest, char helper){
    if(n==0){
        return;  //basecase
    }

    
    towerofhanoi(n-1,src,helper,dest);
    cout<<"move from "<<src<<"to"<<dest<<endl;
    towerofhanoi(n-1,helper,dest,src);

}
int main(){
    towerofhanoi(3,'A','C','B');
    
    return 0;
} 