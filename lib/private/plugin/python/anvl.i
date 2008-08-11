/* ------------------------------------------------------------------- */
/* Copyright (c) 2007-2008 Hanzo Archives Limited.                     */
/*                                                                     */
/* Licensed under the Apache License, Version 2.0 (the "License");     */
/* you may not use this file except in compliance with the License.    */
/* You may obtain a copy of the License at                             */
/*                                                                     */
/*     http://www.apache.org/licenses/LICENSE-2.0                      */
/*                                                                     */
/* Unless required by applicable law or agreed to in writing, software */
/* distributed under the License is distributed on an "AS IS" BASIS,   */
/* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or     */
/* implied.                                                            */
/* See the License for the specific language governing permissions and */
/* limitations under the License.                                      */
/*                                                                     */
/* You may find more information about Hanzo Archives at               */
/*                                                                     */
/*     http://www.hanzoarchives.com/                                   */
/*                                                                     */
/* You may find more information about the WARC Tools project at       */
/*                                                                     */
/*     http://code.google.com/p/warc-tools/                            */
/* ------------------------------------------------------------------- */

/* anvl.i */
 %{
   #include <wport.h>
   #include <wanvl.h>
 
 %}
  

    extern const void * WAnvl;


    extern const char *   WAnvl_getKey  (const void * const);
    extern unsigned int     WAnvl_getKeyLen    (const void * const);
    extern warc_bool_t    WAnvl_setKey       (void * const, const char *,
          const unsigned int);
    extern const char *   WAnvl_getValue     (const void * const);
    extern unsigned int     WAnvl_getValueLen  (const void * const);
    extern warc_bool_t    WAnvl_setValue     (void * const, const char *,
          const unsigned int);
    extern warc_bool_t    WAnvl_isValid      (const void * const);


