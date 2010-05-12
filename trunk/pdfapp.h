/*
 * Utility object for handling a pdf application / view
 * Takes care of PDF loading and displaying and navigation,
 * uses a number of callbacks to the GUI app.
 */

typedef struct pdfapp_s pdfapp_t;

struct pdfapp_s
{
	/* current document params */
	char *filename;
	char *doctitle;
	pdf_xref *xref;
	/*pdf_outline *outline;*/
	fz_renderer *rast;
	int pagecount;

	/* current view params */
	float zoom;
	int rotate;
	fz_pixmap *image;

	/* current page params */
	int pageno;
	pdf_page *page;

	/* snapback history */
	/*int hist[256];
	int histlen;*/

	/* window system sizes */
	int scrw, scrh;
	/*int winw, winh;
	int shrinkwrap;*/

	/* event handling state */
	/*char number[256];
	int numberlen;

	int ispanning;
	int panx, pany;

	int iscopying;
	int selx, sely;
	fz_irect selr;*/

	/* client context storage */
	/*void *userdata;*/
};

void pdfapp_init(pdfapp_t *app);
void pdfapp_open(pdfapp_t *app, char *filename);
void pdfapp_close(pdfapp_t *app);

