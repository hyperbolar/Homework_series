# Homework_series
Dooooo homework with c

20180930_homework
1. 写一个程序，输入任意数量的整数（比如以0结束），统计输入整数中的正整数和负整数的数量，并输出。

2. 142857是一个六位数，我们发现：
142857 * 1 = 142857
142857 * 2 = 285714
142857 * 3 = 428571
142857 * 4 = 571428
142857 * 5 = 714285
142857 * 6 = 857142
即用1到6的整数去乘142857，都会得到一个将原来的数首尾相接循环移动若干数字再在某处断开而得到的数字。
也就是说，如果把原来的数字和新的数字分别首尾相接，他们得到的数字环是相同的，只是两个数的起始数字不一定相同。

写一个程序，输出所有十位以内的十进制循环数。

3. 用1、2、3、4四个数字，能够构成多少无重复数字的三位数？写一个程序，输出所有这样的数。

20181005_data&calculate_homework

1，阅读参考文献：Computational Thinking：why and what。写一篇读后感；

2，请你设计一个递归程序：程序输入为n个硬币，第m个为假币.程序输出寻找假币的过程和称量次数（该作业在国庆节后8号提交）。

(这里只放第二题啦……）

20181010_test_judge_online

练习 (2018-10-10)

A. 时刻比较
Description
编写程序，比较两个时刻的早晚，返回其中较早的时刻。

Input
输入数据包含两行，每一行表示一个时刻。
每一行由 3 个数字组成，分别表示时、分和秒。数字之间以空格分开。

Output
输出结果包含一行，表示两个时刻中较早的时刻。
该行由 3 个数字组成，分别表示时、分和秒。数字之间以空格分开。

Sample Input
15 54 20
8 15 3

Sample Output
8 15 3

B. 找关键字符
Description
设计程序，在输入行（以#结尾）中查找关键字符 q (就是字母 q！！)，找到则输出其第一次出现的位
置(从1开始)，找不到则输出 -1。

Input
输入数据包含一行。
该行为一字符串，以#结尾；

Output
输出结果包含一行，表示 q 第一次出现的位置，找不到则输出 -1。

Sample Input
too young too simple, sometimes naive#

Sample Output
-1

练习 2018-10-13

1. 写一个竞猜游戏，用户必须猜一个秘密的数字，在每次猜完后程序会告诉用户他猜的数是太大了还是太小了，直到猜测正确，最后打印出猜测的次数。如果用户连续猜测同一个数字则只算一次。

2. 设备管理。有32个设备，用一个整型数表示占用情况。每个设备有一个id，1-32。写一个程序，初始化时读入设备的当前状态。可以提供下面选项：1. 占用设备x（若此时设备已被占用，输出提示），2. 释放设备x，3. 输出所有设备使用情况（十进制和二进制表示）， 4. 结束。

test 20181017

Problem A. Date
Description
Calculate the total number of days from
the beginning of the year to the given date.
Input
Input contains one line with three integers, representing the year, month and day of
the date, respectively. Output
The output will be a single integer, representing the number of days to the
given date in that year. Sample input
2018 2 1
Sample output
32

Problem B. The sum of four squares
Description
Counting the number of solutions for
splitting a given non-negative number into
the sum of squares of four non-negative
integers. For example:
5 is the sum of the square of 0, 0, 1, 2;
9 is the sum of the square of 0, 1, 2, 2 or 0, 0, 0, 3; (two solutions)
15 is the sum of the square of 1, 1, 2, 3. Note that (0, 0, 1, 2) and (0, 0, 2, 1) are
the same solution.
Input
Input contains a single integer. Output
The output will be a single integer, counting the number of solutions for the
given input. Sample input
5
Sample output
1

