# CMakeList.txt: проект CMake для FirstSFMLEngine; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("FirstSFMLEngine")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (FirstSFMLEngine "FirstSFMLEngine.cpp"  "Player.h" "Player.cpp" "Engine.h" "Engine.cpp")
target_link_libraries(FirstSFMLEngine ${CMAKE_SOURCE_DIR}/library/sfml-graphics-d.lib) 
target_link_libraries(FirstSFMLEngine ${CMAKE_SOURCE_DIR}/library/sfml-audio-d.lib) 
target_link_libraries(FirstSFMLEngine ${CMAKE_SOURCE_DIR}/library/sfml-network-d.lib) 
target_link_libraries(FirstSFMLEngine ${CMAKE_SOURCE_DIR}/library/sfml-system-d.lib) 
target_link_libraries(FirstSFMLEngine ${CMAKE_SOURCE_DIR}/library/sfml-window-d.lib) 
target_link_libraries(FirstSFMLEngine ${CMAKE_SOURCE_DIR}/library/openal32.lib)


include_directories(${CMAKE_SOURCE_DIR}/include)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
set_property(TARGET FirstSFMLEngine PROPERTY CXX_STANDARD 17)
set_property(TARGET FirstSFMLEngine PROPERTY CXX_STANDARD_REQUIRED on)