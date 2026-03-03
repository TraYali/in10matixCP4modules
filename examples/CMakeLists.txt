add_executable(example main.cpp)

add_library(person)
target_sources(person PUBLIC FILE_SET CXX_MODULES FILES person.ixx PRIVATE person.cpp)
target_link_libraries(example PRIVATE person)

add_library(heroes)
target_sources(heroes PUBLIC FILE_SET CXX_MODULES FILES heroes.ixx goblin.ixx human.ixx elf.ixx PRIVATE heroes.cpp goblin.cpp human.cpp elf.cpp)
target_link_libraries(heroes PUBLIC person)
target_link_libraries(example PRIVATE heroes)

add_library(car)
target_sources(car PUBLIC FILE_SET CXX_MODULES FILES car.ixx car_engine.ixx car_conversions.ixx car_constants.ixx PRIVATE car.cpp)
target_link_libraries(example PRIVATE car)