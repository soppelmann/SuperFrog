VFLAGS = -O3 --x-assign fast --x-initial fast --noassert
SDL_CFLAGS = `sdl2-config --cflags`
SDL_LDFLAGS = `sdl2-config --libs`

# Verilog Library
LIBS += -I../Nexys7

superfrog: superfrog.exe

%.exe: %.mk
	make -C ./sim -f Vtop_$<

%.mk: top_%.sv
	verilator ${VFLAGS} -I.. ${LIBS} \
	    -cc $< --exe main_$(basename $@).cpp -o $(basename $@) \
		-CFLAGS "${SDL_CFLAGS}" -LDFLAGS "${SDL_LDFLAGS}" \
		--Mdir "./sim"
all: superfrog

clean:
	rm -rf ./sim

.PHONY: all clean
