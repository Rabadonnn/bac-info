import os

def cleanFile(filepath):
    with open(filepath, "r") as f:
        lines = f.readlines()

    with open(filepath, "w") as f:
        i = 0
        while i < len(lines):
            line = lines[i]

            if not 'cout << "-' in line.strip("\n") and i != len(lines) - 2 and i != len(lines) - 3:
                f.write(line)

            i += 1
for dir in next(os.walk('./source'))[1]:
    if dir != "./source":
        file = dir + "/main.cpp"
        print("Cleaning file: " + file)
        #  cleanFile(file)

print("Done")
