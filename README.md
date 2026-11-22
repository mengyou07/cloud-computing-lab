# cloud-computing-lab

云计算课程实验仓库：练习 Git / GitHub 的基本操作，并保存一个可以持续迭代的小程序。

## 关于我

- 姓名：hefeiyang
- 专业：计算机相关专业
- 方向：云计算与虚拟化、Linux 运维
- 常用语言：C++、Python、Java
- 正在学：Git 版本管理、Docker、Kubernetes

## 项目简介：hello Gzhu

`main.cpp` 是一个最小的 C++ 程序，在终端输出 `hello Gzhu` 并在后面追加一串数字。
程序本身很简单，用途是检查本机的 g++ 编译环境，并配合练习
「修改代码 → 提交 → 推送」的完整开发流程。

## 编译与运行

```bash
g++ -std=c++17 -Wall -Wextra main.cpp -o main.exe
./main.exe
```

输出：

```text
hello Gzhu 123456789
```

## 参数说明

| 参数 | 含义 | 默认值 |
| --- | --- | --- |
| `digits`（可选） | 追加在 `hello Gzhu` 后面的数字串 | `123456789` |

带参数运行时，输出会换成你指定的数字：

```text
> ./main.exe 2026
hello Gzhu 2026
```

## 修改记录

| 版本 | 变更 |
| --- | --- |
| v1 | 输出 `hello Gzhu` |
| v2 | 把输出封装成 `greet()`，并在问候语后追加数字，支持命令行参数覆盖 |

## 目录结构

```text
cloud-computing-lab/
├── main.cpp         # 示例程序
├── README.md        # 仓库说明
└── docs/            # 实验报告与截图（仅本地保留，不提交）
```

## 实验任务

1. 在 GitHub 创建 `cloud-computing-lab` 仓库
2. 添加 README、程序文件，推送到 GitHub
3. 完成一次完整开发流程：修改代码 → 提交 → 推送 → 截图提交记录
4. 撰写实验报告，记录问题与心得
