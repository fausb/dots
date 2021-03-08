const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0a0f18", /* black   */
  [1] = "#29478C", /* red     */
  [2] = "#2D4B8D", /* green   */
  [3] = "#365DA7", /* yellow  */
  [4] = "#59659B", /* blue    */
  [5] = "#8D78A4", /* magenta */
  [6] = "#7089BE", /* cyan    */
  [7] = "#c6bece", /* white   */

  /* 8 bright colors */
  [8]  = "#8a8590",  /* black   */
  [9]  = "#29478C",  /* red     */
  [10] = "#2D4B8D", /* green   */
  [11] = "#365DA7", /* yellow  */
  [12] = "#59659B", /* blue    */
  [13] = "#8D78A4", /* magenta */
  [14] = "#7089BE", /* cyan    */
  [15] = "#c6bece", /* white   */

  /* special colors */
  [256] = "#0a0f18", /* background */
  [257] = "#c6bece", /* foreground */
  [258] = "#c6bece",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
