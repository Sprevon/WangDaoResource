cmake_minimum_required(VERSION 3.25)
project(WangDao C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 14)

add_executable(ch01_notes "C Language/ch02/notes.c" )
add_executable(ch01_exercise "C Language/ch02/exercise.c" )
add_executable(ch02_notes "C Language/ch03/notes.c")
add_executable(ch02_exercise "C Language/ch03/exercise.c")
add_executable(ch05_notes "C Language/ch05/notes.c")
add_executable(ch05_text "C Language/ch05/test.c")

add_executable(ch06_notes "C Language/ch06/notes.c")
add_executable(ch06_exercise "C Language/ch06/execrise.c")

add_executable(ch07_notes "C Language/ch07/notes.c")

add_executable(ch08_notes "C Language/ch08/notes.c")
add_executable(ch08_notes2 "C Language/ch08/notes2.cpp")
add_executable(ch08_exercise "C Language/ch08/execrise.cpp")
add_executable(ch08_exercise2 "C Language/ch08/exercise2.cpp")

add_executable(ch10_exercise "C Language/ch10/exercise.cpp")

add_executable(ch11_exercise "C Language/ch11/exercise.cpp")

add_executable(ch12_exercise "C Language/ch12/exercise.cpp")

add_executable(ch13_exercise "C Language/ch13/exercise.cpp")

add_executable(ch14_1 "C Language/ch14/exercise.cpp" "C Language/ch14/function.h")

add_executable(ch15 "C Language/ch15/exercise.cpp")
add_executable(oj "C Language/ch15/oj1.cpp")

add_executable(ch16 "C Language/ch16/exercise.cpp")

add_executable(ch17 "C Language/ch17/exercise.cpp")
add_executable(ch17_2 "C Language/ch17/exercise2.cpp")

add_executable(ch19_notes "C Language/ch19/notes.cpp")

add_executable(ch20_notes "C Language/ch20/notes.cpp")

add_executable(2-fwrite-int "code/23/23.4/2-fwrite-int/main.c")

add_executable(lc240314 "LeetCode/lc240314.cpp")


add_executable(dp "hello_algo/dynamic_programming.cpp")

add_subdirectory(LeetCode)

add_subdirectory(textbook_problems)
