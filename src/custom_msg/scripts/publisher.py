#!/usr/bin/python3

import rospy
import std_msgs
from custom_msg.msg import *
from datetime import datetime

i=0

class publisher:

	def __init__(self, topic,rate):
		print("Initializing Node")
		rospy.init_node("pub_node")
		self.pub1 = rospy.Publisher(topic+str(i+1),status,queue_size=10)
		self.pub2 = rospy.Publisher(topic+str(i+2),count,queue_size=10)
		self.pub3 = rospy.Publisher(topic+str(i+3),matrix,queue_size=10)
		period = rospy.Duration(rate)
		self.timer = rospy.Timer(period,self.timerCallback)
		self.msg1 = status('status',datetime.now())
		self.msg2 = count('count',1)
		self.msg3 = matrix('matrix',[1,2,3,4])

	def timerCallback(self, event):
		print("Publishing a status message: ", self.msg1.status)
		self.pub1.publish(self.msg1)
		print("Publishing a count message: ", self.msg2.count)
		self.pub2.publish(self.msg2)
		print("Publishing a matrix message: ", self.msg3.data)
		self.pub3.publish(self.msg3)
		rospy.spin()

if __name__ == '__main__':
    
	p = publisher("cust_msg_topic",1)
	rospy.spin()
