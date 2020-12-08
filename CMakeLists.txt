cmake_minimum_required(VERSION 2.8.8)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(game
        Board.cpp
        main.cpp
	Hard.cpp
	Easy.cpp
)

ADD_EXECUTABLE(testB
	Board.cpp
	testMain.cpp
	Hard.cpp
	Easy.cpp
)
