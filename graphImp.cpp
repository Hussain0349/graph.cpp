#include <iostream>

using namespace std;

int main(){
    int graph[5][5] ={0};
     string response;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i !=j){
             cout << "Is there a relationship (edge) from node " << i << " to node " << j << "? (yes/no): ";

             cin>>response;
             if(response == "yes"){
                graph[i][j] = 1;
             }
            }
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}