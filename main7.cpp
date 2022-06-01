#include <iostream>
#include "prem.cpp"
using namespace std;

int main()
{
  CWhole W; //объявление объекта класса
  CWhole *W2=new CWhole;
  int k,b,key,x,y,z,num,a,id;
  int t[2][2];
  while (k!=0)
  {
    cout<<endl;
    cout<<"Что хотите сделать с матрицами:"<<endl;
    cout<<"1. Вывести все матрицы"<<endl;
    cout<<"2. Добавить матрицу"<<endl;
    cout<<"3. Удалить матрицу"<<endl;
    cout<<"4. Ничего, завершить программу"<<endl;
    cout<<"Ваш выбор: ";
    cin>>b;
    cout<<endl;
    switch (b)
    {
      case 1:
      {
        cout<<"Введите значение ключа"<<endl;
        cin>>key; cout<<endl;
        W2->output(key);
        break;
      }
      case 2:
      {
        num=1;
        cout<<"Введите значения матрицы"<<endl;
        for (int i=0;i<2;i++)
          for(int j=0;j<2;j++)
          {
            cin>>a;
            t[i][j]=a;
          }
        cout<<endl;
        cout<<"Введите значение ключа"<<endl;
        cin>>key;
        cout<<endl;
        W2->add(t,a);
        break;
      }
      case 3:
      {
        cout<<"Введите значение ключа"<<endl;
        cin>>key;
        cout<<endl;
        W2->del(id);
        break;
      }
      case 4:
      {
        k=0;
        break;
      }
    }
  }
  return 0;
}
