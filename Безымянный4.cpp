#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
setlocale(LC_ALL,"RUSSIAN");
cout<<"Введите количество белочек:";
int N;
N<1001;
int K;
K<1001;
int h;
cin>>N;
cout<<"Введите количество орешков:";
cin>>K;
h=K/N;
cout<<"Количество орешков на одну белочку:"<<h<<endl;
int g=K-(K/N)*N;
cout<<"Осталось орешков:"<<g;
return 0;

}


