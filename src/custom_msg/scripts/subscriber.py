#!/usr/bin/python3

import rospy
from std_msgs.msg import String
from custom_msg.msg import *

i=0
class subscriber:


	def __init__(self, topic):
		rospy.init_node("sub_node")
		self.sub1 = rospy.Subscriber(topic+str(i+1),status,self.callback1)
		self.sub2 = rospy.Subscriber(topic+str(i+2),count,self.callback2)
		self.sub3 = rospy.Subscriber(topic+str(i+3),matrix,self.callback3)

	def callback1(self,msg):
		print(msg)
	def callback2(self,msg):
		print(msg)
	def callback3(self,msg):
		print(msg)



if __name__ == '__main__':
	s=subscriber("cust_msg_topic")
	rospy.spin()
	
