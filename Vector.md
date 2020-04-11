Vector
===========
## 什么是Vector？
    向量（Vector）是一个封装了动态大小数组的顺序容器（Sequence Container）。
    跟任意其它类型容器一样，它能够存放各种类型的对象。可以简单的认为，向量是
    一个能够存放任意类型的动态数组。 

## 容器特性<br>
### 顺序序列<br>
    顺序容器中的元素按照严格的线性顺序排序。
    可以通过元素在序列中的位置访问对应的元素。
### 动态数组<br>
    支持对序列中的任意元素进行快速直接访问，甚至可以通过指针算术进行该操作。
    提供了再序列末尾相对快速地添加/删除元素的操作。
### 能够感知内存分配器的（Allocator-aware）<br>
    容器使用一个内存分配器对象来动态地处理它的存储需求。

## 基本函数实现<br>
   * 构造函数<br>
      *  vector():创造一个空的vector<br>
      *  vector(int nSize):创建一个vector，元素个数为nSize<br>
      *  vector(int nSize,const t& t):创建一个vector，元素个数为nSize,且值均为t<br>
      *  vector(const vector&):复制构造函数<br>
      *  vector(begin,end):复制[begin,end)区间内另一个数组的元素到vector中<br>
  * 增加函数<br>
      * void push_back(const T& x):向量尾部增加一个元素X<br>
      * iterator insert(iterator it,const T& x):向量中迭代器指向元素前增加一个<br>
        元素x<br>
      * iterator insert(iterator it,int n,const T& x):向量中迭代器指向元素前<br>
        增加n个相同的元素x<br>
      * iterator insert(iterator it,const_iterator first,const_iterator last):<br>
        向量中迭代器指向元素前插入另一个相同类型向量的[first,last)间的数据<br>
  * 遍历函数<br>
      * reference at(int pos):返回pos位置元素的引用<br>
      * reference front():返回首元素的引用<br>
      * reference back():返回尾元素的引用<br>
      * iterator begin():返回向量头指针，指向第一个元素<br>
      * iterator end():返回向量尾指针，指向向量最后一个元素的下一个位置<br>
      * reverse_iterator rbegin():反向迭代器，指向最后一个元素<br>
      * reverse_iterator rend():反向迭代器，指向第一个元素之前的位置<br>
  * 删除函数<br>
      * iterator erase(iterator it):删除向量中迭代器指向元素<br>
      * iterator erase(iterator first,iterator last):删除向量中[first,last)中元素<br>
      * void pop_back():删除向量中最后一个元素<br>
      * void clear():清空向量中所有元素<br>
  * 判断函数<br>
      * bool empty() const:判断向量是否为空，若为空，则向量中无元素<br>
  * 大小函数<br>
      * int size() const:返回向量中元素的个数<br>
      * int capacity() const:返回当前向量所能容纳的最大元素值<br>
      * int max_size() const:返回最大可允许的vector元素数量值<br>
  * 交换函数<br>
      * void swap(vector&):交换两个同类型向量的数据<br>
  * 其他无分类<br>
      * void assign(int n,const T& x):设置向量中第n个元素的值为x<br>
      * void assign(const_iterator first,const_iterator last):向量中[first,last)中元<br>
        素设置成当前向量元素<br>

     ---------
  * 清晰一览<br>
      * `push_back` 在数组的最后添加一个数据 <br>
      * `pop_back` 去掉数组的最后一个数据 <br>
      * `at` 得到编号位置的数据 <br>
      * `begin` 得到数组头的指针 <br>
      * `end` 得到数组的最后一个单元+1的指针 <br>
      * `front` 得到数组头的引用 <br>
      * `back` 得到数组的最后一个单元的引用 <br>
      * `max_size` 得到vector最大可以是多大 <br>
      * `capacity` 当前vector分配的大小 <br>
      * `size` 当前使用数据的大小 <br>
      * `resize` 改变当前使用数据的大小，如果它比当前使用的大，者填充默认值 <br>
      * `reserve` 改变当前vecotr所分配空间的大小 <br>
      * `erase` 删除指针指向的数据项 <br>
      * `clear` 清空当前的vector <br>
      * `rbegin` 将vector反转后的开始指针返回(其实就是原来的end-1) <br>
      * `rend` 将vector反转构的结束指针返回(其实就是原来的begin-1) <br>
      * `empty` 判断vector是否为空 <br>
      * `swap` 与另一个vector交换数据<br>
      -------
## 基本用法<br>
```c
#include<iostream>
using namespace std;
```
## 定义方式<br>
  * vector<类型>标识符<br>
  * vector<类型>标识符(最大容量)<br>
  * vector<类型>标识符(最大容量，初始所有值)<br>
  * int i[5]={1,2,3,4,5};<br>
    vector<类型>vi(i,i+2)//得到i索引值为3以后的值<br>
  * vector< vetor< int> >v;//二维向量，这里最外的<>要有空格。<br>
