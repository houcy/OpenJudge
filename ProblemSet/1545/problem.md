# 
Time Limit: 1 Sec  Memory Limit: 256 MB


## Description
小红长得很漂亮成绩也很好，班主任马某很喜欢她，但这也遭到了其他同学的嫉妒，全班同学除了小明都很讨厌她，大家在她背后骂她装高傲又老爱向老师打小报告。小明是个例外，他已经喜欢小红两年多了，每天都给她送吃的用的，还帮小红整理被同学扔掉的书。而小红对于他送的东西和给予的关心毫不动容。但小明还是喜欢她，并坚持给她送东西和给她打电话，哪怕她接了电话马上挂掉。有一天，小红被人杀害在了教室里，凶手用绳子将她捆在在了她的座椅上。她的脸上盖着很多层的湿纸巾，是窒息而死的。小红头发凌乱，掀开纸巾发现她满脸淤青，身上有多处伤痕。死亡时间大概是前一晚的11点左右，现场还发现了一大堆开封的零食和用品。班里同学众口一词表示那些都是小明送的。警察还在兜里发现了她的手机，打开手机查了通话记录，发现前一晚的11点整小明曾打过电话给小红，通话时间为12秒。学校保卫处表示昨晚他们很早就睡了，没查看教室，学校各处大概有30个的监控摄像头都在短时间里被人打歪并用黑布给蒙住。班主任马某也表示他昨晚很早就回家睡觉了。而小明对小红的死则是痛苦不已。无独有偶，小明的宠物阿黄也在一次车祸中丧失了性命。这两件事对小明造成了巨大的心里阴影，求阴影部分的面积。
假设小明的心理抽象图如下，其中半圆为小明的心，O点为圆心，半圆的半径为1，两个三角形为上述的两件事，两个三角形与半圆重叠的部分便是“阴影部分”（图中彩色区域）。
 

    
        
            
        
        
            
        
    


 

 


## Input
第一个行输入T（T<1000），表示有T组测试用例，之后T行，每行8个浮点数，分别为A、B、C、D这4个点的坐标（xi，yi）， OAB、OCD是两个三角形。（-10000<=xi,yi<=10000）
所有数据均保证：
1.A、B、C、D四点均不在X轴下方，且都在圆外
2.∠AOX > ∠BOX , ∠COX > ∠DOX , ∠AOX > ∠COX , ∠BOX > ∠DOX
3.线段AB、CD不与圆相交，OAB或OCD三点不在一条直线上


## Output
每组测试用例输出一行，包括用例编号和所求的面积，所求面积保留3位小数。


## Sample Input
```
2
-0.7071 0.7071 0 1 0 1 0.7071 0.7071
0 1 0.8 0.6 0.6 0.8 1 0

```
## Sample Output
```
Case 1: 0.785
Case 2: 0.785

```

## HINT


## Append Code