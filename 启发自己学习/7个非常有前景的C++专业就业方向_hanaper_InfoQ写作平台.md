1.  **服务器端开发**
    

服务器端开发，一般定义为 web 服务器上编写程序并使之正常运行。它的主要特点是发布网站、提供信息浏览器、被动执行，这也是一个关于服务器端编程的基本包含内容。服务器端开发是开发者中技术性偏强，对逻辑思维要求更高的一个细分方向，处理的只有逻辑和业务。所以从长远的职业规划来讲，从事服务端开发作为技术道路的起点对长期是很有利的。

一直以来很多人对于 C++后端要学习哪些内容，不是很清楚。C++后台开发不同于 Java 后台开发。

**1.1 C++后台所需要具备的技能**

**1). 软件基础**

*   1.1 数据结构与算法(磁盘存储链式的 B 树与 B+树, 海最数据去重的 Hash 与 BloomFilter, bitmap)
    
*   1.2 设计模式(创建型模式, 结构型模式, 行为型模式)
    
*   1.3 C++新特性(stl 容器,智能指针，正则表达式, 新特性的线程, 协程, 原子操作, lamda 表达式)
    
*   1.4 Linux 工程管理(Makefile/cmake/configure, 分布式版本控制 git, Linux 系统运行时参数命令)
    

**2**)**. 高性能网络设计专栏**

*   2.1 网络编程(网络 io 与 select，poll。epoll, reactor 的原理与实现, http/https 服务器的实现, websocket 协议与服务器实现)
    
*   2.2 网络原理(服务器百万并发实现, redis，memcached,nginx 网络组件, Posix API 与网络协议栈, UDP 的可靠传输协议 QUIC)
    
*   2.3 自研框架:协程框架 NtyCo 的实现(协程设计原理与汇编实现, 协程调度器实现与性能测试)
    
*   2.4 自研框架:用户态协议栈 NtyTcp 的实现(用户态协议栈设计实现, tcp/ip 定时器与滑动窗口, 手把手设计实现 epoll)
    

**3**)**. 基础组件设计专栏**

*   3.1 池式组件(手写线程池与性能分析, 内存池的实现与场景分析, 异步请求池的实现, mysql 连接池的实现)
    
*   3.2 高性能组件(原子操作 CAS 与锁实现, 无锁消息队列实现, 定时器方案红黑树，时间轮,最小堆, 手写死锁检测组件, 手写内存泄漏检测组件, 手把手实现分布式锁)
    
*   3.3 开源组件(libevent/libev 框架实战的那些坑, 异步日志方案 1og4cpp, 应用层协议设计 ProtoBuf/Thrift)
    

**4**)**. 中间件开发专栏**

*   4.1 MySQL(SQL 语句，索引，视图,存储过程，触发器, MySQL 索引原理以及 SQL 优化, MySQL 事务原理分析, MySQL 缓存策略)
    
*   4.2 TiDB(TiDB 存储引擎的原理, TiDB 集群方案与 Replication 原理)
    
*   4.3 Redis(Redis 相关命令详解及其原理, Red is 协议与异步方式, 存储原理与数据模型, 主从同步与对象模型)
    
*   4.4 RocksDB(不一样的 kv 存储 RocksDB 的使用场景, RocksDB 的特殊操作)
    
*   4.5 Nginx(Nginx 反向代理与系统参数配置 conf 原理, Nginx 过滤器模块实现, Nginx Handler 模块实现)
    
*   4.5 MongoDB(接口编程与文档操作, 集群方案与持久化备份)
    

**5**)**. 开源框架专栏**

*   5.1 skynet(Skynet 设计原理, skynet 网络层封装以及 lua/c 接口编程, skynet 重要组件以及手撕游戏项目)
    
*   5.2 TARS(TARS RPC 服务模型原理, TARS 公共框架服务与数据库, 数据监控与服务性能压测)
    
*   5.3 DPDK(DPDK 环境与 testpmd/l3fwd/skeletion, DPDK 的用户态协议栈, 千万级流量并发的 dns 处理, 高性能数据处理框架 vpp, DPDK 的虚拟交换机框架 0vS)
    

**6**)**. Rust 项目专栏**

*   6.1 Rust 特性精讲(Rust Slice 类型与泛型, Rust 文件操作与错误处理, Rust 并发编程与智能指针)
    
*   6.2 组件实现(网卡速度监控, OAuth2 第三方登陆)
    
*   6.3 第三方库(Rust 异步框架 tokio, Rust web 框架 Warp, Rust http 库 hyper)
    

**7**)**．性能分析专栏**

*   7.1 测试框架 gtest 以及内存泄漏检测(函数检测以及类测试,test fixture 测试夹具,类型参数化,事件测试,内存泄漏)
    
*   7.2 火焰图的生成原理与构建方式(火焰图使用场景与原理,nginx 动态火焰图,MySQL 火焰图,Redis 火焰图)
    

**8**)**. 分布式架构专栏**

*   8.1 分布式消息队列(Kafka 使用场景与设计原理, Kafka 存储机制)
    
*   8.2 分布式服务(远程调用 brpc, 注册服务中心 Etcd)
    
*   8.3 分布式 API 网关(Kong 动态负载均衡与服务发现, Kong 实时监控与 REST API)
    
*   8.4 分布式存储与容器(内核级支持的分布式存储 Ceph, 服务容器化 Docker)
    

**9**)**. 上线项目实战**

*   9.1 图床共享云存储(fastdfs 架构分析和配置, fastdfs 存储原理，分布式 fastdfs 存储集群部署, 高负载 nginx/fastcgi, 文件传输和接口设计, 产品上云公网发布/测试用例)
    
*   9.2 微服务即时通讯(IM 即时通讯项目框架分析和部署, IM 消息服务器/文件传输服务器, 消息服务器/路由服务器, 数据库代理服务器设计, 文件服务器和 docker 部署, 产品上云公网发布/公网测试上线)
    

**1.2 C++后台视频学习资料**

*   [千万级并发的难点有哪些? dpdk为我们解决了哪些核心问题?](https://github.com/0voice/backend_video#nav_1_middleware_development_160)  
    
*   [千万级并发网关组件，Nginx源码实现的细枝末节](https://github.com/0voice/backend_video#nav_1_middleware_development_161)  
    
*   [红黑树在linux内核中的3种场景(红黑树证明，进程管理cfs，内存管理](https://github.com/0voice/backend_video#nav_1_middleware_development_149)  
    
*   [如何来解决C10M，用户态协议栈是唯─方案吗](https://github.com/0voice/backend_video#nav_1_middleware_development_164)  
    
*   [什么技术水平，才能进腾讯T9(原T3.1)offer?](https://github.com/0voice/backend_video#nav_1_middleware_development_166)  
    
*   [手把手带你实现一个Linux内核文件系统](https://github.com/0voice/backend_video#nav_1_middleware_development_168)  
    
*   [手把手带你实现一个nginx模块，更加深入了解nginx](https://github.com/0voice/backend_video#nav_1_middleware_development_169)  
    
*   [零拷贝的实现用户态协议栈ntytcp](https://github.com/0voice/backend_video#nav_1_middleware_development_154)  
    
*   [微信的程序性能优化一异步帮你解决80%的问题](https://github.com/0voice/backend_video#nav_1_middleware_development_176)  
    

[更多C++后台学习视频​](https://github.com/0voice/backend_video#nav_2)  

**2\. 音视频流媒体**

随着短视频，直播的兴起，5G 的飞速发展，及资费的降低，短视频，直播成为人们生活中必不可少的一部分，有一组数据统计出来的网络视频的网名使用率已经排在即时通讯的后面，达到了 94.1%。

![](https://static001.geekbang.org/infoq/0a/0a486e53d7322f4cf4c609f287f3c998.png)

**2.1 那么 C++音视频主要学习的内容有哪些呢？**

*   音视频基础(FFMPEG 环境搭建,音视频基础)
    
*   FFMPEG 编程(FFMPEG 命令,音视频渲染,FFmpeg API,音视频编码,音视频封装格式,音视频过滤器,播放器开发,ffplay 播放器,ffmpeg 录制转码)
    
*   流媒体(rtmp 流媒体,hls 流媒体,http-flv 流媒体,RTMP/HLS/HTTP-FLV 流媒体服务器,RTSP 流媒体)
    
*   WEBRTC(WebRTC 中级开发,WebRTC 高级开发,Janus 服务器源码)
    

**2.2 音视频流媒体权威资料**

[500+份文章，论文，视频，实践项目，开源框架，协议](https://github.com/0voice/audio_video_streaming#nav_1)。

**2.3 音视频视频学习资料**

*   [C/C++程序员黄金方向-音视频开发](https://github.com/0voice/backend_video#nav_2_034)  
    
*   [ijkplayer设计原理分析](https://github.com/0voice/backend_video#nav_2_035)  
    
*   [rtmp2webrtc提出问题-灵魂拷问](https://github.com/0voice/backend_video#nav_2_036)  
    
*   [SRS4.0与WebRTC一对一音视频通话](https://github.com/0voice/backend_video#nav_2_038)  
    
*   [srs-webrtc-janus流媒体服务器分析](https://github.com/0voice/backend_video#nav_2_039)  
    
*   [聊聊音视频直播─定会遇到的各种坑](https://github.com/0voice/backend_video#nav_2_045)  
    
*   [论音视频开发35岁后是否有职业危机](https://github.com/0voice/backend_video#nav_2_046)  
    
*   [码云最有价值项目-SRS流媒体服务器源码剖析](https://github.com/0voice/backend_video#nav_2_047)  
    
*   [全网最火的音视频成长路线](https://github.com/0voice/backend_video#nav_2_048)  
    
*   [腾讯视频面试题-直播如何做到500ms以下的延迟](https://github.com/0voice/backend_video#nav_2_049)  
    
*   [腾讯音视频面试-RTSP\_RTMP推流的各种坑分析](https://github.com/0voice/backend_video#nav_2_050)  
    
*   [为什么直播领域也要搞WebRTC-srs4.0](https://github.com/0voice/backend_video#nav_2_051)  
    
*   [音视频开发-ffplay.ijikplayer.vlc的播放器设计实现](https://github.com/0voice/backend_video#nav_2_053)  
    
*   [音视频开发如何快速掌握FFmpeg](https://github.com/0voice/backend_video#nav_2_056)  
    
*   [音视频面试必问-RTSP\_RTMP推流的各种坑分析](https://github.com/0voice/backend_video#nav_2_057)  
    
*   [音视频面试必问的直播延迟分析](https://github.com/0voice/backend_video#nav_2_058)  
    
*   [怎么更快速地学习FFmpeg](https://github.com/0voice/backend_video#nav_2_059)  
    
*   [直播技术架构分析-让你的直播秒开](https://github.com/0voice/backend_video#nav_2_060)  
    

[更多音视频学习视频](https://github.com/0voice/backend_video#nav_2)​

**3\. C++应用领域**

防火墙，电脑管家, 工业自动化，大数据, 桌面应用软件等等，特别是工业互联网的发展。

**3.1 C++应用所需要具备的技能**

**1). C++语言**

*   类与对象(C++类设计方法, 构造函数/析构函数, 类成员/嵌套类/局部类, 友元/命名空间)
    
*   派生与继承(运算符重载, 多重继承, 多态性与抽象类)
    
*   C++模板(函数模板, 类模板, 链表类模板)
    

**2). 数据结构和算法**

*   链表(单链表, 双向链表, 循环链表)
    
*   树(树与二叉树, 二叉树遍历, 线索二叉树, 哈夫曼树)
    
*   图(深度优先搜索, 广度优先搜索, 最小生成树, 最短路径算法)
    
*   其他(散列表,栈,队列)
    
*   算法(哈希表查找,插入排序算法,交换排序算法,选择排序算法,并归排序算法,基数排序算法)
    

**3). 设计模式**

*   常用设计模式(策略模式, 适配器模式, 单例模式, 原型模式, 代理模式, 责任链模式, 观察者模式)
    

**4). C++新特性**

*   类型推导, 空指针/强类型枚举, Thread\_local 存储期限, 垃圾回收机制
    
*   Lambda 表达式, 通用智能指针, 关键字：auto/decltype/nullptr/constexpr
    
*   信号量、互斥体和自旋锁
    

**5). Qt 技术**

*   信号与槽/事件系统,Qt 窗口部件/布局管理;应用程序主窗口/开发常用控件,Qt 对象模型与容器类,
    
*   团队化/帮助系统/Qt 插件,Qt 高级绘图,图形/视图/动画,音频播放,文件编程,
    
*   数据库和 XML,TCP/UDP 网络编程,HTTP 网络编程详解,Qt JSON 解析,Qt 样式表,Qt 正则表达式案例
    

**6). 网络技术**

*   网络原理(TCP, UDP, HTTP, Websocket, 邮件系统)
    
*   网络编程(网络 io 与 socket, http/https 接口调用与调试)
    

**7). 大数据存储云盘客户端**

*   云盘架构设计与实现,环境搭建,登录窗口实现,base64 和 md5 技术,注册实现,登录业务流程,读写配置文件,
    
*   Token 技术,云盘主窗口实现,QListWidget 实现切换页,QMenu/QAction 实现菜单栏,服务器获取用户文件信息,
    
*   Http 返回结果封装,QListltem 显示,添加和删除文件信息展示,Http 方式文件上传,定时上传文件,
    
*   滚动条实现,人性化 Ul 效果实现,下载文件,传输记录保存到文件,传输列表显示,
    
*   传输记录共享列表代码封装,取消共享列表中的文件,切换用户逻辑处理转存文件
    

**3.2 C++应用相关视频**

*   [博弈五子棋(人机对战）](https://github.com/0voice/backend_video#nav_4_030)  
    
*   [带你手写《腾讯QQ文件传输功能》](https://github.com/0voice/backend_video#nav_4_031)  
    
*   [计算机系统《硬盘监控软件》](https://github.com/0voice/backend_video#nav_4_035)  
    
*   [教你打造《系统任务管理器》](https://github.com/0voice/backend_video#nav_4_036)  
    
*   [教你亲手开发《加密与解密工具软件》](https://github.com/0voice/backend_video#nav_4_037)  
    
*   [教你亲自开发《聊天室服务器》](https://github.com/0voice/backend_video#nav_4_038)  
    
*   [教你手写360系统垃圾清理工具](https://github.com/0voice/backend_video#nav_4_039)  
    
*   [教你手写游戏中怪兽魔法技能](https://github.com/0voice/backend_video#nav_4_040)  
    
*   [教你用CC++控制游戏角色](https://github.com/0voice/backend_video#nav_4_041)  
    
*   [精讲C++STL标准模板库](https://github.com/0voice/backend_video#nav_4_043)  
    
*   [精通网络编程《socket套接字》技术](https://github.com/0voice/backend_video#nav_4_044)  
    
*   [面试官必考的《算法设计之链表》](https://github.com/0voice/backend_video#nav_4_046)  
    
*   [秒杀电脑系统核心参数(内存与CPU)](https://github.com/0voice/backend_video#nav_4_047)  
    

[更多音视频学习视频​](https://github.com/0voice/backend_video#nav_4)  

**4\. 网络信息安全**

随着互联网发展和 IT 技术的普及，网络和 IT 已经日渐深入到日常生活和工作当中，社会信息化和信息网络化，突破了应用信息在时间和空间上的障碍，使信息的价值不断提高。但是与此同时，网页篡改、计算机病毒、系统非法入侵、数据泄密、网站欺骗、服务瘫痪、漏洞非法利用等信息安全事件时有发生。信息已经成为各企事业单位中重要资源，也是一种重要的“无形财富”，在未来竞争中谁获取信息优势，谁就掌握了竞争的主动权。信息安全已成为影响国家安全、经济发展、社会稳定、个人利害的重大关键问题。

**5\. 数字图像处理**

数字图像处理历史由来已久，数字图像处理在今天是非常热门的技术之一，生活中无处不存在着它的影子，可以说它是一种每时每刻都在改变着人类生活的技术。图像处理的应用领域必然涉及到人类生活和工作的方方面面。例如生物医学工程、通信工程、工业和工程、文化艺术方面、机器人视觉、视频和多媒体系统、科学可视化、电子商务。

**6\. 游戏开发**

游戏开发，现在游戏行业是个非常有前景的朝阳行业，做这个行业的人，目前在我们国家的薪水都是顶级的，而这方面的人才却很稀少。大学里也很少开设这种游戏制作的课程，即便是有，很多老师的水平基本上也就是理论派，没什么干货。主要是运用了 C++编程语言编写游戏脚本，市面上相当多的游戏引擎都是基于 c++开发的。

**7\. AR 和 VR**

虚拟现实仿真，顾名思义它是一种可以创建和体验虚拟世界的计算机仿真系统，它利用计算机生成一种模拟环境，是一种多源信息融合的、交互式的三维动态视景和实体行为的系统仿真使用户沉浸到该环境中。

VR/AR 应用。在河图业务展点，依托华为河图的高精度 3D 地图、高精度空间计算、AI3D 识别、超逼真虚实遮挡融合绘制四大核心技术，通过 5G 网络，消费者可以通过智能手机、AR 眼镜等终端进入虚实融合的数字世界。

现在已经商用的已有 AR 眼镜套餐，VR 虚拟偶像，VR 旅游，AR 家庭锻炼，AR 儿童图书馆等各种成功的应用。

发布于: 2021 年 09 月 02 日阅读数: 592