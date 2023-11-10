#!/usr/bin/env python3

import rclpy
from peter_core.test_module import TestNode

def main(args=None):
    rclpy.init(args=args)
    node = TestNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == "__main__":
    main()