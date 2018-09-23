#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
setlocale(LC_ALL,"RUSSIAN");
	cout<<"В этой программе не одна задача"<<endl;
cout<<"Введите количество белочек:";
int N;
int K;
cin>>N;
cout<<"Введите количество орешков:";
cin>>K;

if (N>10000 || K>10000){
	cout<<"Программа не выполнена,введите число меньше 10000";
}
else{


int h;


h=K/N;
cout<<"Количество орешков на одну белочку:"<<h<<endl;
int g=K-(K/N)*N;
cout<<"Орешков осталось:"<<g;}
return 0;

}

