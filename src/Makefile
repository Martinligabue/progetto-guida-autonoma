
BUILD := build

test: $(BUILD)/steerByWire.o

ACTUATORS_SOURCE := src/Actuators
ACTUATORS_INCLUDE := include/Actuators

$(BUILD)/steerByWire.o: $(ACTUATORS_SOURCE)/SteerByWire.c $(ACTUATORS_INCLUDE)/SteerByWire.h
	gcc -c $(ACTUATORS_SOURCE)/SteerByWire.c

HANDLE_SOURCE := src/Handle
HANDLE_INCLUDE := include/Handle

$(BUILD)/centralECU.o: $(HANDLE_SOURCE)/CentralECU.c $(HANDLE_INCLUDE)/CentralECU.h
	gcc -c $(HANDLE_SOURCE)/CentralECU.c

