all.out:fun.o main.o
	gcc fun.o main.o -o all.out
fun.o:fun.c
	gcc fun.c -c
main.o:main.c
	gcc main.c -c			
clean:
	rm -rf*.o*.out
run:all.out
	./a.out
