/* 
  Here, there is a specialized bless functin for warc-tools library classes
  It is for Ruby wrapper use purpuse, only the class used in this warpper may have
  a specialized blmess function here
 */


#include <warc.h>
#include <wbloc.h>       /* WBloc */

WPUBLIC void * bless_WFile (const char  * fname, const warc_u32_t  max_size, wfile_mode_t mode, const wfile_comp_t compressed, const char * dname )
{
  return (bless (WFile, fname, max_size, mode, compressed, dname));
}

WPUBLIC void * bless_WRecord ()
{
return (bless (WRecord));
}

WPUBLIC void * bless_WBloc (void  * wfile, void  * wrecord, const warc_u32_t alloc)
{
void * x;

x = bless (WBloc, wfile, wrecord, alloc);

return (x);
}
