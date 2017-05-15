#!/bin/bash

read -p "please input user name : " -t 30 name
read -p  "please input the number of users : " -t 30 num
read -p "please input the password of users : " -t 30 pss

if [ ! -z "$name" -a ! -z "$num" -a ! -z "$pass" ]
	then
		y=$(echo $num | sed 's/^[0-9]*$'//g)
			if [ -z "$y" ]
				then
					for (( i = 1; i <= $num; i=i+1 ))
						do
							useradd $name$i &>/dev/null
							echo $pass | passwd --stdin $name$i &>/dev/null

							#statements
						done
			fi
fi