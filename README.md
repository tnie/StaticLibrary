静态库项目：lib1、lib2
可执行程序：main

lib2 使用了 lib1 的头文件，但未打包 lib1 的静态库。—— 打包静态库时，只需要声明，不需要实现的吗？—— 是的呀
所以，编译 main 需要同时给出 lib1、lib2 两者的静态库！

# 一起打包

当然，我们也可以将 lib1 静态库打包进 lib2 静态库。这样的话，编译 main 就只需要 lib2 静态库就可以了。

# 菱形依赖，“基石”跨版本

“基石”跨版本，等价于相同接口，不同实现。

```cpp
#pragma comment(lib, "../Debug/lib1.lib")
#pragma comment(lib, "../Debug/lib2.lib")
int main()
{
    cout << add("niel ", "lov") << endl;	// lib2
    cout << append("niel ", "lov") << endl;
}
```

试验现象：引用链接库的顺序会直接影响输出结果（需要**清理项目，重新生成**才能看到结果变化，因为改变预处理指令 `#pragma comment` 顺序不会重新链接）

```console
# 首先链接 lib1.lib
[used by main]niel lov
[used by main]niel lov
```

```console
# 首先链接 lib2.lib
Version 0.1[ used by lib2]: niel lov
Version 0.1[ used by lib2]: niel lov
```

不会出现代码暗示的下述输出
```console
Version 0.1[ used by lib2]: niel lov
[used by main]niel lov
```

试验 demo 非常简单，不保证在复杂的编译环境中能够复现上述现象。