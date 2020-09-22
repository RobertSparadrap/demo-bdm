#!/usr/bin/python3

import matplotlib.pyplot as plt
import numpy as np
import sys

def nb_data():
    runtime = open("runtime.txt")
    i = 0
    while 1:
        run = runtime.readline()
        if run == "###########################################################\n":
            break
        i += 1
    return i - 2

def take_data_of_the_demo(runtime, x):
    i = 0
    data_run = [0] * x
    while 1:
        run = runtime.readline()
        if run == "###########################################################\n":
            break
        data_run[i] = run.strip()
        i += 1
    return data_run

def search_loop(runtime, demo, data):
    while 1:
        if data == demo+'\n':
            runtime.readline()
            break
        data = runtime.readline()
    return data

def take_demo_time(i, x):
    demo = sys.argv[1]
    runtime = open("runtime.txt")
    j = 0
    while j < 1+i*(x+3)*2:
        data = runtime.readline()
        j += 1
    data = search_loop(runtime, demo, data)
    data_run = take_data_of_the_demo(runtime, x)
    runtime.close()
    return data_run

def take_data_CPU(data_run, x):
    data_CPU = [0] * x
    i = 0
    while i < x:
        CPU = data_run[i].split()
        data_CPU[i] = int(CPU[2])
        i += 1
    return data_CPU

def nb_runtimes():
    try:
        demo = sys.argv[1]
    except:
        print("Choose a Demo:\ncell_division\ndiffusion\ngene_regulation\nmultiple_simulations\nsom_clustering\ntumor_concept")
        exit()
    runtime = open("runtime.txt")
    data = runtime.readline()
    i = 0
    while 1:
        if data == demo+'\n':
            runtime.readline()
            i += 1
        if data == "":
            if i == 0:
                print("Choose a Demo:\ncell_division\ndiffusion\ngene_regulation\nmultiple_simulations\nsom_clustering\ntumor_concept")
                exit()
            return i
        data = runtime.readline()
    return i

i = nb_runtimes()
j = 0
x = 1
y = 0
while j < i:
    x = nb_data()
    data_run = take_demo_time(j, x)
    data_CPU = take_data_CPU(data_run, x)
    plt.plot(range(x), data_CPU, 'b--')
    j += 1
plt.xlabel(sys.argv[1])
plt.show()