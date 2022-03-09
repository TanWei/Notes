```
class X {};
class Y : public virtual X {};
class Z : public virtual X {};
class A : public Y, public Z {};
//sizeof的结果
//1
//8
//8
//12
```
![图片](./第三章虚继承类的大小.png)
编译器可能会优化掉class X的大小1byte。
### 3.1 Data Member的绑定（The Binding of a Data Member） 
typedef 要在成员变量前，  定义不用（例如：函数前定义一个全局变量x，类结束位置定义一个成员变量x，类内部访问的x是成员变量x）；
### 3.2 Data Member的布局（Data Member Layout） 
### 3.3 Data Member的存取 