# 魔方阵
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
所谓N阶魔方阵，是一个N*N的方阵，其元素由1到N^2组成，且方阵每行每列以及对角线的元素和相等。如三阶魔方阵：
8 1 6
3 5 7
4 9 2


魔方阵的规律如下：
   从1～N*N的 各个数依次如下规则存放:
      (1) 1在第一行中间一列；
      (2) 每一个数存放的行比前一个数的行数减一，列数加一（如上的三阶方阵5在4的上一行，后一列）；
      (3) 如果上一个数在第一行，则下一个数在最后一行，列数加一；
      (4) 如果上一个数在最后一列，则下一个数在第一列，行数减一；
      (5) 如果按上述规则确定的位置已经有数，或上一个数在第一行第N列，则下一个数放在上一个数的正下方。



## Input
输入包含多组数据，每组为一个小于100的正奇数。

## Output
对于每个输入的N，输出N阶魔方阵；两组数据之间用一个空行分隔。方阵中每行每两个数之间有一个空格，行首和行末没有多余的空格。

## Sample Input
```
3
```
## Sample Output
```
8 1 6
3 5 7
4 9 2

```

## HINT