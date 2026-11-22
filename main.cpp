// hello Gzhu —— 云计算课程实验一：Git / GitHub 完整流程练习
#include <iostream>
#include <string>

// 输出问候语：在 hello Gzhu 后面追加一串数字，默认 123456789
void greet(const std::string& digits) {
    std::cout << "hello Gzhu " << digits << std::endl;
}

int main(int argc, char* argv[]) {
    const std::string digits = (argc > 1) ? argv[1] : "123456789";
    greet(digits);
    return 0;
}
