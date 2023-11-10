#include "rclcpp/rclcpp.hpp"
#include "peter_core/cpp_header.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<TestCppNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}