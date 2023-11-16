#include<stdio.h>

int main()
{
	float Mb, MB,time;
	printf("请输入下载速度（Mb/s）和文件大小（MB）：");
	scanf_s("%f %f", &Mb, &MB);
	time = MB / Mb;
	printf("下载速度为：%.2fMb/s,文件大小为%.2fMB,预计下载时间为%.2fs",Mb,MB,time);
	return 0;
}