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

hw_20181019.c
1, 用flip, zero, test，exit四个指令，编写一段指令序列，完成两个两位(bits)整数的相等判断功能。
 
2, 用flip、zero、test、exit、goto五个操作,编制一段指令代码，完成两个两位bits的数的加法运算：x1x0和y1y0相加，结果存放在z2z1z0中。可以自己使用若干辅助bit位，可以使用你学过的、写过的已有功能。
 
3，在你的想象范围内，有哪些事情是计算机不能完成的？为什么？

4,我想从xx大学所有的学生名单（含姓名和学号）中，按学号查找该生的姓名：
	问题1：请简述George Polya的解题四过程；
	问题2：请你围绕上述问题，阐述你是如何“理解”这个问题的；
	问题3：请你设计一个折半法的递归算法程序，去解这个问题；
	假设：学号和姓名已经按序排列存放在数组中。学号以整数表示，如：2018022089.

hw_20181021.c
 1. 楼梯有N阶，上楼梯时可以一次上1级台阶，也可以一次上2级台阶。问有多少种上楼梯的方式。

2. 求把一个数N划分成不重复的4个数字之和的有多少种方法。

3. 角谷定理。输入一个自然数,若为偶数,则把它除以2,若为奇数,则把它乘以3加1。经过有限次后，总会得到自然数1。给定任意自然数，输出这一过程。如对于5，该过程为16 8 4 2 1



请思考上述递归问题的循环解法。请结合函数调用栈、调试工具和标准输入输出，观察和理解递归函数的调用过程。


hw_20171107.c

请通过以下练习1、2熟悉、理解和掌握不同进制和编码的实际转换过程。



可以使用整型数组来存放每一位的数值。具体使用方式如下：



int a[16]; //可以定义一个长度为16的整型变量的数组

a[0]=1; //将数组的第一个元素赋值为1

a[7]=0; //将数组的第8个元素赋值为0

printf("%d",a[7]); //输出数组的第8个元素的值



1. 完成如下进制转换函数：



输入一个十进制整数（0-65535），输出其二进制、八进制、十六进制的原码表示。

输入一个最长16位的二进制整数（逐位输入每一位的0、1值），输出其十进制、八进制、十六进制的原码表示。



2. 完成下列编码转换函数：



输入一个十进制整数，输出其二进制的原码和补码表示。



请通过以下练习3、4了解数值运算中的精度控制和误差累积，尝试尽量求得更加精确的解。



3. 已知PI可以通过莱布尼茨公式进行计算，即莱布尼茨级数(-1)^n / (2n+1)收敛于PI/4，编程求PI的精确值，尝试精确到小数点后指定的位数（比如10位）。



4.  已知sin x可以展开为无穷级数 (-1)^n * x^(2n+1) / (2n+1)!的和，编程求解任意给定x的正弦函数值。


hw_20181119.c
通过位操作完成以下任务，熟悉位操作的功能和可能用途。



1. 使用位操作重新实现作业三中的设备管理器。



2. 使用位操作确定一个正整数的二进制表示中最高为1的位。



3. 利用位操作求一个数的相反数（注意计算机中负数使用其补码表示）



4. 交换两个int型变量的值，在这一过程中不借助其他辅助变量。



5. 使用位操作实现两个整数的加、减、乘、除。

hw_20181120.c
请完成作业中的函数设计，并自行设计测试程序，测试上述函数的功能。

提示：一维数组长度为N，测试时可以设置N=5或者10。二维数组长度为[M][N],测试时可以设置M=5，N=10，等。



1. 定义以下函数，对一个整型变量的一维数组进行操作。

1）依次打印数组的每一个元素

2）求数组元素的最大值

3）求数组元素的平均值

4）反转该数组



2. 定义一个存储字符类型变量的一维数组（每一个元素是一个字符型变量），用这个数组存储一个英文字符序列（字符序列长度不足数组长度时，补0）。实现以下功能：

1）依次打印数组的每一个元素

2）将数组中的全部小写字母转换为大写

3*）统计该字符序列中每个字母的出现次数



3. 定义一个二维数组，用于存储若干个英文字符序列（字符序列长度不足数组长度时，补0作为标记）。实现以下功能：

1）以矩阵形式打印数组中的每一个元素（即逐行打印，每一行之后输出换行）

2）以矩阵形式打印上述矩阵的转置矩阵

3）打印数组指定行的每一个元素

4）求二维数组中英文字符序列长度最长的一行的下标

//test_20181121.c
A. Automorphic Number
Description
Given a number N, the task is to find out all Automorphic numbers that are less than N.
A number is called Automorphic number if and only if its square ends in the same digits as the
number itself. For example, 376*376 = 141376 , so 376 is an Automorphic number.
Input
The input contains one line with a positive integer N, where 1 < N < 10000.
Output
The output is ONE single line, containing all Automorphic numbers that are less than N. These
numbers should be presented in ascending order and are separated by a single space.
Sample Input
6
Sample Output
1 5
B. Chocolate and Wrapper Puzzle
Description
Given following three values, the task is to find the total number of maximum chocolates you can
eat.
money : Money you have to buy chocolates
price : Price of a chocolate
wrap : Number of wrappers to be returned for getting one extra chocolate.
It may be assumed that all given values are positive integers and greater than 1.
Input
The input contains one line, where three integers represent the money, price and wrap, respectively.
The integers are separated by a space.
Output
The output contains one line, where an integer represents the total number of maximum chocolates.
Sample Input
15 1 3
Sample Output
22
Hint
We buy and eat 15 chocolates
We return 15 wrappers and get 5 more chocolates.
We return 3 wrappers, get 1 chocolate and eat it
(keep 2 wrappers). Now we have 3 wrappers. Return
3 and get 1 more chocolate.
So total chocolates = 15 + 5 + 1 + 1 = 22

//hw_20181130.c
定义一个正方形二维数组a[M][M]（比如M=15），其每一个元素为字符类型，将数组的每一个元素初始化为' '空格。控制循环不断接受下列指令，并完成相应功能：

1）'P'指令(print)：以矩阵形式打印数组中的每一个元素（即逐行打印，每一行之后输出换行）

2）'S'指令(set)：从控制台接受整型数i，j，将数组元素a[i][j]的值设置为'X'

3）'M'指令(move)：从控制台接受'w' 's' 'a' 'd'四个字符之一，表示将当前X的位置向上、下、左、右方向移动一位。

为上述程序设计合适的控制台提示信息帮助使用者完成操作；

完善上述程序的功能或者添加新的功能。

