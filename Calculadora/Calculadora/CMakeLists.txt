﻿# CMakeList.txt: projeto de CMake para Calculadora, incluir origem e definir
# lógica específica a um projeto aqui.
#

# Adicione a origem ao executável deste projeto.
add_executable (Calculadora "Calculadora.cpp" "Calculadora.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Calculadora PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.
