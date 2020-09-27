import os
printf("-------------------------------Competetive Programming Assistant---------------------------------------")
printf("Enter the Contest Name : ")
contest_name = str(input())
printf("Enter the Number of Directories : ")
number = int(intput())
for i in range(number):
    printf("Enter Name of Problem : ")
    problem = str(input())
    os.mkdir("G:\Contests\" + contest_name + "\" + problem)
    code_file = open("G:\Contests" + contest_name + "\" + problem + "\" + problem + ".cpp", "w+")
    question_file = open("G:\Contests" + contest_name + "\" + problem + "\" + problem + ".txt", "w+")
    stdin = open("G:\Contests" + contest_name + "\" + problem + "\" + "input.txt", "w+")
    stdout = open("G:\Contests" + contest_name + "\" + problem + "\" + "output.txt", "w+")
    