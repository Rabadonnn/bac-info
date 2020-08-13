#!/usr/bin/env python

import os
import sys

program_string = '''\
#include <iostream>

using namespace std;

int main()
{{
    cout << "-----\\n{project_name}\\n-----\\n" << endl;
    cout << "\\n----- END -----" << endl;
}}
'''.format(project_name=sys.argv[2])

os.system("mkdir source/" + sys.argv[1])
os.system("mvim source/" + sys.argv[1] + "/main.cpp")

with open("source/" + sys.argv[1] + "/main.cpp", "w") as file:
    file.write(program_string)

os.system("python3 compile.py " + sys.argv[1])

