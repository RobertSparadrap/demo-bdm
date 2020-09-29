#!/bin/bash

if [[ $1 != "" ]]; then
    cd /home/bdm/biodynamo/
    git checkout $1
    git log | awk '/Date/ {print $3, $4, $5, $6}' | awk "NR==1{print;exit}" > ../demo/date.txt
    cd /home/bdm/demo/
    ./compare_date
    if [[ $? == 1 ]]; then
        echo "change branch"
        exit 1
    fi
fi
exit 0