/* user and group to drop privileges to */
static const char *user  = "beats";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[INPUT_ALT] = "#227799", /* during input, second color */
	[FAILED] = "#CC3333",   /* wrong password */
};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "init",       STRING,  &colorname[INIT] },
		{ "input",       STRING,  &colorname[INPUT] },
		{ "inputAlt",       STRING,  &colorname[INPUT_ALT] },
		{ "failed",       STRING,  &colorname[FAILED] },
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time to cancel lock with mouse movement in seconds */
static const int timetocancel = 3;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
