dir_path = "D:/monhoc/vsworkspace/python/luckydraw5/"

def readFile():
    # cwd = os.getcwd()
    # print(cwd)
    # dir_path = os.path.dirname(os.path.realpath(__file__))

    lastkMark = lastkMarkNum = None

    with open(os.path.join(dir_path, "v.txt"), "r") as f:
        firstLine = ""
        secondLine = ""
        for i, line in enumerate(f):
            # get last line bin
            if "b" in line:
                lastb: str = line
                lastbNum: int = i

            # get last line dec
            if "k" in line:
                lastk: str = line
                lastkNum: int = i
                if "*k" in line:
                    lastkMark = line
                    lastkMarkNum = i

            # get last line m
            if "m" in line:
                lastm: str = line
                lastmNum: int = i

            if i == 0:
                firstLine: str = line

            if i == 1:
                secondLine: str = line

        dictLast = {
            "lastb": (lastbNum, lastb),
            "lastk": (lastkNum, lastk),
            "lastkMark": (lastkMarkNum, lastkMark),
            "lastm": (lastmNum, lastm),
        }

        return firstLine, secondLine, dictLast


def appendFile(line: str):
    # dir_path = os.path.dirname(os.path.realpath(__file__))
    f = open(os.path.join(dir_path, "v.txt"), "a")
    f.write("\n")
    f.write(line)
    f.close()


def WriteFile(numLine, binLine):
    # dir_path = os.path.dirname(os.path.realpath(__file__))

    with fileinput.FileInput(
        os.path.join(dir_path, "v.txt"), inplace=True, backup=".bak"
    ) as f:
        for i, line in enumerate(f):
            if i == numLine:
                print(binLine, end="")
                # print(binLine, end ="\n")
            else:
                print(line, end="")


def insertFile(numBinLine, binLine):
    # dir_path = os.path.dirname(os.path.realpath(__file__))

    with fileinput.FileInput(
        os.path.join(dir_path, "v.txt"), inplace=True, backup=".bak"
    ) as f:
        for i, line in enumerate(f):
            if i == numBinLine:
                line = line.strip("\n")
                print(line + "\n" + binLine, end="")
            else:
                print(line, end="")


def deleteLineInFile():
    with open(os.path.join(dir_path, "v.txt"), "r") as f:
        lines = f.readlines()
    # Maximum 50 line
    if len(lines) > 50:
        with open(os.path.join(dir_path, "v.txt"), "w") as f:
            for l in range(len(lines)):
                # delete thirth line
                if l != 2:
                    f.write(lines[l])


def decimalToBinary(n):
    return bin(n).replace("0b", "")


def binaryToDecimal(n):
    return int(n, 2)


def xorBinaryToDec(n):
    result = ""
    for c in n:
        result += str(int(c) ^ 1)  # xor with 1 and convert back to string
    return result