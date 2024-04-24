# CMakeList.txt: projeto de CMake para CreatesFiles, incluir origem e definir
# lógica específica a um projeto aqui.
#

# Adicione a origem ao executável deste projeto.
add_executable (CreatesFiles "CreatesFiles.cpp" "CreatesFiles.h" "Inicio.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CreatesFiles PROPERTY CXX_STANDARD 20)
endif()

# TODO: Adicione testes e instale destinos, se necessário.
