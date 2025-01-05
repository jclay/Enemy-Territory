cmake_minimum_required(VERSION 3.30)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_COLOR_DIAGNOSTICS ON)

project(Enemy-Territory LANGUAGES C)

add_library(qcommon STATIC
  src/qcommon/cm_load.c
  src/qcommon/cm_local.h
  src/qcommon/cm_patch.c
  src/qcommon/cm_patch.h
  src/qcommon/cm_polylib.c
  src/qcommon/cm_polylib.h
  src/qcommon/cm_public.h
  src/qcommon/cm_test.c
  src/qcommon/cm_trace.c
  src/qcommon/cmd.c
  src/qcommon/common.c
  src/qcommon/cvar.c
  src/qcommon/dl_local.h
  src/qcommon/dl_main_stubs.c
  src/qcommon/dl_public.h
  src/qcommon/files.c
  src/qcommon/huffman.c
  src/qcommon/md4.c
  src/qcommon/msg.c
  src/qcommon/net_chan.c
  src/qcommon/qcommon.h
  src/qcommon/qfiles.h
  src/qcommon/unzip.c
  src/qcommon/unzip.h
  src/qcommon/vm_interpreted.c
  src/qcommon/vm_local.h
  src/qcommon/vm.c
  # src/qcommon/vm_x86.c
  # src/qcommon/dl_main_curl.c
  # src/qcommon/dl_main.c
)
target_include_directories(qcommon
  PRIVATE
    src
)
target_compile_options(qcommon
  PRIVATE
    -include ${PROJECT_SOURCE_DIR}/src/mac/MacPrefix.h
)