#!/bin/env bash

# Colocar o nome do script como flag e setar o diretório do script no comando cd abaixo

if [[ -n $1 ]]; then
    A=$1
else
    echo "no C++ script to run was defined"
    exit 0
fi

cd ~/Desktop/VScode/C++/scripts/ # Colocar o caminho do diretório do script

g++ -o Executable $A
chmod +x ./Executable
./Executable
rm Executable

# roda um script de c++, ao exportá-lo para executável, executá-lo e deletar o executável
# gcc deve estar instalado e no path enviroment
