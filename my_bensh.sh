#!/bin/bash

if [[ $1 == "" ]]; then
    echo ./my_bensh [number_of_iteration] [branch/NULL_if_use_branch_master]
    exit
fi

if [[ $2 != "" ]]; then
    cd /home/bdm/biodynamo/
    git checkout $2
    cd build/
    make clean
    cmake ../
    make
    cd
    cd demo
fi

FILES=*
for i in $FILES; do
    if [[ $i != "soma_clustering" && $i != "soma_clustering_2" && $i != "tumor_concept" ]]; then
        continue
    fi
    printf "$i\n\n" >> runtime.txt
    cd $i
    echo -e '\033[1;31m'$i'\033[0m'
    biodynamo build
    for j in `seq 1 $1`;
    do
    ./build/$i --benchmark 2>&1 | awk '/BM_BDM/ {print $2, $3, $4, $5, $6}' >> ../runtime.txt
    done
    printf "###########################################################\n\n" >> ../runtime.txt
    cd ../
done
