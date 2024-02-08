
def fileread(fname):
    array=[]
    with open(fname) as f:

        for line in f:
            array.append(line)
        print(array)

fileread('q1.py')