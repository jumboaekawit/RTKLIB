cmake_minimum_required(VERSION 4.2)


set(CMAKE_C_STANDARD 23)

project(rtkconv LANGUAGES C)

add_executable(rinex
       main.c
        src/rtkcmn.c
        src/rinex.c
        src/sbas.c
        src/preceph.c
        src/rcvraw.c
        src/convrnx.c
        src/rtcm.c
        src/rtcm2.c
        src/rtcm3.c
        src/rtcm3e.c
        src/pntpos.c
        src/ionex.c
        src/ephemeris.c

        src/rcv/novatel.c
        src/rcv/ss2.c
        src/rcv/ublox.c
        src/rcv/crescent.c
        src/rcv/skytraq.c
        src/rcv/javad.c
        src/rcv/nvs.c
        src/rcv/binex.c
        src/rcv/rt17.c
        src/rcv/septentrio.c)

include_directories(src src/rcv lib/iers/src)
link_libraries(lib/openblas/libopenblas.lib)
link_directories(lib/iers lib/omf lib/openblas)


