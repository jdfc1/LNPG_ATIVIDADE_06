#!/bin/bash

# Verificando se um argumento foi passado
if [ $# -eq 0 ]; then
  dialog --msgbox 'Por favor, forneça um nome como argumento.' 5 50
  clear
  exit 1
fi

name2="programa"

# Realiza alguma ação com o arquivo (imprimir neste caso)
ghc -o $name2 $1
./$name2

# 1 deixa mais rápido a compilação e execução, 
# 2 exclui automaticamente, não perde tempo.