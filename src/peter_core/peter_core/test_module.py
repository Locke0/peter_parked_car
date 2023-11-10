#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

class TestNode(Node):
    def __init__(self):
        super().__init__("test_py_node")
        self.get_logger().info("TEST_PYTHON")
