add_library(pwrsp INTERFACE)

target_include_directories(pwrsp
  INTERFACE
  ${CMAKE_CURRENT_LIST_DIR}/include
)

target_link_libraries(pwrsp
  INTERFACE
  hardware_i2c
)

target_sources(pwrsp
  INTERFACE
  ${CMAKE_CURRENT_LIST_DIR}/ads1115.c
  ${CMAKE_CURRENT_LIST_DIR}/include/ads1115.h
  ${CMAKE_CURRENT_LIST_DIR}/include/registers.h
)
