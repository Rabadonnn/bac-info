#!/usr/bin/env python

import os
import sys

program_string = '''\
#include <iostream>

using namespace std;

int main()
{{
    cout << "----- {project_name} -----\\n" << endl;
    cout << "\\n----- END -----" << endl;
}}
'''.format(project_name=sys.argv[1])

os.system("mkdir source/" + sys.argv[1])

with open("source/" + sys.argv[1] + "/main.cpp", "w") as file:
    file.write(program_string)

os.system("python3 compile.py " + sys.argv[1])

