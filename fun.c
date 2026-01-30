#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main() {
	char input[20] = { 0 };

	printf("温馨提示\n");
	Sleep(3000);
	printf("你的电脑遇到了一些问题并将在1分钟内关机\n");
	Sleep(3000);
	printf("请及时保存你的工作\n");

	system("shutdown -s -t 60");

	Sleep(3000);
	printf("亦或者请输入：我是猪");
	scanf_s("%s", input);
	if (strcmp(input, "我是猪") == 0) {
		system("shutdown -a");
		printf("很听话哦");
	}
	else
		printf("时间快不够了哦");
	return 0;
}