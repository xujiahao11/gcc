/* { dg-do compile } */
/* { dg-options "-O2 -mabi=lp64d -mcallee-save-gpr-in-fpr" } */

__attribute__ ((noipa)) void
foo (void)
{
  asm volatile ("" ::: "s0");
}

/* { dg-final { scan-assembler "movgr2fr\\.d" } } */
/* { dg-final { scan-assembler "movfr2gr\\.d" } } */
