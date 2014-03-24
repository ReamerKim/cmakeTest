# first CMake file

# Require minimum version
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.8)

#Project Name
project(cmakeGuide)

# 하기와 같은 역활을 하는 Makefile
# gcc -c src/helloworld.c src/main.c -i./header
# gcc -o chapter1 main.o helloworld.o

# header folder를 include 한다.
INCLUDE_DIRECTORIES(header)

#test.a라는 static library를 만든다.
ADD_LIBRARY(test STATIC src/helloworld.c)

#main.c이 실행 파일이라는 것을 알린다.
add_executable(chapter1 src/main.c)

#chapter1에 test.a library를 링킹한다.
target_link_libraries(chapter1 test)

#build 라는 폴더를 만든후 들어가서 cmake ../ 를 실행산다.
#그 후 make를 치면 빌드 완료 
