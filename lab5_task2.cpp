#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

    void swap(int x,vector<int> &a){
         int temp;
         temp=a[x];
         a[x]=a[x-1];
         a[x-1]=temp;
    }
    bool moveMin(vector<int> &in,vector<int> &out){
        
        for(int i=in.size()-1;i>0;i--){
            if(in[i]<in[i-1]){
               swap(i,in);
            }
            else{
            break;

            
         
                
                   
                    
                }
        
            }
        
       
        return 0;
    }
    bool testMoveMin(){
        vector<int> test,test_new;
        srand(time(0));
        int size=1+rand()%100;
        for(int i=0;i<size;i++){
            test.push_back(1+rand()%100);
           }
           sort(test.begin(),test.end());
           test.push_back(1+rand()%100);
           test_new=test;
            sort(test_new.begin(),test_new.end());
            moveMin(test,test_new);
           
           
            
        if(test==test_new){
            return true;
        }
        else{
            return false;
        }
        
            

            

    }
int main(){
    cout<<testMoveMin();
    

   
}

