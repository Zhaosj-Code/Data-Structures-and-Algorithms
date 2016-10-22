<b>数据与算法作业 - VS2015工程<b/><br/>
OJ网址：http://lambda.cool/oj/index/<br/>
<hr/>
Problem  22  :   实验一：卡迈克尔数 (Carmichael Number) OJ网址：http://lambda.cool/oj/problem/22<br/>
Time Limit :  2000 ms       Memory Limit :  10000 KiB       Deadline :  2016-10-09 23:59:59<br/>
Description<br/>
对于合数n，如果区间(1,n)内所有和 n 互质的整数a都满足a^(n-1)≡1(mod n)，就称n是一个卡迈克尔数。例如n=561就是一个卡迈克尔数。 设计一个算法，对于给定的上限N，输出不大于N的所有卡迈克尔数以及这些数的个数。 注意：设计尽量高效的算法。<br/>
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
