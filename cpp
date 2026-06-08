#!/bin/env bash
if [[ -n $1 ]]; then
    A=$1
else
    echo "no script to run was defined"
    exit 0
fi
B=Executable
cd ~/Desktop/VScoding/C++_scripts/scripts/
g++ -o $B $A
chmod +x $B
$B
rm $B
# OBS: Pra rodar isso, o script precisa tar no path do pc ou ent tem q colocar o caminho pro script