cmake_minimum_required(VERSION 3.21)
project(MVS_HugeNumberCalculator C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(MVS_HugeNumberCalculator
        DoublyLinkedList.c
        DoublyLinkedList.h
        FizzBuzz.c
        HugeFloat.c
        HugeFloat.h
        HugeFloatOperator.c
        HugeFloatOperator.h
        HugeInt.c
        HugeInt.h
        HugeIntOperator.c
        HugeIntOperator.h
        HugeUnsignedInt.c
        HugeUnsignedInt.h
        HugeUnsignedIntOperator.c
        HugeUnsignedIntOperator.h
        ScanHugeNumber.c
        ScanHugeNumber.h
        ShowHugeNumber.c
        ShowHugeNumber.h)
