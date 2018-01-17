all.out:func.o main.o
	gcc func.o main.o -o all.out
func.o:func.c
	gcc func.c -c
main.o:main.c
	gcc main.c -c			
clean:
	rm -rf *.o
run:all.out clean
	./all.out
