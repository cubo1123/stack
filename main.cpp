#include <iostream>
#include<stack.h>
using namespace std;

int main()
{
    Stack stack;
    int opc = 0,id;
    string data;
    while(opc != -1){
        cout<<"1.-push"<<endl;
        cout<<"2.-pop"<<endl;
        cout<<"3.-top"<<endl;
        cout<<"4.-show"<<endl;
        cout<<"ingrese opcion"<<endl;
        cin>>opc;
        if(opc == 1){
            cout<<"ingrese data"<<endl;
            cin>>data;
            cout<<"ingrese id"<<endl;
            cin>>id;
            stack.push(data,id);
        }else if (opc==2) {
            stack.pop();
        }else if (opc==3) {
            cout<<stack.getTop()<<endl;
        }else if (opc==4) {
            stack.showAll();
        }
    }
    return 0;
}
