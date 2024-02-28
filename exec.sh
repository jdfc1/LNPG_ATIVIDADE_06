#!/bin/bash

# Verificando se um argumento foi passado
if [ $# -eq 0 ]; then
  echo "Por favor, forneça um nome de arquivo como argumento."
  exit 1
fi

name2="my_prog"

# Realiza alguma ação com o arquivo (imprimir neste caso)
gcc $1 -o $name2 -lm
./$name2
rm $name2

# 1 deixa mais rápido a compilação e execução, 
# 2 exclui automaticamente, não perde tempo.