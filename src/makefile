CXX = g++

TARGET	= test.out

SRCS	= *.cpp

CFLAGS	= -Wall\
	-std=c++11

OBJS	= ${SRCS:%.cpp=%.o}


${TARGET}: ${OBJS}
	${CXX} -o $@ $^ ${LDFLAGS} ${LDGFLAGS}

%.o: %.cpp
	${CXX} -c $^ ${CFLAGS}

run: ${TARGET}
	./${TARGET}

clean:
	rm -rf *.o ${TARGET}

debug:
	make clean
	make "CFLAGS = ${CFLAGS} -g -O0"