from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='13524106_Shopee',
            executable='talker',
            name='publisher_node'
        ),
        Node(
            package='13524106_Shopee',
            executable='listener',
            name='subscriber_node'
        )
    ])
