#include <stdio.h>

//创建一个整形变量x，一个整形变量y来接受传过来的参数
int Add(int x,int y) {
	int z = 0;
	z = x + y;
	return z;	//返回结果z

}

int main() {
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	
	printf("请输入数字1：");
	scanf_s("%d", &num1);
	
	printf("请输入数字2：");
	scanf_s("%d", &num2);
	
	printf("两数相加结果为：");
	
	sum = Add(num1, num2);//在括号内输入要传递的参数，然后程序运行函数内的程序，然后得到返回值(结果)
	//sum = num1 + num2;函数的方式解决一下
	printf("%d", sum);
	return 0;
}




//函数在数学中f(x)=2*x+5,给我一个不同的x就能得到一个不同的结果这个就叫函数
//C语言中的函数也是一样的
//f(x,y)=x+y
//Add(x,y)=x+y
//函数就像一个委托人，我把这件事交给你来做，你做好了之后给我返回一个结果
//参数是函数和函数之间交流的方式
//函数写好了之后，以后直接调用就好了，不会让代码冗余，会变得很简洁
