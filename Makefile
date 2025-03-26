CC := gcc
CFLAGS := -Wall -Werror -Wextra -std=c11

#Builds football.exe
football.exe: football_main.o football.o
	$(CC) $(CFLAGS) -o football.exe football_main.o football.o

#Builds report.exe
report.exe: report_main.o report.o
	$(CC) $(CFLAGS) -o report.exe report_main.o report.o

#Compiles object files
football_main.o: football_main.c football.h
	$(CC) $(CFLAGS) -c football_main.c

football.o: football.c football.h
	$(CC) $(CFLAGS) -c football.c

report_main.o: report_main.c report.h
	$(CC) $(CFLAGS) -c report_main.c

report.o: report.c report.h
	$(CC) $(CFLAGS) -c report.c

#Cleans up compiled files
clean:
	rm -f *.o football.exe report.exe
