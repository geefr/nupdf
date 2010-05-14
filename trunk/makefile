CC=mipsel-linux-gcc
STRIP=mipsel-linux-strip
CFLAGS=-static  -lz  -ldl -lSDL -lmupdf  -lfitz -lfitzdraw -lcmaps -lfonts -lfreetype -lpthread -lm -ljpeg -lz  -L.
SOURCES=main.c pdfapp.c

all: dingoo nanonote

dingoo:
	$(CC) $(SOURCES) $(CFLAGS) -DDINGOO_BUILD -o nupdf.dge
	$(STRIP) nupdf.dge

nanonote:
	$(CC) $(SOURCES) $(CFLAGS) -o nupdf
	$(STRIP) nupdf

debug: dingoo_debug nanonote_debug

debug_dingoo:
	$(CC) $(SOURCES) $(CFLAGS) -DDINGOO_BUILD -g -o nupdf.dge

debug_nanonote:
	$(CC) $(SOURCES) $(CFLAGS) -g -o nupdf

clean:
	rm nupdf nupdf.dge
