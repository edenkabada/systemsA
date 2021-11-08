 main.o: main.c
	gcc -Wall -c main.c NumClass.h

 basicClassification.o: basicClassification.c
	gcc -Wall -c basicClassification.c NumClass.h

 advancedClassificationLoop.o: advancedClassificationLoop.c
	gcc -Wall -c advancedClassificationLoop.c NumClass.h

 advancedClassificationRecursion.o: advancedClassificationRecursion.c
	gcc -Wall -c advancedClassificationRecursion.c NumClass.h

 loops: NumClass.h basicClassification.o advancedClassificationLoop.o
	ar rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

 recursives:  NumClass.h basicClassification.o advancedClassificationRecursion.o
	ar rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

 recursived:  NumClass.h basicClassification.o advancedClassificationRecursion.o
	ar rcs libclassrec.so basicClassification.o advancedClassificationRecursion.o

 loopd: NumClass.h basicClassification.o advancedClassificationLoop.o
	ar rcs libclassloops.so basicClassification.o advancedClassificationLoop.o

 mains: recursives main.o
	gcc -Wall -o mains basicClassification.o advancedClassificationRecursion.o libclassrec.a main.o

 maindloop: loopd main.o 
	gcc -Wall -o maindloop basicClassification.o advancedClassificationLoop.o libclassloops.so main.o


 maindrec: recursived main.o
	gcc -Wall -o maindrec basicClassification.o advancedClassificationRecursion.o libclassrec.so main.o 

 all:
	mains maindloop maindrec

 clean:
	rm -f *.o *.a *.so *.gch progmains progmaind 
