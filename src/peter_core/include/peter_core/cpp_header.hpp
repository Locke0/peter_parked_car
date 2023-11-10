#include "rclcpp/rclcpp.hpp"

class TestCppNode : public rclcpp::Node
{
    public:
        TestCppNode(): Node("my_node") {
            RCLCPP_INFO(this->get_logger(), "TEST Cpp node");
        }
    private:

};