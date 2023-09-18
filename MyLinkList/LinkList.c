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
