include(FetchContent)

FetchContent_Declare(
  glfw
  GIT_REPOSITORY https://github.com/glfw/glfw.git
  GIT_TAG        3.4
)
FetchContent_MakeAvailable(glfw)

FetchContent_Declare(
  glad
  GIT_REPOSITORY https://github.com/Dav1dde/glad.git
  GIT_TAG        v0.1.36
)
FetchContent_MakeAvailable(glad)

add_executable(chess_engine main.cpp board.cpp move.cpp engine.cpp)

target_include_directories(chess_engine PRIVATE
    ${PROJECT_SOURCE_DIR}/include
    ${glad_SOURCE_DIR}/include
)

target_link_libraries(chess_engine PRIVATE glfw glad)
