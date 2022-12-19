# Compiler und Flags
CC = g++
CFLAGS = -Wall -Wextra -std=c++17 -O3
OPATH = "outputs/"
RUNPATH = "executable/"

# Ziel des Makefiles
start: main.o trade_value_keeper.o csv_keeper.o;
	$(CC) $(CFLAGS) $(OPATH)main.o $(OPATH)trade_value_keeper.o $(OPATH)csv_keeper.o -o "$(RUNPATH)go"

# Regel zum Kompilieren von main.cpp
main.o: main.cpp
	$(CC) $(CFLAGS) -o "$(OPATH)main.o" -c main.cpp

trade_value_keeper.o: trade_value_keeper.cpp
	$(CC) $(CFLAGS) -o "$(OPATH)trade_value_keeper.o" -c trade_value_keeper.cpp

csv_keeper.o: csv_keeper.cpp
	$(CC) $(CFLAGS) -o "$(OPATH)csv_keeper.o" -c csv_keeper.cpp

# Regel zum Löschen von Objektdateien und ausführbaren Dateien
clean:
	rm -f $(OPATH)*.o start