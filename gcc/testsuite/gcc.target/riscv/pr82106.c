/* { dg-do compile } */
/* { dg-options "-march=rv32ifd -mabi=ilp32d -O2 -mtune=generic" } */

double mla(float fa0, float fa1, float fa2, float fa3, float fa4, float fa5, 
    float fa6, float fa7, int a0, int a1, int a2, int a3, int a4, int a5, int 
        a6, double a7_s0, double unused)
{
  return a7_s0;
}

/* { dg-final { scan-assembler-not "fld\tfa0,12(sp)" } } */
/* { dg-final { scan-assembler-times "fld\tfa0,8(sp)" 1 } } */
