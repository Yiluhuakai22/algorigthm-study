# 题目
假设有打乱顺序的一群人站成一个队列，数组 people 表示队列中一些人的属性（不一定按顺序）。每个 people[i] = [hi, ki] 表示第 i 个人的身高为 hi ，前面 正好 有 ki 个身高大于或等于 hi 的人。  
请你重新构造并返回输入数组 people 所表示的队列。返回的队列应该格式化为数组 queue ，其中 queue[j] = [hj, kj] 是队列中第 j 个人的属性（queue[0] 是排在队列前面的人）。  
示例：  
输入：people = [[7,0],[4,4],[7,1],[5,0],[6,1],[5,2]]  
输出：[[5,0],[7,0],[5,2],[6,1],[4,4],[7,1]]  

# 思路
①根据h,k的值排序，h从大到小，h一样的，k从小到大  
②排序后的值取出，按要求放进队列里  
③重复②过程直至people里的值全部处理好  