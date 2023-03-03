#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc,char *argv[]){
    double average = 0;
    if(argc < 2){
        cout << "Please input numbers to find average.";
    }else{
        for(int i = 0 ; i < argc ; i++){
            average += atoi(argv[i]);
        }
    
    average /= argc-1;  
    cout <<"---------------------------------\n";
    cout <<"Average of "<< argc-1 << " numbers = " << average <<"\n"; 
    cout <<"---------------------------------\n";
    }
}
