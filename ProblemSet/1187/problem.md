# 能被3整除吗？
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
众所周知，一个正整数N能够被3整除当且仅当N的各位数字之和能够被3整除。如123的各位数字之和是6，而6%3=0，所以123能够被3整除。现在有若干个正整数，需要编程来判断这些数是否能被3整除。


## Input
输入有多行。第一行是M>0，表示之后有M个正整数需要判断。
之后有M行，每行是一个正整数N，N<=10100，也就是说，N不超过100位十进制数字。


## Output
输出有M行。每一行输出与上述每一行输入一一对应。
如果对应的正整数能够被3整除，则输出“Yes”，否则输出“No”。


## Sample Input
```
6
67347
111233
23
1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111
345
18446744073709551615
```
## Sample Output
```
Yes
No
No
No
Yes
Yes
```

## HINT
N太大了，超出了所有整数类型所能存储的最大范围，只能考虑使用字符串把N存储下来，逐位处理了。
