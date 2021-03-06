## 题目
字符串 S 由小写字母组成。我们要把这个字符串划分为尽可能多的片段，同一字母最多出现在一个片段中。返回一个表示每个字符串片段的长度的列表。  

## 思路
hash 记录每个字母最后出现的位置，然后遍历字符串,比较当前位置和字母出现的最后位置比较，再根据情况更新数据  
官方题解和我的思路是一样的，但是记录没有字母最后出现的位置用的定长数组，原因是  

小写字符总共有26个， 因此不管多长的字符串， 都是够用的。 存储的是每个字符最大位置而已。 由于是定长，因此空间消耗忽略不计。  

map底层采用红黑树实现， 时间复杂度为o(logn)。  

可能我们平常用hashmap不会考虑到这个， 但是如果定长的数组能够解决问题， 更佳！   
哈希表 = 定长的数组 + 哈希函数映射 + 如果是开散列 + 挂的是链表 + 结点信息资源 + 超过阈值之后调优 + 扩容之后重新分配 等等都是要有开销的。