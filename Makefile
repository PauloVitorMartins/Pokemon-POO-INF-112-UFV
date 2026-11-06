FONTES = $(shell find src -type f -name '*.cpp')
PASTAS = $(shell find src include -type d)

INCLUDES = $(addprefix -I,$(PASTAS))

CABECALHOS_MODELO = Treinador.hpp Pokemon.hpp Golpe.hpp Item.hpp
CABECALHOS_PRESENTES = $(notdir $(shell find src include -type f -name '*.hpp'))
CABECALHOS_FALTANTES = $(filter-out $(CABECALHOS_PRESENTES),$(CABECALHOS_MODELO))

ifneq ($(strip $(CABECALHOS_FALTANTES)),)
MODO_MODELO = 0
FONTES_COMPILACAO = 
else
MODO_MODELO = 1
FONTES_COMPILACAO = $(FONTES)
endif

compilar: raylib
	@echo "Modo: $(MODO_MODELO)"
	@mkdir -p lib/.build
	g++ -std=c++11 -DMODELO_DISPONIVEL=$(MODO_MODELO) \
	$(INCLUDES) $(INCLUDES_BIBLIOTECAS) \
	$(FONTES_COMPILACAO) lib/apoio/*.cpp lib/interface/*.cpp \
	$(OBJETOS_RAYLIB) $(BIBLIOTECAS) \
	-o lib/.build/pokemon

run: compilar
	cd lib && ./.build/pokemon

clean:
	rm -rf lib/.build

all: compilar

.PHONY: compilar run clean all

include lib/bibliotecas.mk