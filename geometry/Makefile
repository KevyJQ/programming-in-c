# Construye el projecto
#
# Para construir el projecto ejecuta
#
# $ make
#
# Para ejecutar el projecto
#
# $ make run
# 


# Directory donde estan los header (archivos .h).
LIBS := libs/

# Archivos a compilar
C_FILES := main.c
C_FILES += menu.c
C_FILES += cuadrado.c
C_FILES += circulo.c
C_FILES += rectangulo.c
C_FILES += opcion_area_perimetro.c


# Utiliza TABS en las reglas
all:
	@echo $(C_FILES)
	gcc -o main -I$(LIBS) $(C_FILES)

# @ es para que no imprima el comando.
run:
	@./main

clean:
	rm -rf main
