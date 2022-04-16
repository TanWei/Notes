Windows桌面端程序开发方案比较
------------------

发表于 2019-10-18 | 分类于 [windows](https://www.psvmc.cn/categories/windows/)

Windows桌面端程序开发方案比较

最近在做Windows桌面程序开发，最初考虑到团队的技术构成(没有.NET开发)，决定用Electron作为解决方案来开发，但是最后因为需要实现应用向其它未处于激活状态的应用发消息的功能无法通过自带的api实现（需要借助node-ffi调用dll解决），所以就对各个方案做对比做最后的决策（其实还是在纠结用C#.net还是Electron，其它的方案并不考虑）。

Windows 下的 GUI 解决方案比较多：

*   基于 [C++](http://c.biancheng.net/cplus/) 的有 [Qt](http://c.biancheng.net/qt/)、MFC、WTL、wxWidgets、DirectUI、Htmlayout；
*   基于 [C#](http://c.biancheng.net/csharp/) 的有 Winform、WPF；
*   基于 [Java](http://c.biancheng.net/java/) 的有 AWT、[Swing](http://c.biancheng.net/swing/)；
*   基于 Pascal 的 有Delphi；
*   基于[Go语言](http://c.biancheng.net/golang/)的有 [walk](https://github.com/lxn/walk)
*   基于Chromium和[Node.js](https://nodejs.org/)的[Electron](https://electronjs.org/)；
*   还有国内初露头角的 [aardio](http://www.aardio.com/)；
*   Visual Basic 曾经很流行，现在逐渐失去了色彩；
*   如果你有 Web 开发经验，也可以基于 Webkit 或 Chromium 将网页转换为桌面程序。

没有哪一种方案能够独霸 Windows，使用比较多的编程语言是 C++、C#、Java。

*   [Duilib+CEF](https://github.com/netease-im/NIM_Duilib_Framework/) 只支持Windows的选择，优点是打包文件小（使用C++） QQ、微信、有道精品课。
*   Qt+CEF 支持跨平台，缺点是打包文件大（使用C++）。
*   WPF/(WPF+CEFSharp) 打包文件小，但是性能相比前两者弱，但比Electron强，内存占用高，只支持Windows。
*   Electron 打包文件大，但是性能弱，内存占用高，支持跨平台。

几种方案都各有利弊，可以根据团队的情况选用，都是相对不错的，其他的方案比如Flutter，Java就不太推荐。

Duilib是一款windows的下界面库，采用skia自绘的方式完成控件的显示，目前是开源状态，类似的控件库还有soui

而Qt则不是界面库那么简单，还包含有数据库，web，com通讯，tcpip通讯等等功能，应该称之为开发框架，并且包含了强大的ui系统。

Qt虽然开源，但是商业需要购买许可，duilib则不需要。

从稳定性上来说qt无疑是最为成熟和稳定的界面开发库，但是程序的运行依赖库较大，需要带上30~40M的qt基础库。

界面实现效果上两则区别不大，都可以实现比较丰富的界面外观，但是duilib的文档和资源较少，对开发人员的要求比较高。

此外如果涉及跨平台开发的话，duilib则无法胜任，只能支持windows下界面开发。

Qt自带的控件样式比较简单，可以通过qss进行控件美化，但是效果比较简单，这里可以尝试使用qt-ui界面库进行样式扩展，实现更加丰富的界面效果。

Qt-UI 是对qt控件的一种扩展，支持所有原生qt控件的接口和文档，可以帮助qt界面开发人员实现高质量的软件界面。

常见的应用

*   Skype：一个使用人数众多的基于P2P的VOIP聊天软件
*   SMPlayer：跨平台多媒体播放器
*   Google地球（Google Earth）：三维虚拟地图软件
*   Autodesk Maya, 3D建模和动画软件
*   VirtualBox：虚拟机软件
*   YY语音
*   咪咕音乐
*   WPS Office

用 Qt 来开发 Windows 桌面程序有以下优点：

*   简单易学：Qt 封装的很好，几行代码就可以开发出一个简单的客户端，不需要了解 Windows API。
*   资料丰富：资料丰富能够成倍降低学习成本，否则你只能去看源码，关于 DirectUI、Htmlayout、aardio 的资料就很少。
*   漂亮的界面：Qt 很容易做出漂亮的界面和炫酷的动画，而 MFC、WTL、wxWidgets 比较麻烦。
*   独立安装：Qt 程序最终会编译为本地代码，不需要其他库的支撑，而 Java 要安装虚拟机，C# 要安装 .NET Framework。
*   跨平台：如果你的程序需要运行在多个平台下，同时又希望降低开发成本，Qt 几乎是必备的。

[![](http://image.psvmc.cn/blog/20200813112012.png!github)
](http://image.psvmc.cn/blog/20200813112012.png!github)

注意上图中

*   `.NET桌面开发`支持WinForm和WPF开发
*   `通用Windoes平台开发`支持UWP开发

请根据自身的需求安装

[](#Winform和WPF "Winform和WPF")Winform和WPF
-----------------------------------------

WPF，即**windows presentation foundation**，windows呈现基础，属于**.net framework3.0**，是微软推出取代Winform的产品，能做到分离界面设计人员与开发人员的工作，提供多媒体交互用户图形界面，三大核心程序集是**presentationcore**、**presentationFramework**、**windowsBase**。

WPF和Winform最大的区别在于WPF底层使用的DirectX，Winform底层使用的是GDI+,所以WPF的图形界面上更胜一筹

*   GDI+(Graphics Device Interface)图形设备接口，它的主要任务是负责绘图程序之间的信息交换、处理，所有windows程序的图形输出
    
*   DirectX(Direct Extension)多媒体编程接口，加强3D图形和声音效果，有很多API组成。
    
    按照性质分类可分为四大部分：显示部分，声音部分，输入部分和网络部分
    

[](#WPF和UWP "WPF和UWP")WPF和UWP
-----------------------------

**Universal Windows Platform (UWP)** 和 **Windows Presentation Foundation (WPF)** 是不相同的，虽然都可以做界面和桌面开发，但是 UWP 是一个新的 UI 框架，而且 UWP 是支持很多平台，至少比 WPF 多。

> UWP要求系统为WIn10

那么 UWP 可以使用什么写？

*   xaml 的 UI 和 C#、VB 写的后台
*   xaml 的 UI 和 C++ Native 写的后台
*   DirectX 的 UI 和 C++ Native 写的后台
*   JavaScript 和 HTML

那么网上怎么好多小伙伴说 UWP 的性能比 WPF 好？

因为 UWP 的渲染使用的是 [DirectComposition](https://msdn.microsoft.com/zh-cn/library/windows/desktop/hh437376.aspx) 而 WPF 使用的 Desktop Window

虽然 WPF 渲染是通过 Dx9 但是最后显示出来是需要 `Desktop Window Manager(DWM)`。

UWP 使用 `dot net core` 编译出来的是 Native 本地代码，

WPF 使用 `dot net Framework` 编译出来是 IL 代码，需要知道 编译出来 Native 代码的性能是 80% C++非托管。所以代码运行会快很多。

这时不要说 IL 可以针对每个 CPU 做优化，因为 dot net core 编译的代码就是对不同的 CPU 做优化

WPF 呢？

他可以使用 xaml 做的前台，C#、VB、F#、C++写的后台。

[](#怎么选择 "怎么选择")怎么选择
--------------------

WinForm和WPF之间肯定选择WPF，更灵活，所以我们要抉择的是选择的是WPF还是UWP？

> WPF是基于多窗口的，UWP是基于但窗口多Page的，这就决定了两者的开发跳转思想是不一致的，UWP就好似移动端开发一样，页面的跳转是基于导航的，所以只要应用有多窗口的需求就不要考虑UWP了。
> 
> 如果应用只考虑支持Win10，并且所有的功能都能通过内部跳转，类似于WEB应用或手机应用的交互，那么用UWP才是理想的选择，启动快，占用内存小

> 一句话结论:现阶段还是用**.NET Framework** 以后**.NET Core**是趋势
> 
> 第三方库大部分都有`.NET Framework`版本的，不一定有`.NET Core`版本的

.NET 生态有三个主要的高级别组件 - .NET Framework, .NET Core, 和 Xamarin。

**Xamarin**

毋庸置疑，当你想通过 C# 来构建移动应用（IOS，Android 和 Windows Mobile），Xamarin 是你唯一的选择。

**.NET Framework**

支持 Windows 和 Web 应用。

可以使用 Windows Forms、WPF、和 UWP 来构建Windows 应用程序

ASP.NET MVC 的 Web 应用。

**.NET Core**

是最新的开源跨平台框架，用于构建包括 Windows, Mac 和 Linux 操作系统在内的应用程序。

.NET Core 支持 Windows Forms、 WPF、UWP和 ASP.NET Core。

UWP用于构建 Windows10 目标Windows和移动应用程序。

ASP.NET Core用于构建基于浏览器的 Web 应用程序。

[](#NET-Framework-的优点 ".NET Framework 的优点").NET Framework 的优点
-------------------------------------------------------------

*   如果你是一位传统的 .NET 开发者，希望快速构建和发布应用，没有时间学习.NET Core，那么 .NET Framework 对你来说是一个不错的选择，.NET Core 可能会有一些学习曲线。
*   如果你目前主要是维护和更新现有 .NET 应用程序，那么 .NET Framework 是你一个不错的选择。将现有 .NET 程序移植到 .NET Core 上可能还是需要一些工作。
*   找工作？ 您现在可能在.NET Core 中找不到太多工作。

这就是 .NET Framework 的现状。当前版本的.NET Framework 4.8 应该是.NET Framework的最新版本。 将来不会再计划新版本的.NET Framework。

[](#NET-Core-的优点 ".NET Core 的优点").NET Core 的优点
----------------------------------------------

*   微软已经宣布了 .NET Core v 3.0 ，这是一个有非常多改进的 .NET Core 版本，如果你想学习和使用里面的新特性，那么.NET Core 是值得尝试的。
*   .NET Core 3.0 目前支持 WPF 和 Windows Forms，.NET Core 3.0 同样也支持在 UWP, WPF 和 Windows Forms 之间进行混合开发。这将使得开发者能够更灵活地将 UWP 中一些更现代化的接口引入到 WPF 和 Windows Forms 中。
*   如果你正在构建新的应用程序，并且你的公司支持使用 .NET Core，那么 .NET Core 是一个不错的选择，总之 .NET Core 会越来越好的。
*   .NET Core 更适合跨平台的需求， .NET Core 的应用程序支持在 Windows, Linux, and macOS 运行。微软广受好评的开源代码编辑器 Visual Studio Code 支持 Linux 和 macOS，同时它也支持更加现代化的编辑需求，如 智能感知\[`IntelliSense`\] 和 调试\[`debugging`\]，大多数其它第三方的编辑器，如 Sublime, Emacs, 和 VI 同样支持 .NET Core。
*   微服务架构同样在 .NET Core 中适用，它可以和不同平台的服务共同工作。包括通过 .NET Framework, Java, Ruby 等语言开发的。在容器化大行其道的今天，.NET Core 的模块化、轻量级以及它的灵活性使得它能很容易地部署到容器中，容器可以部署到任何平台，如 云上、Linux 和 Windows 上。 .NET Core 适用于 Docker 和 Azure Kubernetes 服务。

对C++开发不熟 所以C++的方案就不考虑了

Java并不适合桌面开发，其它的语言没用过也暂不考虑

C#的Winform、WPF要想操作其它程序也需要调用DLL 和 用Electron区别不大，所以还是用Electron来搞了

下一篇再来介绍Electron调用DLL的方式

> 补充：Electron在Canvas绘制时性能达不到要求，多窗口的情况下内存占用高，考虑性能和安装包大小的前提下还是建议WPF开发。