static const char norm_fg[] = "#91d4c3";
static const char norm_bg[] = "#021119";
static const char norm_border[] = "#659488";

static const char sel_fg[] = "#91d4c3";
static const char sel_bg[] = "#236C71";
static const char sel_border[] = "#91d4c3";

static const char urg_fg[] = "#91d4c3";
static const char urg_bg[] = "#145866";
static const char urg_border[] = "#145866";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
