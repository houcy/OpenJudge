# 坏了哪些键
Time Limit: 1 Sec  Memory Limit: 128 MB


## Description
旧键盘上坏了几个键，于是在敲一段文字的时候，对应的字符就不会出现。现在给出应该输入的一段文字、以及实际被输入的文字，请你列出肯定坏掉的那些键。




## Input
输入为多行，第一行给出应该输入的文字，后面的各行是实际被输入的文字。
每段文字是不超过30000个字符的串，用字母A-Z（大小写）、数字0-9、以及下划线组成。
题目保证输入的字符串均非空。



## Output
每段实际被输入的文字，对应一行输出：按照发现顺序，在一行中输出坏掉的键。其中英文字母只输出大写，每个坏键只输出1次。
题目保证至少有一个坏键。下划线不会是坏键。



## Sample Input
```
7_This_is_a_test
7_This_is__test
_hs_s_a_es

```
## Sample Output
```
A
7TI
```

## HINT
