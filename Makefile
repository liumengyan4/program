TARGET=exec
SRC = main.cpp
ARGS = rio low_sweetness 28 middle 

$(TARGET) : $(SRC)
	g++ -g -o $@ $<

clean:
	rm -rf	$(TARGET)

run:
	$(TARGET)
	./$(TARGET) $(ARGS)