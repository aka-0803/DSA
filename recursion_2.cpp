// tower of hanoi 
#include<iostream>
using namespace std;
void tower(int n,char src,char dest,char help){
    // base condition
    if(n==0){return;}
    tower(n-1,src,help,dest);
    cout<<"move from "<<src<<" to "<<dest<<endl;
    tower(n-1,help,dest,src);
}
int main()
{
    tower(3,'A','C','B');
    return 0;
}