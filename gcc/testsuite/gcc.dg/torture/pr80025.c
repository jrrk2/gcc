/* { dg-do compile } */
/* { dg-options "-g -w -ftracer" } */

int kq;
long int cs, l3;

long int
gn (void)
{
}

void
yc (int un, short int z6, unsigned short int il)
{
  (void)un;
  (void)z6;
  (void)il;
}

int
w6 (void)
{
  kq -= cs;
  cs = !gn ();
  yc (cs ^= (l3 ^ 1) ? (l3 ^ 1) : gn (), &yc, kq);
}
