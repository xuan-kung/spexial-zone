  set容器
   ========
  ## 什么是set容器
  *   按关键字有序保存元素：set(关键字即值，即只保存关键字的容器)；multiset(关键字可重复出现的set)；
  *   无序集合：unordered_set(用哈希函数组织的set)；unordered_multiset(哈希组织的set，关键字可以重复出现)。
 
 ### set就是关键字的简单集合。
  当只是想知道一个值是否存在时，set是最有用的。在set中每个元素的值都唯一，而且系统能根据元素的值自动进行排序。set中元素的值不能直接被改变。set内部采用的是一种非常高效的平衡检索二叉树：红黑树，也称为RB树(Red-Black Tree)。RB树的统计性能要好于一般平衡二叉树。

  ## set特点：
  *   set中的元素都是排序好的
  *   set中的元素都是唯一的，没有重复的
  
  ## set常用的函数
  `begin();`        ※ 返回指向第一个元素的迭代器<br>
  
  `end();`          ※ 返回指向最后一个元素的迭代器<br>
  
  `clear();`        ※ 清除所有元素<br>
  
  `count()`            返回某个值元素的个数（在set中会去重，所以通常在set中为1或0，判断该元素是否出现过）<br>
  
  `empty()`         ※ 返回某个值元素的个数<br>
  
  `equal_range()`      返回集合中与给定值相等的上下限的两个迭代器（返回值是一个pair类型） <br>
  
  `erase()`            删除集合中的元素<br>
  >>  `erase(iterator)` -删除定位器iterator指向的值<br>
  >>  `erase(first,second)` -删除定位器first和second之间的值<br>
  >>  `erase(key_value)` -删除键值key_value的值<br>
  
  `find()`             返回一个指向被查找到元素的迭代器<br>
  
  `get_allocator()`    返回集合的分配器<br>
  
  `insert()`           在集合中插入元素<br>
  >>  `insert(key_value);`  将key_value插入到set中 
  >>> 返回值是pair<set<int>::iterator,bool>，bool标志着插入是否成功，而iterator代表插入的位置，若key_value已经在set中，则iterator表示的key_value在set中的位置。
 
  `lower_bound()`      返回指向大于（或等于）某值的第一个元素的迭代器 <br>
  >>  `lower_bound(key_value)` 返回第一个大于等于key_value的定位器<br>

  `upper_bound()`      返回大于某个值元素的迭代器<br>
  >>  `upper_bound(key_value)`  返回最后一个大于key_valude的定位器<br>
  
  `key_comp()`         返回一个用于元素间值比较的函数<br>
  
  `max_size()`      ※ 返回集合能容纳的元素的最大限值<br>
  
  `rbegin()`        ※ 返回指向集合中最后一个元素的反向迭代器<br>
  
  `rend()`          ※ 返回指向集合中第一个元素的反向迭代器<br>
  
  `size()`          ※ 集合中元素的数目 <br>
  
  `swap()`             交换两个集合变量 <br>
  
  `value_comp()`       返回一个用于比较元素间的值的函数<br>
