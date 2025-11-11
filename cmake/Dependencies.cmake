include(FetchContent)

FetchContent_Declare(
    core-dataengine
    GIT_REPOSITORY ssh://git@github.com/marquesasarbitrage/core-dataengine.git
    GIT_TAG main  # or a release tag
)
FetchContent_MakeAvailable(core-dataengine)

set(PROJECT_IS_TOP_LEVEL OFF)

FetchContent_Declare(
    core-quant
    GIT_REPOSITORY ssh://git@github.com/marquesasarbitrage/core-quant.git
    GIT_TAG main  # or a release tag
)
FetchContent_MakeAvailable(core-quant)


