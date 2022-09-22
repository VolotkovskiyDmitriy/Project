start: initFunc out rm

initFunc: funcF.c funcG.c main2.c
	g++ -c funcF.c -o funcF.o
	g++ -c funcG.c -o funcG.o
	g++ -c main2.c -o main2.o
	g++ funcF.o funcG.o main2.o -o start

out: initFunc
	./start

rm: out initFunc
	rm start
	rm funcF.o
	rm funcG.o
	rm main2.o
