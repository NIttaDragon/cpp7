#include <iostream>
class Matrix //объявление класса
{
public:
  int m_M[2][2];
  int m_key;
  Matrix(); //конструктор класса
  Matrix(int t[2][2],int key); //конструктор с параметром
  void show(int m_key); //вывод матрицы матрицы
  bool chec(int id);
  int getid(){return m_key;};
  ~Matrix(); //деструктор
};
class CWhole
{
  int kol; //кол-во элементов в общем массиве
public:
  CWhole(); //конструктор класса
  ~CWhole(); //деструктор
  bool add(int t[2][2],int key); //добавление элемента в общий массив
  bool del(int id); //удаление элемента из общего массива
  int search(int id); //поиск по ключу
  void output(int key);
  Matrix* m_a[21]; //массив указателей на объект-часть
  Matrix m_p;
};
