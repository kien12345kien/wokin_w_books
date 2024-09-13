#!/bin/bash

in_path()
{
	cmd=$1	ourpath=$2	result=1
	oldIfs=$IFS	IFS=":"

	for directory in "$ourpath"
	do
		if [ -x $directory/$cmd ] ;then
			result=0
		fi
	done
	IFS-$oldIFS
	return $result
}

checkForCmdInPath(){
	var=$1

	if ["$var" != ""]; then
		if["${var:0:1}" = "/" ]; then
			if[! -x $var ]; then
				return1
			fi
		elif ! inpath$var "$PATH"; then
			return 2
		fi
	fi
}
