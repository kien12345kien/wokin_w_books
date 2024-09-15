#!/bin/bash

in_path() {
        cmd=$1  
        ourpath=$2      
        result=1
        oldIFS=$IFS     # Save old IFS value
        IFS=":"         # Set IFS to colon (used in PATH)

        for directory in $ourpath  # Iterate through directories in $ourpath
        do
                if [ -x "$directory/$cmd" ]; then  # Check if cmd is executable in directory
                        result=0
                        break                      # Exit loop once found
                fi
        done

        IFS=$oldIFS  # Restore old IFS value
        return $result
}

checkForCmdInPath() {
        var=$1

        if [ "$var" != "" ]; then  # Ensure $var is not empty
                if [ "${var:0:1}" = "/" ]; then  # Check if it's an absolute path
                        if [ ! -x "$var" ]; then  # Check if $var is executable
                                return 1
                        fi
                elif ! in_path "$var" "$PATH"; then  # Check if $var is in $PATH
                        return 2
                fi
        fi
}

