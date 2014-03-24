CMAKE_MINIMUM_REQUIRED(VERSION 2.8.8)

# header folder를 include 한다.
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/header)

#test.a라는 static library를 만든다.
ADD_LIBRARY(test STATIC helloworld.c)

#main.c이 실행 파일이라는 것을 알린다.
add_executable(chapter1 main.c)

#chapter1에 test.a library를 링킹한다.
target_link_libraries(chapter1 test)

