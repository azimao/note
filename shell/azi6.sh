#!/bin/bash
# Author : maoyu
# gt 代表 ＞
s=0
i=1

until [ $i -gt 100 ]
	do
		s=$(( $s+$i))
		i=$(( $i+1 ))
	done
echo "the sum is : $s"