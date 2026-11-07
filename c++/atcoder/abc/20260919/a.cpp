#include <iostream>

int main(void)
{
    std::string S = "";
    std::string T = "";
    // std::cout << "文字列を入力してください: ";
    std::cin >> S;

    if (S[S.size() - 1] == 'e') {
        T = S + 'r';
        // std::cout << "末尾がeでした。" << std::endl;
    }
    else {
        T = S + "er";
        // std::cout << "末尾がeではありませんでした。" << std::endl;
    }

    std::cout << T << std::endl;
    return 0;
}