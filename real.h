#include "prem.h"
#include <iostream>
using namespace std;
class CWhole
{
private:
int i,j;
// int m_m=2; int m_n=2;
int m_M[2][2];
public:
  Matrix* m__M/*[2][2]*/;
  CWhole(){
    for(i=0;i<m_m;i++)
      for(j=0;j<m_m;j++)
        m_M[i][j]=0;
  }; //
  CWhole(int t[2][2])
  {
    for (i=0;i<m_m;i++)
      for (j=0;j<m_m;j++)
        m_M[i][j]=t[i][j];
  };
  ~CWhole(){}; //
  void add()
  {

  };
  void del(int id)
  {

  };
  void search(int id)
  {

  };
};
