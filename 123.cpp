#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
setlocale(LC_ALL,"RUSSIAN");
cout<<"Введите количество белочек:";
int N;
int K;
cin>>N;
cout<<"Введите количество орешков:";
cin>>K;

if (N>10000 || K>10000){
	cout<<"Программа не выполнена,введите числа меньше 10000";
}
else{


int h;


h=K/N;
cout<<"Количество орешков на одну белочку:"<<h<<endl;
int g=K-(K/N)*N;
cout<<"Осталось орешков:"<<g;}
return 0;

}

