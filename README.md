数据与算法作业 - VS2015工程<br/>
OJ网址：http://lambda.cool/oj/index/<br/>
<hr/>
Problem  22  :   实验一：卡迈克尔数 (Carmichael Number) OJ网址：http://lambda.cool/oj/problem/22<br/>
Time Limit :  2000 ms       Memory Limit :  10000 KiB       Deadline :  2016-10-09 23:59:59<br/>
<p>Description<br/>
对于合数n，如果区间(1,n)内所有和 n 互质的整数a都满足a^(n-1)≡1(mod n)，就称n是一个卡迈克尔数。例如n=561就是一个卡迈克尔数。 设计一个算法，对于给定的上限N，输出不大于N的所有卡迈克尔数以及这些数的个数。 注意：设计尽量高效的算法。<p/>
Input Description<br/>
1个正整数N<br/>
Output Description<br/>
若干行，每行一个整数。其中第一行的数表示不大于N的所有卡迈克尔数的个数。其后的行（如果存在的话）从小到大依次输出这些卡迈克尔数。<br/>
Input Sample<br/>
600<br/>
Output Sample<br/>
1<br/>
561<br/>
Hint<br/>
如何用更少的时间判断一个数是否是卡迈克尔数呢？ 指数运算会不会越界呢？<br/>
<hr/>
Problem  23  :   实验二： 另类约瑟夫问题 OJ网址：http://lambda.cool/oj/problem/23<br/>
Time Limit :  1000 ms       Memory Limit :  30000 KiB       Deadline :  2016-10-14 23:59:59<br/>
<p>Description<br/>另类约瑟夫问题：总共有 N 个人编号为 1 号到 N 号（ 每个人的编号一直不变），一开始 只取 1 号到 M 号沿顺时针围成一圈（ 脸都对着圆心）。同样是依次报数，当轮到报数为 k 的 人时， 如果此人的编号为奇数， 则将剩余的人中编号最小的人插入此人右侧， 如果此人的编 号为偶数， 则将剩余的人中编号最小的人插入此人左侧。 并从报数为 k 的人左侧开始重新开 始重复此过程。 当围成一个 N 个人的圈后， 继续从报数为 k 的人左侧重新开始沿顺时针报 数， 当有人再次报数为 k 时， 此人出列。 继续从出列的人的左侧重新开始重复此过程。 直到 围成圈的人数再次为 M 时停止。<p/>
<p>问： 最后留下的 M 个人中， 有多少来自一开始取的 M 个人。<p/>
<p>注： 链表中当 N 非常大时， 考虑到时间复杂度， k 可以取 k≪N。<p/>
<p>约瑟夫问题示例： 假设 N=6, M=4, k=2。 则一开始取的人编号分别 1， 2， 3， 4 的人围 成一圈。 然后从 1 开始报两个数。 2 为偶数， 则圆圈中编号为 2 的人左侧位置加一个 5， 圆 圈的顺序变为： 1， 2， 5， 3， 4。 又从 5 开始重新报数， 报 2 的人为 3 号， 则往其圆圈中的 右侧位置加一个 6。 圆圈顺序变为 1， 2， 5， 6， 3， 4。 此时 6 人全部在圆圈中， 继续从刚 刚的 3 号的下一位 4 号报数， 报 2 的人为 1 号， 则 1 号出列。 圆圈顺序变为 2， 5， 6， 3， 4 继续从 1 号下一位开始报数， 下一次报 2 的为 5 号， 则 5 号出列。 则圆圈的顺序变为 2， 6， 3， 4。 其中 2， 3， 4 号来自于一开始取的 1， 2， 3， 4 中， 所以答案为 3。<p/>
Input Description<br/>
按照 N M k 的的顺序输入参数， 其中 N 为总人数， M 为初始的选取人数， k 是每次报数的个数。<br/>
Output Description<br/>
输出最后剩余 M 人中属于最开始 M 人的个数。<br/>
Input Sample<br/>
6 4 2<br/>
Output Sample<br/>
3<br/>
Hint<br/>
<hr/>
Problem  24  :   实验三：变种汉诺塔问题 OJ网址：http://lambda.cool/oj/problem/24<br/>
Time Limit :  1000 ms       Memory Limit :  10000 KiB       Deadline :  2016-10-28 23:59:59<br/>
<p>Description<br/>变种汉诺塔问题和传统汉诺塔问题类似，规则描述如下：<p/>
<p>1.	有三根柱子，从左到右编号为0、1、2。最左侧0号柱子上放置着若干圆盘。与传统汉诺塔不同的是，其中存在部分大小相同的圆盘。<p/>
<p>2.	要求包括初始状态在内，每个圆盘上方放置的圆盘不得大于该圆盘，即圆盘上方只能放置小于自己或和自己相同大小的圆盘<p/>
<p>3.	每次移动只能将某柱子最顶部的一个圆盘移动到另一柱子的最顶部。<p/>
<p>4.	需要注意的是，大小相同的圆盘具有的其他特征是不一样的，例如不同颜色。最后需要保证2号柱子上的圆盘排列顺序，和开始时的0号柱子上的顺序完全相同。具体可参考后文样例。<p/>
Input Description<br/>
输入包括两行： 第一行包括2个数字N和M(1<=N<=15000,1<=M<=1000000)，其中N代表圆盘种类的个数，M用于对计算结果取模。 第二行包括N个数字，分别为a_1,…,a_N，其中a_i代表大小为i的圆盘个数。<br/>
Output Description<br/>
输出只有一行：若最优策略的步数为L，则输出(L mod M)。<br/>
Input Sample<br/>
2 1000<br/>
1 2<br/>
Output Sample<br/>
7<br/>
Hint<br/>
最优步骤不唯一，最优步数唯一。例子见PDF。<br/>
<hr/>
