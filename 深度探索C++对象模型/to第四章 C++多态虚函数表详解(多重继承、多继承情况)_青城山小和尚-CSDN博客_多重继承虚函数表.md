本文关键词：C++ [多态](https://so.csdn.net/so/search?q=%E5%A4%9A%E6%80%81&spm=1001.2101.3001.7020) 多继承 多重继承 虚函数表 虚函数指针 动态绑定

概述：C++相对其他[面向对象](https://so.csdn.net/so/search?q=%E9%9D%A2%E5%90%91%E5%AF%B9%E8%B1%A1&spm=1001.2101.3001.7020)语言来说，之所以灵活、高效。很大程度的占比在于其多态技术和模板技术。C++虚函数表是支撑C++多态的重要技术，它是C++动态绑定技术的核心。  
本文章将着重图解[虚函数](https://so.csdn.net/so/search?q=%E8%99%9A%E5%87%BD%E6%95%B0&spm=1001.2101.3001.7020)表相关知识，在阅读本文前，博主已经默认你已经学习了C++多态的语法，并且通过代码实践过。

一、多态起手式以及内存分布
-------------

假设有一个基类ClassA，一个继承了该基类的派生类ClassB，并且基类中有虚函数，派生类实现了基类的虚函数。  
我们在代码中运用多态这个特性时，通常以两种方式起手：  
(1) ClassA \*a = new ClassB();  
(2) ClassB b; ClassA \*a = &b;  
以上两种方式都是用基类指针去指向一个派生类实例，区别在于第1个用了new关键字而分配在堆上，第2个分配在栈上。  
![](https://img-blog.csdn.net/20180820143644168?watermark/2/text/aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM2MzU5MDIy/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70)
  
请看上图，不同两种方式起手仅仅影响了派生类对象实例存在的位置。  
以左图为例，ClassA \*a是一个栈上的指针。  
该指针指向一个在堆上实例化的子类对象。基类如果存在虚函数，那么在子类对象中，除了成员函数与成员变量外，编译器会自动生成一个指向\*\*该类的虚函数表(这里是类ClassB)\*\*的指针，叫作虚函数表指针。通过虚函数表指针，父类指针即可调用该虚函数表中所有的虚函数。

二、类的虚函数表与类实例的虚函数指针
------------------

首先不考虑继承的情况。**如果一个类中有虚函数，那么该类就有一个虚函数表**。  
这个虚函数表是属于类的，所有该类的实例化对象中都会有一个虚函数表指针去指向该类的虚函数表。  
从第一部分的图中我们也能看到，一个类的实例要么在堆上，要么在栈上。也就是说一个类可以有很多很多个实例。但是！一个类只能有一个虚函数表。在编译时，一个类的虚函数表就确定了，这也是为什么它放在了**只读数据段**中。  
![](https://img-blog.csdn.net/20180821095203702?watermark/2/text/aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM2MzU5MDIy/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70)
  
三、多态代码及多重继承情况
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

```
class ClassA
{
public:
	ClassA() { cout << "ClassA::ClassA()" << endl; }
	virtual ~ClassA() { cout << "ClassA::~ClassA()" << endl; }

	void func1() { cout << "ClassA::func1()" << endl; }
	void func2() { cout << "ClassA::func2()" << endl; }

	virtual void vfunc1() { cout << "ClassA::vfunc1()" << endl; }
	virtual void vfunc2() { cout << "ClassA::vfunc2()" << endl; }
private:
	int aData;
};

class ClassB : public ClassA
{
public:
	ClassB() { cout << "ClassB::ClassB()" << endl; }
	virtual ~ClassB() { cout << "ClassB::~ClassB()" << endl; }

	void func1() { cout << "ClassB::func1()" << endl; }
	virtual void vfunc1() { cout << "ClassB::vfunc1()" << endl; }
private:
	int bData;
};

class ClassC : public ClassB
{
public:
	ClassC() { cout << "ClassC::ClassC()" << endl; }
	virtual ~ClassC() { cout << "ClassC::~ClassC()" << endl; }

	void func2() { cout << "ClassC::func2()" << endl; }
	virtual void vfunc2() { cout << "ClassC::vfunc2()" << endl; }
private:
	int cData;
};

```

在第二部分中，我们讨论了在没有继承的情况下，虚函数表的逻辑结构。  
那么在有继承情况下，**只要基类有虚函数，子类不论实现或没实现，都有虚函数表**。  
请看上面代码  
(1) ClassA是基类, 有普通函数: func1() func2() 。虚函数: vfunc1() vfunc2() ~ClassA()  
(2) ClassB继承ClassA, 有普通函数: func1()。虚函数: vfunc1() ~ClassB()  
(3) ClassC继承ClassB, 有普通函数: func2()。虚函数: vfunc2() ~ClassB()  
**基类的虚函数表和子类的虚函数表不是同一个表**。下图是基类实例与多态情形下，数据逻辑结构。注意，虚函数表是在编译时确定的，属于类而不属于某个具体的实例。虚函数在代码段，仅有一份。  
![](https://img-blog.csdn.net/20180820162125485?watermark/2/text/aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM2MzU5MDIy/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70)
  
ClassB继承与ClassA，其虚函数表是在ClassA虚函数表的基础上有所改动的，变化的仅仅是在子类中重写的虚函数。如果子类没有重写任何父类虚函数，那么子类的虚函数表和父类的虚函数表在**内容上是一致的**。

```
ClassA *a = new ClassB();
a->func1();                    // "ClassA::func1()"   隐藏了ClassB的func1()
a->func2();                    // "ClassA::func2()"
a->vfunc1();                   // "ClassB::vfunc1()"  重写了ClassA的vfunc1()
a->vfunc2();                   // "ClassA::vfunc2()"

```

这个结果不难想象，看上图，**ClassA类型的指针a能操作的范围只能是黑框中的范围**，之所以实现了多态完全是因为子类的**虚函数表指针与虚函数表的内容**与基类不同  
这个结果已经说明了C++的隐藏、重写(覆盖)特性。

同理，也就不难推导出ClassC的逻辑结构图了  
类的继承情况是: ClassC继承ClassB，ClassB继承ClassA  
这是一个多次单继承的情况。**(多重继承)**  
![](https://img-blog.csdn.net/20180821103628852?watermark/2/text/aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM2MzU5MDIy/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70)

```
ClassA* a = new ClassC;
a->func1();          // "ClassA::func1()"   隐藏ClassB::func1()               
a->func2();          // "ClassA::func2()"	隐藏ClassC::func2()
a->vfunc1();	     // "ClassB::vfunc1()"	ClassB把ClassA::vfunc1()覆盖了
a->vfunc2();	     // "ClassC::vfunc2()"	ClassC把ClassA::vfunc2()覆盖了

ClassB* b = new ClassC;
b->func1();				// "ClassB::func1()"	有权限操作时，子类优先
b->func2();				// "ClassA::func2()"	隐藏ClassC::func2()
b->vfunc1();			// "ClassB::vfunc1()"	ClassB把ClassA::vfunc1()覆盖了
b->vfunc2();			// "ClassB::vfunc2()"	ClassC把ClassA::vfunc2()覆盖了

```

四、多继承下的虚函数表 (同时继承多个基类)
----------------------

多继承是指一个类同时继承了多个基类，假设这些基类都有虚函数，也就是说每个基类都有虚函数表，那么该子类的逻辑结果和虚函数表是什么样子呢？

```
class ClassA1
{
public:
	ClassA1() { cout << "ClassA1::ClassA1()" << endl; }
	virtual ~ClassA1() { cout << "ClassA1::~ClassA1()" << endl; }

	void func1() { cout << "ClassA1::func1()" << endl; }

	virtual void vfunc1() { cout << "ClassA1::vfunc1()" << endl; }
	virtual void vfunc2() { cout << "ClassA1::vfunc2()" << endl; }
private:
	int a1Data;
};

class ClassA2
{
public:
	ClassA2() { cout << "ClassA2::ClassA2()" << endl; }
	virtual ~ClassA2() { cout << "ClassA2::~ClassA2()" << endl; }

	void func1() { cout << "ClassA2::func1()" << endl; }

	virtual void vfunc1() { cout << "ClassA2::vfunc1()" << endl; }
	virtual void vfunc2() { cout << "ClassA2::vfunc2()" << endl; }
	virtual void vfunc4() { cout << "ClassA2::vfunc4()" << endl; }
private:
	int a2Data;
};

class ClassC : public ClassA1, public ClassA2
{
public:
	ClassC() { cout << "ClassC::ClassC()" << endl; }
	virtual ~ClassC() { cout << "ClassC::~ClassC()" << endl; }

	void func1() { cout << "ClassC::func1()" << endl; }

	virtual void vfunc1() { cout << "ClassC::vfunc1()" << endl; }
	virtual void vfunc2() { cout << "ClassC::vfunc2()" << endl; }
	virtual void vfunc3() { cout << "ClassC::vfunc3()" << endl; }
};

```

ClassA1是第一个基类，拥有普通函数func1()，虚函数vfunc1() vfunc2()。  
ClassA2是第二个基类，拥有普通函数func1()，虚函数vfunc1() vfunc2()，vfunc4()。  
ClassC依次继承ClassA1、ClassA2。普通函数func1(),虚函数vfunc1() vfunc2() vfunc3()。  
![](https://img-blog.csdn.net/20181023164040667?watermark/2/text/aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3FxXzM2MzU5MDIy/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70)
  
在多继承情况下，有多少个基类就有多少个虚函数表指针，前提是基类要有虚函数才算上这个基类。  
如图，虚函数表指针01指向的虚函数表是以ClassA1的虚函数表为基础的，子类的ClassC::vfunc1(),和vfunc2()的**函数指针**覆盖了**虚函数表01中的虚函数指针01的位置、02位置**。当子类有多出来的虚函数时，添加在第一个虚函数表中。  
当有多个虚函数表时，虚函数表的结果是0代表没有下一个虚函数表。" \* "号位置在不同操作系统中实现不同，代表有下一个虚函数表。  
注意：  
1.子类虚函数会覆盖**每一个**父类的**每一个**同名虚函数。  
2.父类中没有的虚函数而子类有，填入第一个虚函数表中，且用父类指针是不能调用。  
3.父类中有的虚函数而子类没有，则不覆盖。仅子类和该父类指针能调用。

最后给出代码和结果

```
	ClassA1 *a1 = new ClassC;
	a1->func1();               // "ClassA1::func1()"    隐藏子类同名函数
	a1->vfunc1();              // "ClassC::vfunc1()"    覆盖父类ClassA1虚函数
	a1->vfunc2();              // "ClassC::vfunc2()"    覆盖父类ClassA1虚函数
	没有a1->vfunc3()，父类没有这个虚函数

	ClassA2 *a2 = new ClassC;
	a2->func1();               // "ClassA2::func1()"    隐藏子类同名函数
	a2->vfunc1();              // "ClassC::vfunc1()"    覆盖父类ClassA2虚函数
	a2->vfunc2();              // "ClassC::vfunc2()"    覆盖父类ClassA2虚函数
	a2->vfunc4();              // "ClassA2::vfunc4()"   未被子类重写的父类虚函数

	ClassC *c = new ClassC;
	c->func1();                // "ClassC::func1()"
	c->vfunc1();               // "ClassC::vfunc1()"
	c->vfunc2();               // "ClassC::vfunc2()"
	c->vfunc3();               // "ClassC::vfunc3()"
	c->vfunc4();               // "ClassA2::func4()"

```