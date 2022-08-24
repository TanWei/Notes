powershell 以管理员身份执行命令

get-appxpackage microsoft.win*app*run* | Remove-AppxPackage  
wsreset

get-appxpackage -AllUsers micro*win*appruntime* | remove-appxpackage -AllUsers  我到这就执行成功了


get-appxpackage *appruntime* // 查看一下占用

//==================================================================================================================

Note：
1. 在关闭 【小米妙享】的状态下使用管理员权限安装（用power shell可以更直观看到安装结果），否则会因【小米妙享】占用旧包导致安装失败
2. 倘如安装失败，执行get-appxpackage -AllUsers micro*win*appruntime* | remove-appxpackage -AllUsers，然后重新安装
