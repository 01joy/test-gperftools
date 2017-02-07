# TestGperftools

1. 安装gperftools
```
sudo apt-get install google-perftools graphviz
```
2. 下载本项目代码
3. 编译本项目，项目根目录执行
```
make
```
4. 进入build文件夹，设置libcomplex.so动态链接库路径为当前路径
```
export LD_LIBRARY_PATH=.
```
5. 执行程序并进行性能分析
```
LD_PRELOAD=/usr/lib/libprofiler.so.0 CPUPROFILE=./main.prof ./main
```
6. 查看性能分析结果
```
google-pprof --web ./main ./main.prof
``` 