#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{FILE *f;
int a;
char *s,c;
f = fopen("./app/wdata/testlex.tst","w+");
s = "warc";
fwrite (s,strlen(s),1,f);
c = '/';
fwrite (&c,1,1,f);
s = "0.9 7583 response http:";
fwrite (s,strlen(s),1,f);
c = '/';
fwrite (&c,1,1,f);
c = '/';
fwrite (&c,1,1,f);
s = "www.archive.org";
fwrite (s,strlen(s),1,f);
c = '/';
fwrite (&c,1,1,f);
s ="images";
fwrite (s,strlen(s),1,f);
c = '/';
fwrite (&c,1,1,f);
s = "logo.jpg 20050708010101 message";
fwrite (s,strlen(s),1,f);
c = '/';
fwrite (&c,1,1,f);
s = "http uuid://a4b26b6b-f918-4136-af04-f859d75aebe5";
fwrite (s,strlen(s),1,f);
a = 0x0D;
fwrite(&a,1,1,f);
a = 0x0A;
fwrite(&a,1,1,f);
s = "IP-Address: 207.241.224.241";
fwrite (s,strlen(s),1,f);
a = 0x0D;
fwrite(&a,1,1,f);
a = 0x0A;
fwrite(&a,1,1,f);
s = "\tChecksum: sha1:2ZWC6JAT6KNXKD37F7MOEKXQMRY75YY4";
fwrite (s,strlen(s),1,f);
a = 0x0D;
fwrite(&a,1,1,f);
a = 0x0A;
fwrite(&a,1,1,f);
s = "Related-Record-ID: uuid:f569983a-ef8c-4e62-b347-295b227c3e51";
fwrite (s,strlen(s),1,f);
a = 0x0D;
fwrite(&a,1,1,f);
a = 0x0A;
fwrite(&a,1,1,f);
a = 0x0D;
fwrite(&a,1,1,f);
a = 0x0A;
fwrite(&a,1,1,f);
s = "Data";
fwrite (s,strlen(s),1,f);
a = 0x0D;
fwrite(&a,1,1,f);
a = 0x0A;
fwrite(&a,1,1,f);
a = 0x0D;
fwrite(&a,1,1,f);
a = 0x0A;
fwrite(&a,1,1,f);
fclose (f);
}
