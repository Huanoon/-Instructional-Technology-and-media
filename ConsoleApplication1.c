// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdio.h>
#include<>
//int main()
//{
//    int a;
//    int* p;
//    scanf_s("%d",&a);
//    p = &a;
//    printf_s("%d",*p);
//
//
//}

//int main()
//{
//	int a[3][4];
//	int max, x, y;
//	int i, j;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			scanf_s("%d", &a[i][j]);
//		}
//	}
//	max = a[0][0];
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 4; j++) {
//			if (max < a[i][j]) {
//				max = a[i][j];
//				x = i; 
//				y = j;
//			}
//		}
//	}
//	printf_s("最大值是%d 行%d 列%d", max, x+1,y+1);
//
//}8

//int f(int x) {
//	if (x < 3) {
//		return 1;
//	}
//	else {
//		return f(x - 1) + f(x - 2);
//	}
//}
//
//int main()
//{
//	int n;
//	scanf_s("%d", &n);
//	printf("%d", f(n));
//
//}
//#include <stdio.h>
//#include <string.h>
//
//int compare(const void* a,const void* b) {
//    return strcmp(*(char **)a, *(char **)b);
//}
//
//int main() {
//    char str1[100], str2[100], str3[100];
//    char* str_arr = {str1, str2, str3 };
//
//    scanf("%s %s %s", str1, str2, str3);
//    
//    if (strcmp(str1, str2) < 0) {
//
//    }
//
//    for (int i = 0; i < 3; i++) {
//        printf("%s ", str_array[i]);
//    }
//
//    return 0;
//}
//


//int main() {
//	int a[10];
//	int* p,*q;
//	int i, min, max, tmp;
//	scanf_s("%d", &a[0]);
//	p = a;
//	q = a;
//	min = *p;
//	max = min;
//	for (i = 1; i < 10; i++) {
//		scanf_s("%d", &a[i]);
//		if (a[i] > max) {
//			max = a[i];
//			p = &a[i];
//		}
//		if (a[i] < min) {
//			min = a[i];
//			q = &a[i];
//		}
//	}
//	tmp = a[0];
//	a[0] = *q;
//	*q = tmp;
//
//	tmp = a[9];
//	a[9] = *p;
//	*p = tmp;
//	for (i = 0; i < 10; i++) {
//		printf_s("%d ", a[i]);
//	}
//}


struct ysj{
	int num;
	char name[9];
	struct ysj *next;
	
};
int main() {
	struct ysj *head;
	int i;
	scanf_s("%d ", &head->num);
	scanf_s("%s ", &head->name);
	head->next = NULL;
	struct ysj *tmp;
	scanf_s("%d ", &tmp->num);
	scanf_s("%s ", &tmp->name);
	tmp->next = NULL;
	head->next = tmp;

	while (head->next != NULL) {
		printf_s("%d %s", head->num, head->name);
		head = head->next;

	}
}
