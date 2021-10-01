import os 

os.system("sudo g++ -c main.cpp")
os.system("sudo g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system")
os.system("sudo ./sfml-app")
