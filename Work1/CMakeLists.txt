# CMakeList.txt: проект CMake для Work1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Work1 "Work1.cpp" "Work1.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Work1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
