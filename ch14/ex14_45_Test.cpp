#include "./header/Sales_data.cpp"

int main(void)
{
    Sales_data cp5("C++ Primer 5th", 4, 106.5);
    std::cout << cp5 << std::endl;
    std::cout << static_cast<std::string>(cp5) << std::endl;
    std::cout << static_cast<double>(cp5) << std::endl;

    return 0;
}