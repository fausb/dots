const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#021119", /* black   */
  [1] = "#145866", /* red     */
  [2] = "#236C71", /* green   */
  [3] = "#2E897A", /* yellow  */
  [4] = "#45947D", /* blue    */
  [5] = "#357983", /* magenta */
  [6] = "#2D9F89", /* cyan    */
  [7] = "#91d4c3", /* white   */

  /* 8 bright colors */
  [8]  = "#659488",  /* black   */
  [9]  = "#145866",  /* red     */
  [10] = "#236C71", /* green   */
  [11] = "#2E897A", /* yellow  */
  [12] = "#45947D", /* blue    */
  [13] = "#357983", /* magenta */
  [14] = "#2D9F89", /* cyan    */
  [15] = "#91d4c3", /* white   */

  /* special colors */
  [256] = "#021119", /* background */
  [257] = "#91d4c3", /* foreground */
  [258] = "#91d4c3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
