stack
=========
##  什么是stack？
* stack是堆栈容器，是“先进后出”的容器
* stack是简单地装饰deque容器而成为另外的一种容器
* stack其实是一种容器适配器，其中元素仅从容器的一端插入和删除
* stack是容器适配器，只要支持一系列方法的容器（empty,size,back,push_back,pop_back）都能作为stack使用。
* stack有可能实际上是一个vector，deque或list。

##  构造方式
  stack采用模板类实现，stack对象的默认构造形式：stack<T>stkT;//T可以设置为指针类型或自定义类型<br>
    * `stack <int> stkInt;`  存放int的stack容器
    * `stack <float> stkFloat;` 存放float的stack容器
    * `stack <string> stkString;` 存放string的stack容器
    
##  成员函数
* `push()` 在栈顶增加元素

* `pop()` 移除栈顶元素

* `empty()` 判断堆栈元素是否为空，true表示栈元素为空

* `size()`  返回栈中元素数目

* `swap()` 将两个stack的内容交换。这两个stack的模板参数T和Container必须都相同<br>
    void swap(stack &x) 重载1：x.swap(y)<br>
    void swap(stack &x,stack&y) 重载2：swap(x,y)<br>

