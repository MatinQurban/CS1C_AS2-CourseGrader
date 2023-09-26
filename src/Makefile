CC = g++
TARGET = main
OBJS = Assignment.o Course.o Student.o Submission.o

all: $(TARGET)

$(TARGET): $(OBJS) main.cpp Assignment.h Course.h Student.h Submission.h Assignment.cpp Course.cpp Student.cpp Submission.cpp
	$(CC) main.cpp -o $(TARGET) $(OBJS)

$(OBJS): %.o: %.cpp %.h
	$(CC) -c $< -o $@

clean:
	rm -f $(TARGET) *.o 

