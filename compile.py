#!/usr/bin/env python3

import sys
import os

# script used to compile c++ projects from this folder

project_name = sys.argv[1]

command = "cd " + project_name + "&& clang++ main.cpp -o main && ./main && cd .."

os.system(command)
