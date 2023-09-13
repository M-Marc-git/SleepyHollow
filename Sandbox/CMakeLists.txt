project(Sandbox)

file(GLOB_RECURSE source *.cpp *.c)
file(GLOB_RECURSE header *.hpp *.h *.inl)

add_executable(${PROJECT_NAME} ${source} ${header})
target_link_libraries(${PROJECT_NAME} SleepyHollow)
