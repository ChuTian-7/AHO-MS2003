ADD_LIBRARY(graph_src graph.cpp)
ADD_LIBRARY(brute_force_src brute_force.cpp)
ADD_LIBRARY(problem_solver_src UniqueQueue.cpp ProblemDefine.cpp ProblemSolver.cpp LCT.cpp Flow.cpp)


TARGET_INCLUDE_DIRECTORIES(graph_src PUBLIC ../include)
TARGET_INCLUDE_DIRECTORIES(brute_force_src PUBLIC ../include)
TARGET_INCLUDE_DIRECTORIES(problem_solver_src PUBLIC ../include)