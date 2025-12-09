#!/bin/bash

cxx_program_calc=Program-Simple-Calculator-Intro
build_dir="../build/${cxx_program_calc}"

cmake -S "${cxx_program_calc}" -B "${build_dir}"

cmake --build "${build_dir}"
