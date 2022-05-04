
#C++ Compiler
XC = g++

#Directories
OBJ_DIR=build
SRC_DIR=src
BIN_DIR=bin

#Include folders
INCLUDES=$(strip -I include)

#Compilating Flags
FLAGS= $(strip -Wall -Wextra $(INCLUDES))

#Create list of cpp files in SRC_DIR
SOURCE_FILES=$(wildcard $(SRC_DIR)/*.cpp)
#Create list of targer object files (.o) based on list of CPP files on SOURCE_FILES
OBJECT_FILES=$(SOURCE_FILES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)


#Link object files (.o) together into executable
$(BIN_DIR)/program.exe: $(OBJECT_FILES)	
	mkdir -p $(@D)
	$(XC) $(OBJ_DIR)/* -o $(BIN_DIR)/program.exe
#Compile each .ccp file in SRC_DIR 
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(@D)
	$(XC) $(FLAGS) -c $< -o $@

#	$(XC) $(FLAGS) -c $(SRC_DIR)/Main.cpp -o $(OBJ_DIR)/Main.o
clean:
	rm -r $(BIN_DIR)
	rm -r $(OBJ_DIR)