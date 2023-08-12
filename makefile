all:  clean centralECU.o steerByWire.o

BUILD := bin
INCLUDE := include

ACTUATORS_SOURCE := src/Actuators
ACTUATORS_INCLUDE := include/Actuators

steerByWire.o: $(ACTUATORS_SOURCE)/SteerByWire.c
	gcc -I $(INCLUDE) -c $(ACTUATORS_SOURCE)/SteerByWire.c -o $(BUILD)/SteerByWire.o

HANDLE_SOURCE := src/Handle
HANDLE_INCLUDE := include/Handle

centralECU.o: $(HANDLE_SOURCE)/CentralECU.c $(HANDLE_INCLUDE)/CentralECU.h steerByWire.o
	gcc -I $(INCLUDE) -o $(BUILD)/CentralECU.o $(HANDLE_SOURCE)/CentralECU.c  $(BUILD)/SteerByWire.o

clean:
	rm $(BUILD)/*