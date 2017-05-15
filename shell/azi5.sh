#!/bin/bash
#Author:maoyu
#  le 代表≤   lt代表＜
s=0
i=i
while [ $i -le 100 ]
	do
		s=$(( $s+$i ))
		i=$(( $i+1 ))
	done
echo "the sum is : $s"