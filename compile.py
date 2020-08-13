#!/usr/bin/env python3

import sys
import os

# script used to compile c++ projects from this folder

project_name = sys.argv[1]

command = "clang++ source/" + project_name + "/main.cpp -o main && source/" + project_name + "/main"

os.system(command)
