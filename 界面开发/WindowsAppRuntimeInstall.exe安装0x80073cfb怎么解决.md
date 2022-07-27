powershell 以管理员身份执行命令

get-appxpackage microsoft.win*app*run* | Remove-AppxPackage  
wsreset

get-appxpackage -AllUsers micro*win*appruntime* | remove-appxpackage -AllUsers  我到这就执行成功了


get-appxpackage *appruntime* // 查看一下占用