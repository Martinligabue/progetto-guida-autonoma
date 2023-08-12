all:  centralECU steerByWire

BUILD := bin
INCLUDE := include
test: $(BUILD)/steerByWire.o
	gcc -v
	echo "a"

# -I percorso cartella headers u gay
#░▒▓   ~/university/sistemi-operativi/progetto-guida-autonoma   main ✘!󰄬   10:55  
#❯ gcc -I./include/Actuators/ ./src/Handle/CentralECU.c -o a

ACTUATORS_SOURCE := src/Actuators
ACTUATORS_INCLUDE := include/Actuators

steerByWire.o: $(ACTUATORS_SOURCE)/SteerByWire.c
	gcc -I $(INCLUDE) -c $(ACTUATORS_SOURCE)/SteerByWire.c -o $(BUILD)/SteerByWire.o

HANDLE_SOURCE := src/Handle
HANDLE_INCLUDE := include/Handle

centralECU.o: $(HANDLE_SOURCE)/CentralECU.c $(HANDLE_INCLUDE)/CentralECU.h
	gcc -I $(INCLUDE) -o $(BUILD)/CentralECU.o $(HANDLE_SOURCE)/CentralECU.c  $(BUILD)/SteerByWire.o


all: 
	gcc -v

clean:
	rm $(BUILD)/* 
