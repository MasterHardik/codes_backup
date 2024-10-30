#include<iostream>
using namespace std;
int main(){
    int num;
    int check;
    cin>>num;
    check=num%2;
    if (check != 0){
        cout<<"Weird"<<endl;
        }
    if (check==0){
        for(num==2||num==3||num==4||num==5){
            cout<<"Not Weird"<<endl;
            }
           /* else if(num=='6'||num=='7'||num=='8'||num=='9'||num=='10'||num=='11'||num=='12'||num=='13'||num=='14'||num=='15'||num=='16'||num=='17'||num=='18'||num=='19'||num=='20'){
                cout<<"Weird"<<endl;
            }*/
            else if(num>20)
            cout<<"Not Weird"<<endl;
            };
    //}
    
    return 0;
    }
