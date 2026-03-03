add_executable(example main.cpp)

add_library(person)
target_sources(person PUBLIC FILE_SET CXX_MODULES FILES person.ixx PRIVATE person.cpp)
target_link_libraries(example PRIVATE person)

add_library(car)
target_sources(car PUBLIC FILE_SET CXX_MODULES FILES car.ixx car_engine.ixx car_conversions.ixx car_constants.ixx PRIVATE car.cpp)
target_link_libraries(example PRIVATE car)