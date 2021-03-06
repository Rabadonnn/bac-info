#!/usr/bin/env python3

import sys
import os

def compile_project(project_name):
    command = "clang++ source/" + project_name + "/main.cpp -o source/" + project_name + "/main && source/" + project_name + "/main"
    os.system(command)

def new_project(project_name):
    path = "source/" + project_name + "/main.cpp"
    if os.path.exists(path):
        print("\033[91mfile already exists")
        return
    program_string = '''\
#include <iostream>

using namespace std;

int main() {

}\
'''
    os.system("mkdir source/" + project_name)

    with open(path, "w") as file:
        file.write(program_string)

if sys.argv[1] == "c":
    compile_project(sys.argv[2])
elif sys.argv[1] == "n":
    new_project(sys.argv[2])
