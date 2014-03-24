# first CMake file - step2

# Require minimum version
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.8)

#Project Name
project(cmakeGuide)

# 하기와 같은 역활을 하는 Makefile
# gcc -c src/helloworld.c src/main.c -i./header
# gcc -o chapter1 main.o helloworld.o

# src Folder안에 있는 CMakeList.txt를 실행 시킨다.
add_subdirectory(src)

#build 라는 폴더를 만든 후 들어가서 cmake ../ 를 실행산다.
#그 후 make를 치면 빌드 완료 

