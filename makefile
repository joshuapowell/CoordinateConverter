# You can change your compiler to gcc / g++ here.
CC=g++
# Add whatever flags you want to use here.
CFLAGS=-c -Wall

all:
    $(CC) $(CFLAGS) main.cpp -o CoordinateConverter
