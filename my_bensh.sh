#!/bin/bash

FILES=*
for i in $FILES; do
    if [[ $i == "my_bensh.sh" || $i == "makefile_project" || $i == "sbml_integration" || $i == "runtime.txt" || $i == "graph.py" ]]; then
        continue
    fi
    printf "$i\n\n" >> runtime.txt
    cd $i
    echo -e '\033[1;31m'$i'\033[0m'
    biodynamo build
    for j in `seq 1 8`;
    do
    ./build/$i --benchmark 2>&1 | awk '/BM_BDM/ {print $2, $3, $4, $5, $6}' >> ../runtime.txt
    done
    printf "###########################################################\n\n" >> ../runtime.txt
    cd ../
done