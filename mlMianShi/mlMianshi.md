1、用自己的语音描述一下Transformer的意思。<br/>
2、mask的作用<br/>
3、一个bert训练模型需要那些参数，其计算量就可以固定？这些参数都是什么？意义是什么？<br/>
4、bert是双向的，而gpt是单向的为什么？<br/>
自注意力层在编码某个词的时候就会考虑这个词所在句子的所有词，所以在编码的时候，self-attention是bidirectional的。<br/>
在解码器中，self-attention只允许处理输出序列中更靠前的那些位置，把后面的位置隐去。就是相当于只处理这个词之前的词，所以，在解码器中的self-attention是unidirectional的。<br/>
5、bert如何做decoder？<br/>
6、推导一下bert的shape<br/>
7、bert训练如何行列式化<br/>
8、如何prof bert的训练性能。<br/>
.....


第一阶段：入门，目标是了解深度学习+了解paddle架构+cuda性能调优
1.基础知识，了解整体面貌:1~2星期
https://hit-scir.gitbooks.io/neural-networks-and-deep-learning-zh_cn/content/

2.Resnet，AlexNet, (CNN网络)，要学会推导shape的变化：1个星期
https://www.bilibili.com/video/BV1Fb4y1h73E?from=search&seid=12364668778761124196&spm_id_from=333.337.0.0
https://www.bilibili.com/video/BV1ih411J7Kz?from=search&seid=12366513947403311325&spm_id_from=333.337.0.0

3.找到Resnet实现，编译一下paddle，然后能够跑起来resnet：1个星期

4.了解paddle架构，要写一个算子出来：2个星期
einsum

4.cuda算子+性能调优，针对已有的算子或者新写的算子：3~4个星期




//===20220312
框架
1.动静态图的auto_grad的原理和实现
https://www.youtube.com/watch?v=MswxJw-8PvE
Paddle?
2.动态图hook上的原理和实现
https://www.youtube.com/watch?v=syLFCVYua6Q
3.动转静的原理和实现
4.静态图的图，pass,executor,gc机制
5.memory allocation：显存管理器

IO
1.dataloader的原理
2.如何把numpy的tensor转换为框架的tensor，如何更加的高效

性能优化
1.常见的做cuda优化的办法以
2.常见的性能分析的方法

模型
1.常见OP
2.常见模型的shape推导
resnet和bert

例子或者作业：
找到tensor flow/pytorch等有而pp没有的功能或者api，提交pr
1.lazytensor
2.iensum

![pic](./最小集.png)
