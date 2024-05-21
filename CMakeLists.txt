cmake_minimum_required(VERSION 3.5)  # Указываем минимальную версию CMake, необходимую для сборки проекта.
set(CMAKE_CXX_STANDARD 17)  # Устанавливаем стандарт C++ 17.

project(TimeExceptionPattern)  # Задаем название проекта.

option(BUILD_DEMO "Build demo" ON)     # Опция для сборки демо. По умолчанию включена.

add_executable(TimeExceptionPattern timeexception/TimeException.cpp
                                    timeexception/TimeException.cpp
                                    timeexception/OutOfRangeException.cpp
                                    timeexception/OutOfRangeException.cpp)  # Создаем исполняемый файл.

if(BUILD_DEMO)
  add_executable(TimeExceptionPatternDemo demo/main.cpp) # Получаем исходные демо тестов.
endif()
