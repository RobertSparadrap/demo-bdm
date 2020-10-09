#!/bin/bash

#source /home/bdm/biodynamo/build/bin/thisbdm.sh
# if [[ $1 == "" ]]; then
#     echo ./my_bensh [number_of_iteration] [branch/NULL_if_use_branch_master]
#     exit
# fi

# if [[ $2 != "" ]]; then
#     cd /home/bdm/biodynamo/
#     git checkout $2
# #    git log | awk '/Date/ {print $3, $4, $5, $6}' | awk "NR==1{print;exit}" > ../demo/date.txt
#     cd build/
#     make clean
#     cmake ../
#     make
#     cd
#     cd demo
# #    if [[ compare_date == 1 ]]; then
# #    if [[ $2 == "b4871f1b8321daf6c73dfe1a70cd6b0e00bdb05e" ]]; then
# #        echo "change branche"
# #        git checkout old-soma_clustering
# #    fi
# fi

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
