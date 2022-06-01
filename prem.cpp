#include <iostream>
#include "prem.h"
using namespace std;
int i,j;
  Matrix::Matrix() //конструктор
  {
    for(i=0;i<2;i++)
      for(j=0;j<2;j++)
        m_M[i][j]=0;
  }
  Matrix::Matrix(int t[2][2],int key) //конструктор с параметром
  {
    for (i=0;i<2;i++)
      for (j=0;j<2;j++)
        m_M[i][j]=t[i][j];
    m_key=key;
  }
  Matrix::~Matrix() //деструктор
  {
    cout<<"Матрица удалена"<<endl;
  }
  void Matrix::show(int m_key) //вывод на экран матрицы
  {
    for (i=0;i<2;i++)
    {
      for (j=0;j<2;j++)
        cout<<m_M[i][j]<<" ";
      cout<<endl;
    }
    cout<<"Ключ: "<<m_key;
  };
  bool Matrix::chec(int id)
  {
    if(id==m_key)
      return true;
    else
      return false;
  };

  CWhole::CWhole() //
  {
    kol=0;
  };
  CWhole::~CWhole() //
  {
    for(int i=0;i<kol;i++)
      delete m_a[i];
  };
  bool CWhole::add(int t[2][2],int key)
  {
    if(search(key)<0)
    {
      m_a[kol]=new Matrix(t,key); //добавляем новый элемент
      kol++;
      cout<<"Новый элемент добавлен"<<endl;
      return true;
    }
    cout<<"Ошибка. Элемент с таким ключем уже существует"<<endl;
    return false;
  };
  bool CWhole::del(int id)
  {
    int d=search(id);
    if(d<0)
      return false;
    delete m_a[d];
    while(d<kol-1)
      {
        m_a[d]=m_a[d+1];
        d++;
      }
  };
  int CWhole::search(int id)
  {
    for(i=0;i<kol;i++)
      if(m_a[i]->chec(id))
        return i;
    return -1;
  };
  void CWhole::output(int key)
  {
    for(i=0;i<kol;i++)
    {
      cout<<m_a[i]->getid()<<endl;
      m_p.show(key);
    }
  }
