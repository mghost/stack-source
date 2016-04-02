n=node
nc=$(n).cpp
nh=$(n).h
no=$(n).o
s=stack
sc=$(s).cpp
sh=$(s).h
so=$(s).o
m=main
mc=$(m).cpp

run: compile_main
	./$(m)

compile_main: compile_stack $(mc)
	g++ -o $(m) $(mc) $(so) $(no)

compile_stack: compile_node $(sc) $(sh)
	g++ -o $(so) -c $(sc) $(no)

compile_node: $(nc) $(nh)
	g++ -o $(no) -c $(nc)

