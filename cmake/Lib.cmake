add_library(rnd-ir-linearpricing 
    STATIC 
        src/datafetch.cpp)
target_link_libraries(rnd-ir-linearpricing PUBLIC core-quant)
target_link_libraries(rnd-ir-linearpricing PUBLIC core-dataengine)
target_include_directories(rnd-ir-linearpricing  PUBLIC include)
