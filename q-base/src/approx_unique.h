/*
© [2013] LinkedIn Corp. All rights reserved.
Licensed under the Apache License, Version 2.0 (the "License"); you may
not use this file except in compliance with the License. You may obtain
a copy of the License at  http://www.apache.org/licenses/LICENSE-2.0
 
Unless required by applicable law or agreed to in writing,
software distributed under the License is distributed on an "AS IS"
BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
implied.
*/
extern int 
ext_approx_unique(
   char *tbl,
   char *fld,
   char *cfld,
   long long *ptr_num_unique,
   double *ptr_estimate_accuracy_percent,
   int *ptr_estimate_is_good  
   )
;
//----------------------------
extern int 
approx_unique (
	       int *x,
	       char *cfld,
	       long long siz,
	       long long *y,
	       double *ptr_estimate_accuracy_percent,
	       int *ptr_estimate_is_good 
	       )
;
//----------------------------
