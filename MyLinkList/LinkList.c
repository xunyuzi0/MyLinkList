#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//本程序完成了链表的数据结构及部分算法

typedef struct L {

	int data;
	struct L * pNext;

}Lnode, * pLnode;//定义一个无名结构，并用typedef函数对其重命名


pLnode init_LList(void);//初始化链表
bool insert_LList(pLnode pHead, int pos, int num);//向链表插入元素
bool delete_LList(pLnode pHead);//删除整个链表的所有元素
bool delete_one_LList(pLnode pHead, int pos, int *pNum);
//删除并返回链表中某个元素
int get_LList(pLnode pHead, int pos);//获取链表某个元素
bool show_LList(pLnode pHead);//输出整个链表
bool sort_LList(pLnode pHead);//对整个链表排序
bool isEmpty_LList(pLnode pHead);//判断链表是否为空

//bool inversion_LList(pLnode pHead);//将整个链表倒置


int main(void) {

	int temp = 0;//临时储存被删除结点的值
	int num = 0;//储存用户通过get函数返回的值

	pLnode pHead = NULL;//创建一个链表结构的指针，作为头指针
	pHead = init_LList();
	show_LList(pHead);

	insert_LList(pHead, 1, 400);
	insert_LList(pHead, 2, 300);
	insert_LList(pHead, 3, 200);
	insert_LList(pHead, 1, 500);
	show_LList(pHead);

	if (delete_one_LList(pHead, 1, &temp))
		printf("删除结点成功，删除的值为：%d\n", temp);
	show_LList(pHead);

	if (num = get_LList(pHead, 3)) {
		printf("获取链表数据成功！获取的数为：%d\n",num);
	}

	if (sort_LList(pHead)) {
		printf("链表排序成功！\n");
	}
	show_LList(pHead);
	
	return 0;
}

//初始化链表
pLnode init_LList(void) {

	
}


//向链表插入元素
bool insert_LList(pLnode pHead, int pos, int num) {

	
}

//删除整个链表
bool delete_LList(pLnode pHead) {

	
}

//删除并返回链表中某个元素
bool delete_one_LList(pLnode pHead, int pos, int* pNum) {

	
}

//获取链表某个元素
int get_LList(pLnode pHead, int pos) {

	

}

//输出整个链表
bool show_LList(pLnode p) {

	

}

//对整个链表排序
bool sort_LList(pLnode pHead) {

}

////将整个链表倒置
//bool inversion_LList(pLnode pHead) {
//
//	if (isEmpty_LList(pHead)) {
//		printf("链表为空，排序失败！");
//		return false;
//	}
//
//	pLnode p = pHead;//pLast用来指向链表的头结点
//	pLnode pLast = pHead;//pLast用来指向链表的尾结点
//
//	while (pLast->pNext != NULL) {
//		pLast = pLast->pNext;
//	}//使得pLast指向链表尾结点
//
//	for(;;p = p->pNext)
//
//}

//判断链表是否为空
bool isEmpty_LList(pLnode pHead) {

	
}
