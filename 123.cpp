#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
setlocale(LC_ALL,"RUSSIAN");
cout<<"������� ���������� �������:";
int N;
int K;
cin>>N;
cout<<"������� ���������� �������:";
cin>>K;

if (N>10000 || K>10000){
	cout<<"��������� �� ���������,������� ����� ������ 10000";
}
else{


int h;


h=K/N;
cout<<"���������� ������� �� ���� �������:"<<h<<endl;
int g=K-(K/N)*N;
cout<<"�������� �������:"<<g;}
return 0;

}

