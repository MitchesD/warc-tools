
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

#ifndef	__WARC_HTTRACK_DEFAULT_VALUES__
#define	__WARC_HTTRACK_DEFAULT_VALUES__


/* to mix C and C++ */
#ifdef __cplusplus
extern "C"
  {
#endif

#define HTTRACK_DEFAULT_TIMESTAMP  "0000-00-00T00:00:00Z"
#define HTTRACK_DEFAULT_MIMETYPE   "octet/stream" 
#define HTTRACK_DEFAULT_IP         "0.0.0.0"

#define HTTRACK_TMP_DIR            "."
#define HTTRACK_OUTPUT_WARC        "outfile.warc.gz"
#define HTTRACK_WARC_SIZE          (1024 * 1024 * 1024)

#ifdef __cplusplus
  }

#endif

#endif /* __WARC_HTTRACK_DEFAULT_VALUES__ */