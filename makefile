DEPS=sort

compile: main.c
	gcc main.c -o $(DEPS)
runBubble: $(DEPS)
	./sort bubble 5 6 9 7 6
runSelect: $(DEPS)
	./sort selection 5 6 9 7 6 
runInsert: $(DEPS)
	./sort insertion 5 6 9 7 6