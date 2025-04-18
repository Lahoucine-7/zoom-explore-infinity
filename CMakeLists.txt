cmake_minimum_required(VERSION 3.10.0)
project(zoom-explore-infinity VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Trouver Qt6 (Widgets et OpenGL)
find_package(Qt6 REQUIRED COMPONENTS Widgets OpenGL)

# Ajouter l’exécutable et son code source
add_executable(${PROJECT_NAME}
    src/main.cpp
)

# Lier Qt aux cibles
target_link_libraries(${PROJECT_NAME}
    PRIVATE Qt6::Widgets Qt6::OpenGL
)

# Activer le format de sortie automatique des moc et autres
set_target_properties(${PROJECT_NAME} PROPERTIES
    AUTOMOC ON
    AUTOUIC ON
    AUTORCC ON
)