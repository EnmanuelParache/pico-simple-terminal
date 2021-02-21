# Define source directory
set(SOURCE_DIR 
        ./Source)

# Define include directory
set(INCLUDE_DIR 
        ./Include)

# Define sources 
set(SOURCES 
        simple_terminal.c 
        ${SOURCE_DIR}/utils.c 
        ${INCLUDE_DIR}/utils.h
        )

add_executable(simple_terminal
        ${SOURCES}
        )

target_include_directories(simple_terminal PRIVATE ${INCLUDE_DIR})

# Pull in our pico_stdlib which aggregates commonly used features
target_link_libraries(simple_terminal pico_stdlib)

# enable usb output, disable uart output
pico_enable_stdio_usb(simple_terminal 1)
pico_enable_stdio_uart(simple_terminal 0)

# create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(simple_terminal)

# add url via pico_set_program_url
project_auto_set_url(simple_terminal)