import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/kawai/programming-sandbox/ros2_tutorial/install/my_package'
