#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
setlocale(LC_ALL,"RUSSIAN");
cout<<"������� ���������� �������:";
int N;
N<1001;
int K;
K<1001;
int h;
cin>>N;
cout<<"������� ���������� �������:";
cin>>K;
h=K/N;
cout<<"���������� ������� �� ���� �������:"<<h<<endl;
int g=K-(K/N)*N;
cout<<"�������� �������:"<<g;
return 0;

}


