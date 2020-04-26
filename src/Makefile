CXXFLAGS = -Wall -g    # Opções do compilador: todos warnings e debug info

PROG = TheBlockchain
FONTES = main.cpp block.cpp sha256.cpp
OBJETOS = $(FONTES:.cpp=.o)

$(PROG): $(OBJETOS)
	g++ $(CXXFLAGS) $(OBJETOS) -o $@

clean:
	rm -f $(OBJETOS) $(PROG)

depend:
	makedepend -- ${CFLAGS} -- ${FONTES}

run:
	./TheBlockchain

# PROG = ... define o nome do programa executável
# FONTES = ... define todos os módulos
# OBJETOS = ... define como transformar um .cpp em um .o
# clean permite apagar os arquivos .o e executável gerados (make clean)