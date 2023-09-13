project(SleepyHollow)

file(GLOB_RECURSE source *.cpp *.c)
file(GLOB_RECURSE header *.hpp *.h *.inl)

add_definitions(-DSH_EXPORT)

add_library(${PROJECT_NAME} SHARED ${source} ${header})
target_link_libraries(${PROJECT_NAME})
