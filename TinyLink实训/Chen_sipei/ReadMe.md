
----2017/12/8----
1.修改了文件路径，分为Arduino和TinyBLE
2.电机pin改为宏编译
3.跑通了官方TinyBLE——MPU代码
4.尝试封装Gyro没有成功

----2017/12/15----
1.封装了Gyro的read(),data_x,data_y,data_z函数
2.用test文件夹里的main.cpp成功读取陀螺仪读数
3.内部还没有把加速度和陀螺仪读取分开4
4.是否需要重置读数？
5.是否可以设置陀螺仪读取频率？
6.按照API给Arduino_Motor增加了state函数

