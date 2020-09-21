#!/usr/bin/python3

import matplotlib.pyplot as plt
import numpy as np
import sys

def take_data_of_the_demo(runtime):
    i = 0
    data_run = [0, 0, 0, 0, 0, 0, 0, 0]
    while 1:
        run = runtime.readline()
        if run == "###########################################################\n":
            break
        data_run[i] = run.strip()
        i += 1
    return data_run

def take_demo_time():
    demo = sys.argv[1]
    runtime = open("runtime.txt")
    data = runtime.readline()
    while 1:
        if data == demo+'\n':
            runtime.readline()
            break
        data = runtime.readline()
    data_run = take_data_of_the_demo(runtime)
    runtime.close()
    return data_run

def take_data_CPU(data_run):
    data_CPU = [0, 0, 0, 0, 0, 0, 0, 0]
    i = 0
    while i < 8:
        CPU = data_run[i].split()
        data_CPU[i] = int(CPU[2])
        i += 1
    return data_CPU

data_run = take_demo_time()
data_CPU = take_data_CPU(data_run)
plt.plot([1, 2, 3, 4, 5, 6, 7, 8], data_CPU, 'b--')
plt.xlabel(sys.argv[1])
plt.show()