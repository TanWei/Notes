1、用自己的语音描述一下Transformer的意思。<br/>
2、mask的作用<br/>
3、一个bert训练模型需要那些参数，其计算量？这些参数都是什么？意义是什么？<br/>
4、bert是双向的，而gpt是单向的为什么？<br/>
自注意力层在编码某个词的时候就会考虑这个词所在句子的所有词，所以在编码的时候，self-attention是bidirectional的。<br/>
在解码器中，self-attention只允许处理输出序列中更靠前的那些位置，把后面的位置隐去。就是相当于只处理这个词之前的词，所以，在解码器中的self-attention是unidirectional的。<br/>
5、bert如何做decoder？<br/>
6、推导一下bert的shape<br/>
7、bert训练如何行列式化<br/>
8、如何prof bert的，训练性能。<br/>